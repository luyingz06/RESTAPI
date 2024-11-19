import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient
from action_interfaces.action import Mission  # Replace with your custom action definition
import requests


class RN1(Node):
    """
    ROS2 Node 1 (RN1): Interacts with REST API and communicates with ROS2 Action Server.
    """
    def __init__(self):
        super().__init__('rn1')
        self.client = ActionClient(self, Mission, 'mission')
        self.api_url = 'http://127.0.0.1:5000/mission'  # REST API URL
        self.get_logger().info('RN1 node started')

        # Create a timer to poll the API every second
        self.timer = self.create_timer(1.0, self.poll_api_and_send_action)

    def poll_api_and_send_action(self):
        """
        Polls the REST API endpoint and sends action goals to the Action Server.
        """
        try:
            self.get_logger().info("Attempting to fetch data from REST API...")
            response = requests.get(self.api_url, timeout=5)
            response.raise_for_status()
            missions = response.json()
            
            # missions is: {'missions': [{'action': 'scan', 'id': 1, 'order': 10}]}
            # missions['missions'][0] is: {'action': 'scan', 'id': 1, 'order': 10}
            if missions:
                if missions and 'missions' in missions and all(
                    {'id', 'action', 'order'}.issubset(mission.keys()) for mission in missions['missions']
                    ):
                    self.get_logger().info(f"Processing all missions: {missions['missions']}")
                
                    # Send all missions as a single goal
                    self.send_action_goal(missions['missions'])
                else:
                    self.get_logger().warn("Incomplete mission data received")
            else:
                self.get_logger().info("No new missions found")

        except requests.exceptions.ConnectionError:
            self.get_logger().error("Failed to connect to API: Connection error")
        except requests.exceptions.Timeout:
            self.get_logger().error("Failed to connect to API: Timeout error")
        except requests.RequestException as e:
            self.get_logger().error(f"API request failed: {e}")

    def send_action_goal(self, missions):
        """
        Sends batch missions as a single ROS action goal to the Action Server.
        """
        try:
            if not isinstance(missions, list):
                self.get_logger().error("Missions must be a list of mission dictionaries.")
                return

            # Prepare arrays for the goal message
            ids = [mission['id'] for mission in missions]
            actions = [mission['action'] for mission in missions]
            orders = [mission['order'] for mission in missions]

            # Create and populate the action goal
            action_goal = Mission.Goal()
            action_goal.ids = ids  # List of integers for mission IDs
            action_goal.actions = actions  # List of strings for mission actions
            action_goal.orders = orders  # List of integers for mission orders

            # Wait for the Action Server to become available
            if not self.client.wait_for_server(timeout_sec=5.0):
                self.get_logger().error("Action Server not available!")
                return

            self.get_logger().info(f"Sending batch goal to Action Server: {missions}")

            # Send the goal asynchronously
            send_goal_future = self.client.send_goal_async(action_goal, feedback_callback=self.feedback_callback)
            send_goal_future.add_done_callback(self.goal_response_callback)

        except Exception as e:
            self.get_logger().error(f"Failed to send action goal: {e}")


    def feedback_callback(self, feedback_msg):
        """
        Callback for receiving feedback from the Action Server.
        """
        try:
            self.get_logger().info(f"Feedback received: {feedback_msg.feedback.sequence}")
        except AttributeError:
            self.get_logger().warn("Unexpected feedback format received")

    def goal_response_callback(self, future):
        """
        Callback for handling the Action Server's response to the goal.
        """
        try:
            goal_handle = future.result()
            if not goal_handle.accepted:
                self.get_logger().warn("Goal rejected by Action Server")
                return

            self.get_logger().info("Goal accepted. Waiting for result...")
            result_future = goal_handle.get_result_async()
            result_future.add_done_callback(self.get_result_callback)
        except Exception as e:
            self.get_logger().error(f"Error in goal response: {e}")

    def get_result_callback(self, future):
        """
        Callback for receiving the result of the action.
        """
        try:
            result = future.result().result
            self.get_logger().info(f"Result received: {result}")
        except Exception as e:
            self.get_logger().error(f"Failed to process action result: {e}")

    def destroy_node(self):
        """
        Custom cleanup for shutting down the node.
        """
        self.get_logger().info("Shutting down RN1 node")
        super().destroy_node()


def main(args=None):
    """
    Main entry point for the RN1 node.
    """
    rclpy.init(args=args)
    node = RN1()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()

