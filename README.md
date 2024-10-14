# aerobalance
Code for running the libraries of the Aerobalance project, Robotics and Automation Lab, University of Padova.

## Important info
The Wifi network for the Teltonika router is called `unipd_DII_RAL`, password is written on the Quick Start Guide in the box.
Connect Intel NUC IP on `unipd_DII_RAL`:  `ssh interbotix@10.1.111.13`.

## Initial setup
1. Install [ROS2 humble](https://docs.ros.org/en/humble/Installation.html).

1. Set up your workspace
```shell
mkdir -p ~/aerobalance_ws/src
```

### Setup Dynamixel Hardware libraries
```bash
cd ~/aerobalance_ws/src
git clone -b humble https://github.com/youtalk/dynamixel_hardware.git
vcs import dynamixel_hardware < dynamixel_hardware/dynamixel_control.repos
rosdep install --from-paths dynamixel_hardware/ --ignore-src -r -y
cd ~/aerobalance_ws
colcon build --symlink-install --cmake-args -DCMAKE_EXPORT_COMPILE_COMMANDS=ON
```
### Clone this repository
1. Set up SSH keys first!
2. Clone this library and build in the workspace.
```bash
cd ~/aerobalance_ws/src
git clone git@github.com:P3dr1x/aerobalance.git
cd ~/aerobalance_ws
colcon build --symlink-install --cmake-args -DCMAKE_EXPORT_COMPILE_COMMANDS=ON
```

## Running libraries
### Running dynamixel_motor_control
1. First, make sure you have connected the dynamixel to the power source, and the communication cable between the comms board and the computer.

    a. If connecting to your laptop/desktop, you can check the connection using Dynamixel Wizard and scanning for the motor.

    b. Otherwise, just check `ls /dev/ | grep tty*` includes `ttyUSB0`.

1. Then make sure you have sourced the `setup.bash` file in every terminal that you open:
```bash
cd ~/aerobalance_ws
. install/setup.bash
```

To run the dynamixel control nodes file:
```
ros2 launch dynamixel_motor_control dynamixel_motors.launch.py
```
In another terminal, you can run the commands for joint actions (make sure you source the install file with `. install/setup.bash`), you can omit velocity but not position.
```
ros2 action send_goal /joint_trajectory_controller/follow_joint_trajectory control_msgs/action/FollowJointTrajectory -f "{
  trajectory: {
    joint_names: [motor],
    points: [
      { positions: [-0.7], velocities: [-0.025], time_from_start: { sec: 1 } },
      { positions: [-0.7], velocities: [0.0], time_from_start: { sec: 4 } },
      { positions: [0.0], velocities: [0.0], time_from_start: { sec: 5 } }
    ]
  }
}"
```
To switch from joint controller to velocity controller:
```
ros2 control switch_controllers --activate joint_state_broadcaster --deactivate joint_trajectory_controller --activate velocity_controller
```

Send a velocity command:
```
ros2 topic pub -1 /velocity_controller/commands std_msgs/msg/Float64MultiArray "data: [0.05]"
```

To switch from velocity controller back to joint controller:
```
ros2 control switch_controllers --activate joint_state_broadcaster --activate joint_trajectory_controller --deactivate velocity_controller
```

### Running dynamixel_joint_trajectory
To publish a trajectory from a given file, first create the file in `~/aerobalance_ws/src/aerobalance/dynamixel_joint_trajectory/trajectories/`. Each column is a position (entry 1) and velocity (entry 2).
The node should already be running with the `dynamixel_motors.launch.py` launch file.
To execute, for example, a sinusoidal trajectory of 60 degrees of amplitude, send the action command:
```
ros2 action send_goal /trajectory_file_position aerobalance_interfaces/action/TrajectoryFilePosition "{'filepath':'~/aerobalance_ws/src/aerobalance/dynamixel_joint_trajectory/trajectories/trajectories2/posvel_sin0.2_dt1ms.txt','timestep':0.01,'joint':'motor'}"  
```

To execute the corresponding velocity trajectory, run the following action:
```
ros2 action send_goal /trajectory_file_velocity aerobalance_interfaces/action/TrajectoryFileVelocity "{'filepath':'~/aerobalance_ws/src/aerobalance/dynamixel_joint_trajectory/trajectories/trajectories2/vel_cos0.2_dt1ms.txt'}" --feedback
```

There is also the possibility to run sinusoidal trajectories with 40 degrees of amplitude
