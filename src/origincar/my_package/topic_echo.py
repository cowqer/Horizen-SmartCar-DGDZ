import rclpy
from rclpy.node import Node
from std_msgs.msg import String  # 根据你的话题消息类型替换

class MinimalSubscriber(Node):
    def __init__(self):
        super().__init__('minimal_subscriber')
        self.subscription = self.create_subscription(
            String,  # 替换为你的消息类型
            'cmd_vel',  # 替换为你的话题名称
            self.listener_callback,
            10  # 传输深度
        )
        self.subscription  # 防止未命名的变量警告

    def listener_callback(self, msg):
        self.get_logger().info('Received message: "%s"' % msg.data)

def main(args=None):
    rclpy.init(args=args)
    minimal_subscriber = MinimalSubscriber()
    rclpy.spin(minimal_subscriber)
    minimal_subscriber.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()