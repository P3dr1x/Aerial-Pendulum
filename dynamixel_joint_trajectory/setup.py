from setuptools import setup

package_name = 'dynamixel_joint_trajectory'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='yash',
    maintainer_email='yjvyas@gmail.com',
    description='Publishes a joint trajectory in position and/or velocity mode.',
    license='MIT License',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'joint_trajectory_tracking = dynamixel_joint_trajectory.joint_trajectory_tracking:main',
            'velocity_trajectory_tracking = dynamixel_joint_trajectory.velocity_trajectory_tracking:main'
        ],
    },
)
