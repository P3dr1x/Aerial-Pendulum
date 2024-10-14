// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aerobalance_interfaces:action/TrajectoryFilePosition.idl
// generated code does not contain a copyright notice

#ifndef AEROBALANCE_INTERFACES__ACTION__DETAIL__TRAJECTORY_FILE_POSITION__STRUCT_HPP_
#define AEROBALANCE_INTERFACES__ACTION__DETAIL__TRAJECTORY_FILE_POSITION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__aerobalance_interfaces__action__TrajectoryFilePosition_Goal __attribute__((deprecated))
#else
# define DEPRECATED__aerobalance_interfaces__action__TrajectoryFilePosition_Goal __declspec(deprecated)
#endif

namespace aerobalance_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TrajectoryFilePosition_Goal_
{
  using Type = TrajectoryFilePosition_Goal_<ContainerAllocator>;

  explicit TrajectoryFilePosition_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->timestep = 0.1f;
      this->joint = "joint1";
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->filepath = "";
      this->timestep = 0.0f;
      this->joint = "";
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->filepath = "";
    }
  }

  explicit TrajectoryFilePosition_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : filepath(_alloc),
    joint(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->timestep = 0.1f;
      this->joint = "joint1";
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->filepath = "";
      this->timestep = 0.0f;
      this->joint = "";
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->filepath = "";
    }
  }

  // field types and members
  using _filepath_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _filepath_type filepath;
  using _timestep_type =
    float;
  _timestep_type timestep;
  using _joint_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _joint_type joint;

  // setters for named parameter idiom
  Type & set__filepath(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->filepath = _arg;
    return *this;
  }
  Type & set__timestep(
    const float & _arg)
  {
    this->timestep = _arg;
    return *this;
  }
  Type & set__joint(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->joint = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aerobalance_interfaces::action::TrajectoryFilePosition_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const aerobalance_interfaces::action::TrajectoryFilePosition_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aerobalance_interfaces::action::TrajectoryFilePosition_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aerobalance_interfaces::action::TrajectoryFilePosition_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aerobalance_interfaces::action::TrajectoryFilePosition_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aerobalance_interfaces::action::TrajectoryFilePosition_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aerobalance_interfaces::action::TrajectoryFilePosition_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aerobalance_interfaces::action::TrajectoryFilePosition_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aerobalance_interfaces::action::TrajectoryFilePosition_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aerobalance_interfaces::action::TrajectoryFilePosition_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aerobalance_interfaces__action__TrajectoryFilePosition_Goal
    std::shared_ptr<aerobalance_interfaces::action::TrajectoryFilePosition_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aerobalance_interfaces__action__TrajectoryFilePosition_Goal
    std::shared_ptr<aerobalance_interfaces::action::TrajectoryFilePosition_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrajectoryFilePosition_Goal_ & other) const
  {
    if (this->filepath != other.filepath) {
      return false;
    }
    if (this->timestep != other.timestep) {
      return false;
    }
    if (this->joint != other.joint) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrajectoryFilePosition_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrajectoryFilePosition_Goal_

// alias to use template instance with default allocator
using TrajectoryFilePosition_Goal =
  aerobalance_interfaces::action::TrajectoryFilePosition_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace aerobalance_interfaces


#ifndef _WIN32
# define DEPRECATED__aerobalance_interfaces__action__TrajectoryFilePosition_Result __attribute__((deprecated))
#else
# define DEPRECATED__aerobalance_interfaces__action__TrajectoryFilePosition_Result __declspec(deprecated)
#endif

namespace aerobalance_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TrajectoryFilePosition_Result_
{
  using Type = TrajectoryFilePosition_Result_<ContainerAllocator>;

  explicit TrajectoryFilePosition_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->error_code = 0;
    }
  }

  explicit TrajectoryFilePosition_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->error_code = 0;
    }
  }

  // field types and members
  using _error_code_type =
    int8_t;
  _error_code_type error_code;

  // setters for named parameter idiom
  Type & set__error_code(
    const int8_t & _arg)
  {
    this->error_code = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t SUCCESSFUL =
    0;
  static constexpr int8_t INVALID_FILE =
    1;
  static constexpr int8_t INVALID_GOAL =
    -1;
  static constexpr int8_t INVALID_JOINTS =
    -2;

  // pointer types
  using RawPtr =
    aerobalance_interfaces::action::TrajectoryFilePosition_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const aerobalance_interfaces::action::TrajectoryFilePosition_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aerobalance_interfaces::action::TrajectoryFilePosition_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aerobalance_interfaces::action::TrajectoryFilePosition_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aerobalance_interfaces::action::TrajectoryFilePosition_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aerobalance_interfaces::action::TrajectoryFilePosition_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aerobalance_interfaces::action::TrajectoryFilePosition_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aerobalance_interfaces::action::TrajectoryFilePosition_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aerobalance_interfaces::action::TrajectoryFilePosition_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aerobalance_interfaces::action::TrajectoryFilePosition_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aerobalance_interfaces__action__TrajectoryFilePosition_Result
    std::shared_ptr<aerobalance_interfaces::action::TrajectoryFilePosition_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aerobalance_interfaces__action__TrajectoryFilePosition_Result
    std::shared_ptr<aerobalance_interfaces::action::TrajectoryFilePosition_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrajectoryFilePosition_Result_ & other) const
  {
    if (this->error_code != other.error_code) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrajectoryFilePosition_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrajectoryFilePosition_Result_

// alias to use template instance with default allocator
using TrajectoryFilePosition_Result =
  aerobalance_interfaces::action::TrajectoryFilePosition_Result_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr int8_t TrajectoryFilePosition_Result_<ContainerAllocator>::SUCCESSFUL;
template<typename ContainerAllocator>
constexpr int8_t TrajectoryFilePosition_Result_<ContainerAllocator>::INVALID_FILE;
template<typename ContainerAllocator>
constexpr int8_t TrajectoryFilePosition_Result_<ContainerAllocator>::INVALID_GOAL;
template<typename ContainerAllocator>
constexpr int8_t TrajectoryFilePosition_Result_<ContainerAllocator>::INVALID_JOINTS;

}  // namespace action

}  // namespace aerobalance_interfaces


