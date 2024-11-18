import rclpy
from rclpy.node import Node
from example_interfaces.action import Fibonacci  # Replace with your action
from rclpy.action import ActionClient
import requests
import time

class ActionClientNode(Node):
    def __init__(self):
        super().__init__('rn1_client')
        self.client = ActionClient(self, Fibonacci, 'fibonacci')
        self.timer = self.create_timer(1.0, self.check_api)  # Check API every second

    def check_api(self):
        try:
            response = requests.get('http://127.0.0.1:5000/mission')  # REST API endpoint
            if response.status_code == 200:
                missions = response.json()
                if missions:  # Send the latest mission as an action
                    self.send_action(missions[-1])
        except Exception as e:
            self.get_logger().error(f"Failed to connect to API: {e}")

    def send_action(self, mission):
        goal_msg = Fibonacci.Goal()
        goal_msg.order = mission.get('order', 1)  # Adjust based on action type
        self.client.send_goal_async(goal_msg)

def main(args=None):
    rclpy.init(args=args)
    action_client = ActionClientNode()
    rclpy.spin(action_client)
    action_client.destroy_node()
    rclpy.shutdown()

