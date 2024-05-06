from setuptools import setup

package_name = 'my_package'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    entry_points={
        'console_scripts': [
            'my_node = my_package.topic_echo:main'
        ],
    },
    install_requires=['setuptools', 'ros-foxy-rclpy', 'std_msgs'],
    zip_safe=True,
    maintainer='root',
    maintainer_email='1625629469@qq.com',  
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
)