// Include directives for member types
// Member 'actual'
// Member 'desired'
#include "trajectory_msgs/msg/detail/joint_trajectory_point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__aerobalance_interfaces__action__TrajectoryFilePosition_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__aerobalance_interfaces__action__TrajectoryFilePosition_Feedback __declspec(deprecated)
#endif

namespace aerobalance_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TrajectoryFilePosition_Feedback_
{
  using Type = TrajectoryFilePosition_Feedback_<ContainerAllocator>;

  explicit TrajectoryFilePosition_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : actual(_init),
    desired(_init)
  {
    (void)_init;
  }

  explicit TrajectoryFilePosition_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : actual(_alloc, _init),
    desired(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _actual_type =
    trajectory_msgs::msg::JointTrajectoryPoint_<ContainerAllocator>;
  _actual_type actual;
  using _desired_type =
    trajectory_msgs::msg::JointTrajectoryPoint_<ContainerAllocator>;
  _desired_type desired;

  // setters for named parameter idiom
  Type & set__actual(
    const trajectory_msgs::msg::JointTrajectoryPoint_<ContainerAllocator> & _arg)
  {
    this->actual = _arg;
    return *this;
  }
  Type & set__desired(
    const trajectory_msgs::msg::JointTrajectoryPoint_<ContainerAllocator> & _arg)
  {
    this->desired = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aerobalance_interfaces::action::TrajectoryFilePosition_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const aerobalance_interfaces::action::TrajectoryFilePosition_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aerobalance_interfaces::action::TrajectoryFilePosition_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aerobalance_interfaces::action::TrajectoryFilePosition_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aerobalance_interfaces::action::TrajectoryFilePosition_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aerobalance_interfaces::action::TrajectoryFilePosition_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aerobalance_interfaces::action::TrajectoryFilePosition_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aerobalance_interfaces::action::TrajectoryFilePosition_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aerobalance_interfaces::action::TrajectoryFilePosition_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aerobalance_interfaces::action::TrajectoryFilePosition_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aerobalance_interfaces__action__TrajectoryFilePosition_Feedback
    std::shared_ptr<aerobalance_interfaces::action::TrajectoryFilePosition_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aerobalance_interfaces__action__TrajectoryFilePosition_Feedback
    std::shared_ptr<aerobalance_interfaces::action::TrajectoryFilePosition_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrajectoryFilePosition_Feedback_ & other) const
  {
    if (this->actual != other.actual) {
      return false;
    }
    if (this->desired != other.desired) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrajectoryFilePosition_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrajectoryFilePosition_Feedback_

// alias to use template instance with default allocator
using TrajectoryFilePosition_Feedback =
  aerobalance_interfaces::action::TrajectoryFilePosition_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace aerobalance_interfaces


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "aerobalance_interfaces/action/detail/trajectory_file_position__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__aerobalance_interfaces__action__TrajectoryFilePosition_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__aerobalance_interfaces__action__TrajectoryFilePosition_SendGoal_Request __declspec(deprecated)
#endif

namespace aerobalance_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TrajectoryFilePosition_SendGoal_Request_
{
  using Type = TrajectoryFilePosition_SendGoal_Request_<ContainerAllocator>;

  explicit TrajectoryFilePosition_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit TrajectoryFilePosition_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    aerobalance_interfaces::action::TrajectoryFilePosition_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const aerobalance_interfaces::action::TrajectoryFilePosition_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aerobalance_interfaces::action::TrajectoryFilePosition_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const aerobalance_interfaces::action::TrajectoryFilePosition_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aerobalance_interfaces::action::TrajectoryFilePosition_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aerobalance_interfaces::action::TrajectoryFilePosition_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aerobalance_interfaces::action::TrajectoryFilePosition_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aerobalance_interfaces::action::TrajectoryFilePosition_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aerobalance_interfaces::action::TrajectoryFilePosition_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aerobalance_interfaces::action::TrajectoryFilePosition_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aerobalance_interfaces::action::TrajectoryFilePosition_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aerobalance_interfaces::action::TrajectoryFilePosition_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aerobalance_interfaces__action__TrajectoryFilePosition_SendGoal_Request
    std::shared_ptr<aerobalance_interfaces::action::TrajectoryFilePosition_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aerobalance_interfaces__action__TrajectoryFilePosition_SendGoal_Request
    std::shared_ptr<aerobalance_interfaces::action::TrajectoryFilePosition_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrajectoryFilePosition_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrajectoryFilePosition_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrajectoryFilePosition_SendGoal_Request_

// alias to use template instance with default allocator
using TrajectoryFilePosition_SendGoal_Request =
  aerobalance_interfaces::action::TrajectoryFilePosition_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace aerobalance_interfaces


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__aerobalance_interfaces__action__TrajectoryFilePosition_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__aerobalance_interfaces__action__TrajectoryFilePosition_SendGoal_Response __declspec(deprecated)
#endif

namespace aerobalance_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TrajectoryFilePosition_SendGoal_Response_
{
  using Type = TrajectoryFilePosition_SendGoal_Response_<ContainerAllocator>;

  explicit TrajectoryFilePosition_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit TrajectoryFilePosition_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aerobalance_interfaces::action::TrajectoryFilePosition_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const aerobalance_interfaces::action::TrajectoryFilePosition_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aerobalance_interfaces::action::TrajectoryFilePosition_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aerobalance_interfaces::action::TrajectoryFilePosition_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aerobalance_interfaces::action::TrajectoryFilePosition_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aerobalance_interfaces::action::TrajectoryFilePosition_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aerobalance_interfaces::action::TrajectoryFilePosition_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aerobalance_interfaces::action::TrajectoryFilePosition_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aerobalance_interfaces::action::TrajectoryFilePosition_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aerobalance_interfaces::action::TrajectoryFilePosition_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aerobalance_interfaces__action__TrajectoryFilePosition_SendGoal_Response
    std::shared_ptr<aerobalance_interfaces::action::TrajectoryFilePosition_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aerobalance_interfaces__action__TrajectoryFilePosition_SendGoal_Response
    std::shared_ptr<aerobalance_interfaces::action::TrajectoryFilePosition_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrajectoryFilePosition_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrajectoryFilePosition_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrajectoryFilePosition_SendGoal_Response_

// alias to use template instance with default allocator
using TrajectoryFilePosition_SendGoal_Response =
  aerobalance_interfaces::action::TrajectoryFilePosition_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace aerobalance_interfaces

namespace aerobalance_interfaces
{

namespace action
{

struct TrajectoryFilePosition_SendGoal
{
  using Request = aerobalance_interfaces::action::TrajectoryFilePosition_SendGoal_Request;
  using Response = aerobalance_interfaces::action::TrajectoryFilePosition_SendGoal_Response;
};

}  // namespace action

}  // namespace aerobalance_interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__aerobalance_interfaces__action__TrajectoryFilePosition_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__aerobalance_interfaces__action__TrajectoryFilePosition_GetResult_Request __declspec(deprecated)
#endif

namespace aerobalance_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TrajectoryFilePosition_GetResult_Request_
{
  using Type = TrajectoryFilePosition_GetResult_Request_<ContainerAllocator>;

  explicit TrajectoryFilePosition_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit TrajectoryFilePosition_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aerobalance_interfaces::action::TrajectoryFilePosition_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const aerobalance_interfaces::action::TrajectoryFilePosition_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aerobalance_interfaces::action::TrajectoryFilePosition_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aerobalance_interfaces::action::TrajectoryFilePosition_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aerobalance_interfaces::action::TrajectoryFilePosition_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aerobalance_interfaces::action::TrajectoryFilePosition_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aerobalance_interfaces::action::TrajectoryFilePosition_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aerobalance_interfaces::action::TrajectoryFilePosition_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aerobalance_interfaces::action::TrajectoryFilePosition_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aerobalance_interfaces::action::TrajectoryFilePosition_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aerobalance_interfaces__action__TrajectoryFilePosition_GetResult_Request
    std::shared_ptr<aerobalance_interfaces::action::TrajectoryFilePosition_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aerobalance_interfaces__action__TrajectoryFilePosition_GetResult_Request
    std::shared_ptr<aerobalance_interfaces::action::TrajectoryFilePosition_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrajectoryFilePosition_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrajectoryFilePosition_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrajectoryFilePosition_GetResult_Request_

// alias to use template instance with default allocator
using TrajectoryFilePosition_GetResult_Request =
  aerobalance_interfaces::action::TrajectoryFilePosition_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace aerobalance_interfaces


// Include directives for member types
// Member 'result'
// already included above
// #include "aerobalance_interfaces/action/detail/trajectory_file_position__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__aerobalance_interfaces__action__TrajectoryFilePosition_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__aerobalance_interfaces__action__TrajectoryFilePosition_GetResult_Response __declspec(deprecated)
#endif

namespace aerobalance_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TrajectoryFilePosition_GetResult_Response_
{
  using Type = TrajectoryFilePosition_GetResult_Response_<ContainerAllocator>;

  explicit TrajectoryFilePosition_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit TrajectoryFilePosition_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    aerobalance_interfaces::action::TrajectoryFilePosition_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const aerobalance_interfaces::action::TrajectoryFilePosition_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aerobalance_interfaces::action::TrajectoryFilePosition_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const aerobalance_interfaces::action::TrajectoryFilePosition_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aerobalance_interfaces::action::TrajectoryFilePosition_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aerobalance_interfaces::action::TrajectoryFilePosition_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aerobalance_interfaces::action::TrajectoryFilePosition_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aerobalance_interfaces::action::TrajectoryFilePosition_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aerobalance_interfaces::action::TrajectoryFilePosition_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aerobalance_interfaces::action::TrajectoryFilePosition_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aerobalance_interfaces::action::TrajectoryFilePosition_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aerobalance_interfaces::action::TrajectoryFilePosition_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aerobalance_interfaces__action__TrajectoryFilePosition_GetResult_Response
    std::shared_ptr<aerobalance_interfaces::action::TrajectoryFilePosition_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aerobalance_interfaces__action__TrajectoryFilePosition_GetResult_Response
    std::shared_ptr<aerobalance_interfaces::action::TrajectoryFilePosition_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrajectoryFilePosition_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrajectoryFilePosition_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrajectoryFilePosition_GetResult_Response_

// alias to use template instance with default allocator
using TrajectoryFilePosition_GetResult_Response =
  aerobalance_interfaces::action::TrajectoryFilePosition_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace aerobalance_interfaces

namespace aerobalance_interfaces
{

namespace action
{

struct TrajectoryFilePosition_GetResult
{
  using Request = aerobalance_interfaces::action::TrajectoryFilePosition_GetResult_Request;
  using Response = aerobalance_interfaces::action::TrajectoryFilePosition_GetResult_Response;
};

}  // namespace action

}  // namespace aerobalance_interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "aerobalance_interfaces/action/detail/trajectory_file_position__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__aerobalance_interfaces__action__TrajectoryFilePosition_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__aerobalance_interfaces__action__TrajectoryFilePosition_FeedbackMessage __declspec(deprecated)
#endif

namespace aerobalance_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TrajectoryFilePosition_FeedbackMessage_
{
  using Type = TrajectoryFilePosition_FeedbackMessage_<ContainerAllocator>;

  explicit TrajectoryFilePosition_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit TrajectoryFilePosition_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    aerobalance_interfaces::action::TrajectoryFilePosition_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const aerobalance_interfaces::action::TrajectoryFilePosition_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aerobalance_interfaces::action::TrajectoryFilePosition_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const aerobalance_interfaces::action::TrajectoryFilePosition_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aerobalance_interfaces::action::TrajectoryFilePosition_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aerobalance_interfaces::action::TrajectoryFilePosition_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aerobalance_interfaces::action::TrajectoryFilePosition_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aerobalance_interfaces::action::TrajectoryFilePosition_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aerobalance_interfaces::action::TrajectoryFilePosition_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aerobalance_interfaces::action::TrajectoryFilePosition_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aerobalance_interfaces::action::TrajectoryFilePosition_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aerobalance_interfaces::action::TrajectoryFilePosition_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aerobalance_interfaces__action__TrajectoryFilePosition_FeedbackMessage
    std::shared_ptr<aerobalance_interfaces::action::TrajectoryFilePosition_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aerobalance_interfaces__action__TrajectoryFilePosition_FeedbackMessage
    std::shared_ptr<aerobalance_interfaces::action::TrajectoryFilePosition_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrajectoryFilePosition_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrajectoryFilePosition_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrajectoryFilePosition_FeedbackMessage_

// alias to use template instance with default allocator
using TrajectoryFilePosition_FeedbackMessage =
  aerobalance_interfaces::action::TrajectoryFilePosition_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace aerobalance_interfaces

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace aerobalance_interfaces
{

namespace action
{

struct TrajectoryFilePosition
{
  /// The goal message defined in the action definition.
  using Goal = aerobalance_interfaces::action::TrajectoryFilePosition_Goal;
  /// The result message defined in the action definition.
  using Result = aerobalance_interfaces::action::TrajectoryFilePosition_Result;
  /// The feedback message defined in the action definition.
  using Feedback = aerobalance_interfaces::action::TrajectoryFilePosition_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = aerobalance_interfaces::action::TrajectoryFilePosition_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = aerobalance_interfaces::action::TrajectoryFilePosition_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = aerobalance_interfaces::action::TrajectoryFilePosition_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct TrajectoryFilePosition TrajectoryFilePosition;

}  // namespace action

}  // namespace aerobalance_interfaces

#endif  // AEROBALANCE_INTERFACES__ACTION__DETAIL__TRAJECTORY_FILE_POSITION__STRUCT_HPP_
