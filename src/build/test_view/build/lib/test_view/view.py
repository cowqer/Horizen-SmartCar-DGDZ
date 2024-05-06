#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2

class ImageProcessor(Node):
    def __init__(self):
        super().__init__('image_processor')  # 初始化ROS节点
        self.subscription = self.create_subscription(  # 创建订阅者
            Image,  # 订阅的消息类型是图像消息
            'image',  # 订阅的话题名称为image
            self.image_callback,  # 每当接收到消息时调用image_callback方法
            10)  # 设置消息队列的大小为10
        self.subscription  # 防止未使用的变量警告
        self.bridge = CvBridge()  # 创建CvBridge对象，用于将ROS图像消息转换为OpenCV图像格式

    def image_callback(self, msg):
        cv_image = self.bridge.imgmsg_to_cv2(msg, desired_encoding='bgr8')  # 将ROS图像消息转换为OpenCV图像格式
        
        # 在这里添加数字识别和分割的代码
        gray = cv2.cvtColor(cv_image, cv2.COLOR_BGR2GRAY)

        # 阈值化
        _, thresh = cv2.threshold(gray, 127, 255, cv2.THRESH_BINARY)

        # 二值化
        _, binary = cv2.threshold(gray, 127, 255, cv2.THRESH_BINARY)

        # 显示处理结果
        cv2.imshow('Original Image', cv_image)
        cv2.imshow('Thresholded Image', thresh)
        cv2.imshow('Binary Image', binary)
        cv2.waitKey(1)  # 等待1毫秒，以允许图像显示

def main(args=None):
    rclpy.init(args=args)  # 初始化ROS
    image_processor = ImageProcessor()  # 创建ImageProcessor节点
    rclpy.spin(image_processor)  # 运行节点，等待消息
    image_processor.destroy_node()  # 销毁节点
    rclpy.shutdown()  # 关闭ROS

if __name__ == '__main__':
    main()