import rclpy
from rclpy.node import Node
from std_msgs.msg import String  # ������Ļ�����Ϣ�����滻

class MinimalSubscriber(Node):
    def __init__(self):
        super().__init__('minimal_subscriber')
        self.subscription = self.create_subscription(
            String,  # �滻Ϊ�����Ϣ����
            'cmd_vel',  # �滻Ϊ��Ļ�������
            self.listener_callback,
            10  # �������
        )
        self.subscription  # ��ֹδ�����ı�������

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