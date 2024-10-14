import os
import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer, ActionClient
from rcl_interfaces.msg import SetParametersResult
from sensor_msgs.msg import JointState
from std_msgs.msg import Float64MultiArray
from aerobalance_interfaces.action import TrajectoryFileVelocity

class VelocityTrajectoryTracker(Node):
    def __init__(self):
        super().__init__('velocity_trajectory_tracker')

        # declare ros params
        self.declare_parameter('frequency',10.0)
        self.declare_parameter('feedback_frequency',5)
        self.frequency = self.get_parameter('frequency').value
        self.feedback_period = 1/self.get_parameter('feedback_frequency').value

        # get default parameters
        # self.velocity_name = self.get_parameter('velocity_name').get_parameter_value().string_value

        # subs, pubs, services, actions/clients
        self.joint_names = []
        self.joint_positions = []
        self.joint_velocities = []
        self.joint_efforts = []
        self.subscriber_ = self.create_subscription(JointState, '/joint_states', self.subscriber_callback, 10)
        self.publisher_vel_ = self.create_publisher(Float64MultiArray, '/velocity_controller/commands', 10)

        self.action_timer = self.create_timer(1/self.frequency, self.velocity_timer_callback)

        self._velocity_action_server = ActionServer(self, TrajectoryFileVelocity, 'trajectory_file_velocity', self.velocity_action_callback)

        self.velocity_action_client = ActionClient(self, TrajectoryFileVelocity, 'trajectory_file_velocity')

        self.velocity_feedback_msg = TrajectoryFileVelocity.Feedback()

        self.timer_start = None
        self.target_times = []
        self.target_velocities = []
        self.current_goal_time = None
        self.current_velocities = []
        self.velocity_goal = False

        self.get_logger().info('Initialised velocity_trajectory_tracker node.')
        self.get_logger().info('Frequency set to {0:.2f} Hz. This is rewritten by launch file. Check there if you want to change'.format(self.frequency))
    
    def subscriber_callback(self, msg):
        self.joint_names = msg.name
        self.joint_positions = msg.position
        self.joint_velocities = msg.velocity
        self.joint_efforts = msg.effort

    # def parameter_callback(self, params):
    #     for p in params:
    #         if p.name == 'velocity_name':
    #             self.velocity_name = p.value
    #             self.get_logger().info('Set velocity_name to %s', p.name)
    #     return SetParametersResult(successful=True)
    
    
    def velocity_action_callback(self, goal_handle):
        self.get_logger().info('Reading file {0:s}'.format(goal_handle.request.filepath))
        # self.get_logger().info('Timestep {0:f}'.format(timestep))
        result = TrajectoryFileVelocity.Result()
        feedback = TrajectoryFileVelocity.Feedback()
        
        file = os.path.expanduser(goal_handle.request.filepath)
        if not os.path.exists(file):
            self.get_logger().info('File {0:s} not found!'.format(file))
            goal_handle.abort()
            result.error_code = 1
            return result

        with open(file) as trajectory_file:
            lines = trajectory_file.readlines()
            self.target_times = []
            self.target_velocities = []

            for line in lines:
                values = line.split()
                try:
                    self.target_times.append(float(values[0]))
                    velocities = [float(number) for number in values[1:]]
                    self.target_velocities.append(velocities)
                except ValueError:
                    continue

        self.get_logger().info('File read with {0:d} velocity points'.format(len(self.target_times)))
        
        self.timer_start = self.get_clock().now()
        self.velocity_goal = True

        # last_feedback_time = self.get_clock().now()
        # while self.velocity_goal:
        #     rclpy.spin_once(self, timeout_sec=self.feedback_period)
        #     feedback.header.stamp = self.get_clock().now().to_msg()
        #     feedback.desired = self.current_velocities
        #     if self.joint_names:
        #         feedback.joint_names = self.joint_names
        #         feedback.actual = self.joint_velocities

        #     goal_handle.publish_feedback(feedback)
                # last_feedback_time = current_time

        self.get_logger().info('Sent velocity goal.')
        goal_handle.succeed()
        
        result.error_code = 0
        return result

    def velocity_timer_callback(self):
        if self.velocity_goal:
            current_time = self.get_clock().now()
            self.current_goal_time = current_time - self.timer_start
            time_to_track = rclpy.duration.Duration(seconds=self.target_times[0])
            self.current_velocities = self.target_velocities[0]
            msg = Float64MultiArray()
            msg.data = self.current_velocities
            self.publisher_vel_.publish(msg)
            if (time_to_track < self.current_goal_time):
                self.get_logger().info('Current time {0}, velocities: {1}'.format(self.current_goal_time.nanoseconds/1e9,self.current_velocities))
                self.target_times.pop(0)
                self.target_velocities.pop(0)
                if len(self.target_times) == 0:
                    self.velocity_goal = False
                    self.get_logger().info('Executed velocity goal.')

def main(args=None):
    rclpy.init(args=args)

    velocity_trajectory_tracker = VelocityTrajectoryTracker()

    rclpy.spin(velocity_trajectory_tracker)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    velocity_trajectory_tracker.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()