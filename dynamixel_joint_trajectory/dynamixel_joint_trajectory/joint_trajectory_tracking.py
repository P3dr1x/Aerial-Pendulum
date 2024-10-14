import os
import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer, ActionClient
from rcl_interfaces.msg import SetParametersResult
from trajectory_msgs.msg import JointTrajectory, JointTrajectoryPoint
from sensor_msgs.msg import JointState
from aerobalance_interfaces.action import TrajectoryFilePosition, TrajectoryFileVelocity

class JointTrajectoryTracker(Node):
    def __init__(self):
        super().__init__('joint_trajectory_tracker')

        # get default parameters
        # self.joint_name = self.get_parameter('joint_name').get_parameter_value().string_value

        # subs, pubs, services, actions/clients
        self.joint_names = []
        self.joint_positions = []
        self.joint_velocities = []
        self.joint_efforts = []
        self.subscriber_ = self.create_subscription(JointState, '/joint_states', self.subscriber_callback, 10)
        self.publisher_pos_ = self.create_publisher(JointTrajectory, 'joint_trajectory', 10)

        self._position_action_server = ActionServer(self, TrajectoryFilePosition, 'trajectory_file_position', self.position_action_callback)

        self.position_action_client = ActionClient(self, TrajectoryFilePosition, 'trajectory_file_position')

        self.position_feedback_msg = TrajectoryFilePosition.Feedback()

        self.get_logger().info('Initialised joint_trajectory_tracker node.')
    
    def subscriber_callback(self, msg):
        self.joint_names = msg.name
        self.joint_positions = msg.position
        self.joint_velocities = msg.velocity
        self.joint_efforts = msg.effort

    # def parameter_callback(self, params):
    #     for p in params:
    #         if p.name == 'joint_name':
    #             self.joint_name = p.value
    #             self.get_logger().info('Set joint_name to %s', p.name)
    #     return SetParametersResult(successful=True)
    
    def position_action_callback(self, goal_handle):
        self.get_logger().info('Reading file {0:s}'.format(goal_handle.request.filepath))
        timestep = goal_handle.request.timestep
        # self.get_logger().info('Timestep {0:f}'.format(timestep))
        result = TrajectoryFilePosition.Result()
        
        file = os.path.expanduser(goal_handle.request.filepath)
        if not os.path.exists(file):
            self.get_logger().info('File {0:s} not found!'.format(file))
            goal_handle.abort()
            result.error_code = 1
            return result
        
        with open(file) as trajectory_file:
            lines = trajectory_file.readlines()

            time = []
            pos = []
            vel = []

            msg = JointTrajectory()
            msg.joint_names = [goal_handle.request.joint]
            # self.get_logger().info('Joint name {0:s}'.format(goal_handle.request.joint))
            for line in lines:
                data = line.split()
                try:
                    data_float = [float(number) for number in data]
                    time = data_float[0]
                    pos = data_float[1]
                    vel = data_float[2] if len(data_float) > 2 else 0.0

                    traj_point = JointTrajectoryPoint()
                    traj_point.positions.append(pos)
                    traj_point.velocities.append(vel)
                    traj_point.time_from_start = rclpy.duration.Duration(seconds=time).to_msg()
                    msg.points.append(traj_point)
                except ValueError:
                    continue

            msg.header.stamp = self.get_clock().now().to_msg()
            self.publisher_pos_.publish(msg)

            self.get_logger().info('Trajectory published to joint trajectory topic.')
        
        goal_handle.succeed()

        result.error_code = 0
        return result

def main(args=None):
    rclpy.init(args=args)

    joint_trajectory_tracker = JointTrajectoryTracker()

    rclpy.spin(joint_trajectory_tracker)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    joint_trajectory_tracker.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()