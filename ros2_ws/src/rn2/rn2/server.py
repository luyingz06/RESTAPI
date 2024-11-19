'''
Author: Luying Zhang
Date: November 2024
Description: ROS2 Node 2 (RN2): Hosts the Action Server to process Mission actions.
'''

import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer
from action_interfaces.action import Mission

class RN2(Node):
    """
    ROS2 Node 2 (RN2): Hosts the Action Server to process Mission actions.
    """
    def __init__(self):
        super().__init__('rn2')
        # Initialize the action server with the execute_callback, goal_callback, and cancel_callback
        self.action_server = ActionServer(
            self,
            Mission,
            'mission',
            execute_callback=self.execute_callback,
            goal_callback=self.goal_callback,
            cancel_callback=self.cancel_callback,
        )
        self.get_logger().info("RN2 Action Server started")

    def goal_callback(self, goal_request):
        """
        Callback for evaluating and accepting/rejecting goals.
        """
        self.get_logger().info(f"Received goal request: ids={goal_request.ids}, actions={goal_request.actions}, orders={goal_request.orders}")
        return rclpy.action.GoalResponse.ACCEPT  # Accept the goal request

    def cancel_callback(self, goal_handle):
        """
        Callback for handling cancellation requests.
        """
        self.get_logger().info("Cancel request received")
        return rclpy.action.CancelResponse.ACCEPT  # Accept the cancel request

    async def execute_callback(self, goal_handle):
        """
        Callback to process the goal. Executes the action and sends feedback/results.
        """
        goal = goal_handle.request
        self.get_logger().info(f"Executing batch mission: ids={goal.ids}, actions={goal.actions}, orders={goal.orders}")

        feedback = Mission.Feedback()
        feedback.feedback_message = "Executing batch mission..."
        feedback.sequence = []  # Initialize the sequence for the feedback message

        # Simulate processing each mission in the batch
        for idx, mission_id in enumerate(goal.ids):
            mission_action = goal.actions[idx]
            mission_order = goal.orders[idx]
            mission_id = goal.ids[idx]
            
            # Append each mission's step to the feedback sequence
            feedback.sequence.append(f"Step {mission_order}: {mission_id, mission_action}")
            goal_handle.publish_feedback(feedback)  # Send feedback after each step

        # After completing all missions in the batch, finalize the result
        goal_handle.succeed()  # Mark the goal as succeeded
        result = Mission.Result()
        result.success = True
        result.message = "All missions completed successfully."
        result.sequence = feedback.sequence  # Return the sequence of actions performed

        # Log and return the final result to the client
        self.get_logger().info(f"Mission completed: {result.sequence}")
        return result

    def destroy_node(self):
        """
        Custom cleanup for shutting down the node.
        """
        self.get_logger().info("Shutting down RN2 node")
        self.action_server.destroy()  # Clean up the action server before shutting down
        super().destroy_node()

def main(args=None):
    """
    Main entry point for the RN2 node.
    """
    rclpy.init(args=args)  # Initialize ROS 2 client library
    node = RN2()  # Instantiate the RN2 node
    try:
        rclpy.spin(node)  # Keep the node running
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()  # Shut down ROS 2

if __name__ == '__main__':
    main()
