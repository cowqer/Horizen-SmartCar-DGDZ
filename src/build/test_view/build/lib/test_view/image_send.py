#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2

class ImagePublisher(Node):
    def __init__(self):
        super().__init__('image_publisher')
        self.publisher_ = self.create_publisher(Image, 'image', 10)
        self.bridge = CvBridge()
        self.timer = self.create_timer(1.0, self.publish_image)  # 创建定时器，每隔1秒触发一次publish_image方法

    def publish_image(self):
        image_path = "/数字5.jpg"  # 替换成你的图片路径
        img = cv2.imread(image_path)  # 读取.jpg格式的图片文件
        if img is not None:
            img_msg = self.bridge.cv2_to_imgmsg(img, encoding="bgr8")  # 将图片转换为ROS消息
            self.publisher_.publish(img_msg)  # 发布图片消息
            self.get_logger().info('Published image: {}'.format(image_path))
        else:
            self.get_logger().warning('Failed to load image: {}'.format(image_path))

def main(args=None):
    rclpy.init(args=args)
    image_publisher = ImagePublisher()
    rclpy.spin(image_publisher)  # 等待消息，定时器会定时触发publish_image方法
    image_publisher.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()

