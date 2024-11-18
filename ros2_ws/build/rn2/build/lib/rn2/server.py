import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer
from action_interfaces.action import Mission  # Replace with your custom action definition
import asyncio

class RN2(Node):
    """
    ROS2 Node 2 (RN2): Hosts the Action Server to process Mission actions.
    """
    def __init__(self):
        super().__init__('rn2')
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
        self.get_logger().info(f"Received goal request: id={goal_request.id}, action={goal_request.action}")
        return rclpy.action.GoalResponse.ACCEPT

    def cancel_callback(self, goal_handle):
        """
        Callback for handling cancellation requests.
        """
        self.get_logger().info("Cancel request received")
        return rclpy.action.CancelResponse.ACCEPT

    async def execute_callback(self, goal_handle):
        """
        Callback to process the goal. Executes the action and sends feedback/results.
        """
        goal = goal_handle.request
        self.get_logger().info(f"Executing goal: {goal_handle.request}")
        self.get_logger().info(f"Executing mission: id={goal.id}, action={goal.action}, order={goal.order}")

        feedback = Mission.Feedback()
        feedback.feedback_message = "Executing mission..."
        feedback.sequence = []  # Initialize sequence as an empty list

        # Simulate processing of the mission
        for i in range(goal.order):
            # Append the current step to the sequence
            feedback.sequence.append(f"Step {i+1}: {goal.action}")
            goal_handle.publish_feedback(feedback)

            # Simulate some processing delay (1 second)
            # await asyncio.sleep(1.0)

        # Mission completed, send result
        goal_handle.succeed()
        result = Mission.Result()
        result.sequence = feedback.sequence

        # Log and return the final result
        self.get_logger().info(f"Mission completed: {result.sequence}")
        return result

    def destroy_node(self):
        """
        Custom cleanup for shutting down the node.
        """
        self.get_logger().info("Shutting down RN2 node")
        self.action_server.destroy()
        super().destroy_node()

def main(args=None):
    """
    Main entry point for the RN2 node.
    """
    rclpy.init(args=args)
    node = RN2()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
