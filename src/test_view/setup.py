# -*- coding: utf-8 -*-

from setuptools import setup

# 功能包的名称
package_name = 'test_view'

# 设置
setup(
    # 功能包的名称
    name=package_name,
    # 功能包的版本号
    version='0.0.0',
    # 包含的Python包列表
    packages=[package_name],
    # 安装时需要包含的数据文件，例如 package.xml
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    # 安装时需要的依赖项
    install_requires=['setuptools'],
    # 是否压缩安装包
    zip_safe=True,
    # 维护者姓名
    maintainer='root',
    # 维护者邮箱
    maintainer_email='1625629469@qq.com',
    # 功能包的描述
    description='TODO: Package description',
    # 授权许可证声明
    license='TODO: License declaration',
    # 测试所需的依赖项
    tests_require=['pytest'],
    # 入口点，定义可执行脚本
    entry_points={
        'console_scripts': [
            # 定义可执行脚本
            'image_send = test_view.image_send:main',
            'view = test_view.view:main',
        ],
    },
)

