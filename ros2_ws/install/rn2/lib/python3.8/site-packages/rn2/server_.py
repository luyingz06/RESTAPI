import rclpy
from rclpy.node import Node
from example_interfaces.action import Fibonacci  # Replace with your action
from rclpy.action import ActionServer

class ActionServerNode(Node):
    def __init__(self):
        super().__init__('rn2_server')
        self.server = ActionServer(
            self,
            Fibonacci,
            'fibonacci',
            execute_callback=self.execute_callback,
        )

    def execute_callback(self, goal_handle):
        self.get_logger().info(f"Received goal: {goal_handle.request.order}")
        goal_handle.succeed()
        result = Fibonacci.Result()
        result.sequence = [0, 1]  # Dummy sequence
        return result

def main(args=None):
    rclpy.init(args=args)
    action_server = ActionServerNode()
    rclpy.spin(action_server)
    action_server.destroy_node()
    rclpy.shutdown()

