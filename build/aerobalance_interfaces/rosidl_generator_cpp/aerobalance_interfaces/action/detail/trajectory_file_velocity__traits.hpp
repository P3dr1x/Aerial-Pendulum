// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aerobalance_interfaces:action/TrajectoryFileVelocity.idl
// generated code does not contain a copyright notice

#ifndef AEROBALANCE_INTERFACES__ACTION__DETAIL__TRAJECTORY_FILE_VELOCITY__TRAITS_HPP_
#define AEROBALANCE_INTERFACES__ACTION__DETAIL__TRAJECTORY_FILE_VELOCITY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aerobalance_interfaces/action/detail/trajectory_file_velocity__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace aerobalance_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const TrajectoryFileVelocity_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: filepath
  {
    out << "filepath: ";
    rosidl_generator_traits::value_to_yaml(msg.filepath, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TrajectoryFileVelocity_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: filepath
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "filepath: ";
    rosidl_generator_traits::value_to_yaml(msg.filepath, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TrajectoryFileVelocity_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace aerobalance_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use aerobalance_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const aerobalance_interfaces::action::TrajectoryFileVelocity_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  aerobalance_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aerobalance_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const aerobalance_interfaces::action::TrajectoryFileVelocity_Goal & msg)
{
  return aerobalance_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<aerobalance_interfaces::action::TrajectoryFileVelocity_Goal>()
{
  return "aerobalance_interfaces::action::TrajectoryFileVelocity_Goal";
}

template<>
inline const char * name<aerobalance_interfaces::action::TrajectoryFileVelocity_Goal>()
{
  return "aerobalance_interfaces/action/TrajectoryFileVelocity_Goal";
}

template<>
struct has_fixed_size<aerobalance_interfaces::action::TrajectoryFileVelocity_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<aerobalance_interfaces::action::TrajectoryFileVelocity_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<aerobalance_interfaces::action::TrajectoryFileVelocity_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace aerobalance_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const TrajectoryFileVelocity_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: error_code
  {
    out << "error_code: ";
    rosidl_generator_traits::value_to_yaml(msg.error_code, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TrajectoryFileVelocity_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: error_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_code: ";
    rosidl_generator_traits::value_to_yaml(msg.error_code, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TrajectoryFileVelocity_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace aerobalance_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use aerobalance_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const aerobalance_interfaces::action::TrajectoryFileVelocity_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  aerobalance_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aerobalance_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const aerobalance_interfaces::action::TrajectoryFileVelocity_Result & msg)
{
  return aerobalance_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<aerobalance_interfaces::action::TrajectoryFileVelocity_Result>()
{
  return "aerobalance_interfaces::action::TrajectoryFileVelocity_Result";
}

template<>
inline const char * name<aerobalance_interfaces::action::TrajectoryFileVelocity_Result>()
{
  return "aerobalance_interfaces/action/TrajectoryFileVelocity_Result";
}

template<>
struct has_fixed_size<aerobalance_interfaces::action::TrajectoryFileVelocity_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<aerobalance_interfaces::action::TrajectoryFileVelocity_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<aerobalance_interfaces::action::TrajectoryFileVelocity_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace aerobalance_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const TrajectoryFileVelocity_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: joint_names
  {
    if (msg.joint_names.size() == 0) {
      out << "joint_names: []";
    } else {
      out << "joint_names: [";
      size_t pending_items = msg.joint_names.size();
      for (auto item : msg.joint_names) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: actual
  {
    if (msg.actual.size() == 0) {
      out << "actual: []";
    } else {
      out << "actual: [";
      size_t pending_items = msg.actual.size();
      for (auto item : msg.actual) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: desired
  {
    if (msg.desired.size() == 0) {
      out << "desired: []";
    } else {
      out << "desired: [";
      size_t pending_items = msg.desired.size();
      for (auto item : msg.desired) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TrajectoryFileVelocity_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: joint_names
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joint_names.size() == 0) {
      out << "joint_names: []\n";
    } else {
      out << "joint_names:\n";
      for (auto item : msg.joint_names) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: actual
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.actual.size() == 0) {
      out << "actual: []\n";
    } else {
      out << "actual:\n";
      for (auto item : msg.actual) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: desired
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.desired.size() == 0) {
      out << "desired: []\n";
    } else {
      out << "desired:\n";
      for (auto item : msg.desired) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TrajectoryFileVelocity_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace aerobalance_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use aerobalance_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const aerobalance_interfaces::action::TrajectoryFileVelocity_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  aerobalance_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aerobalance_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const aerobalance_interfaces::action::TrajectoryFileVelocity_Feedback & msg)
{
  return aerobalance_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<aerobalance_interfaces::action::TrajectoryFileVelocity_Feedback>()
{
  return "aerobalance_interfaces::action::TrajectoryFileVelocity_Feedback";
}

template<>
inline const char * name<aerobalance_interfaces::action::TrajectoryFileVelocity_Feedback>()
{
  return "aerobalance_interfaces/action/TrajectoryFileVelocity_Feedback";
}

template<>
struct has_fixed_size<aerobalance_interfaces::action::TrajectoryFileVelocity_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<aerobalance_interfaces::action::TrajectoryFileVelocity_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<aerobalance_interfaces::action::TrajectoryFileVelocity_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "aerobalance_interfaces/action/detail/trajectory_file_velocity__traits.hpp"

namespace aerobalance_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const TrajectoryFileVelocity_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TrajectoryFileVelocity_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TrajectoryFileVelocity_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace aerobalance_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use aerobalance_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const aerobalance_interfaces::action::TrajectoryFileVelocity_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  aerobalance_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aerobalance_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const aerobalance_interfaces::action::TrajectoryFileVelocity_SendGoal_Request & msg)
{
  return aerobalance_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<aerobalance_interfaces::action::TrajectoryFileVelocity_SendGoal_Request>()
{
  return "aerobalance_interfaces::action::TrajectoryFileVelocity_SendGoal_Request";
}

template<>
inline const char * name<aerobalance_interfaces::action::TrajectoryFileVelocity_SendGoal_Request>()
{
  return "aerobalance_interfaces/action/TrajectoryFileVelocity_SendGoal_Request";
}

template<>
struct has_fixed_size<aerobalance_interfaces::action::TrajectoryFileVelocity_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<aerobalance_interfaces::action::TrajectoryFileVelocity_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<aerobalance_interfaces::action::TrajectoryFileVelocity_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<aerobalance_interfaces::action::TrajectoryFileVelocity_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<aerobalance_interfaces::action::TrajectoryFileVelocity_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace aerobalance_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const TrajectoryFileVelocity_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TrajectoryFileVelocity_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TrajectoryFileVelocity_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace aerobalance_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use aerobalance_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const aerobalance_interfaces::action::TrajectoryFileVelocity_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  aerobalance_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aerobalance_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const aerobalance_interfaces::action::TrajectoryFileVelocity_SendGoal_Response & msg)
{
  return aerobalance_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<aerobalance_interfaces::action::TrajectoryFileVelocity_SendGoal_Response>()
{
  return "aerobalance_interfaces::action::TrajectoryFileVelocity_SendGoal_Response";
}

template<>
inline const char * name<aerobalance_interfaces::action::TrajectoryFileVelocity_SendGoal_Response>()
{
  return "aerobalance_interfaces/action/TrajectoryFileVelocity_SendGoal_Response";
}

template<>
struct has_fixed_size<aerobalance_interfaces::action::TrajectoryFileVelocity_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<aerobalance_interfaces::action::TrajectoryFileVelocity_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<aerobalance_interfaces::action::TrajectoryFileVelocity_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<aerobalance_interfaces::action::TrajectoryFileVelocity_SendGoal>()
{
  return "aerobalance_interfaces::action::TrajectoryFileVelocity_SendGoal";
}

template<>
inline const char * name<aerobalance_interfaces::action::TrajectoryFileVelocity_SendGoal>()
{
  return "aerobalance_interfaces/action/TrajectoryFileVelocity_SendGoal";
}

template<>
struct has_fixed_size<aerobalance_interfaces::action::TrajectoryFileVelocity_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<aerobalance_interfaces::action::TrajectoryFileVelocity_SendGoal_Request>::value &&
    has_fixed_size<aerobalance_interfaces::action::TrajectoryFileVelocity_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<aerobalance_interfaces::action::TrajectoryFileVelocity_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<aerobalance_interfaces::action::TrajectoryFileVelocity_SendGoal_Request>::value &&
    has_bounded_size<aerobalance_interfaces::action::TrajectoryFileVelocity_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<aerobalance_interfaces::action::TrajectoryFileVelocity_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<aerobalance_interfaces::action::TrajectoryFileVelocity_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<aerobalance_interfaces::action::TrajectoryFileVelocity_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace aerobalance_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const TrajectoryFileVelocity_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TrajectoryFileVelocity_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TrajectoryFileVelocity_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace aerobalance_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use aerobalance_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const aerobalance_interfaces::action::TrajectoryFileVelocity_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  aerobalance_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aerobalance_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const aerobalance_interfaces::action::TrajectoryFileVelocity_GetResult_Request & msg)
{
  return aerobalance_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<aerobalance_interfaces::action::TrajectoryFileVelocity_GetResult_Request>()
{
  return "aerobalance_interfaces::action::TrajectoryFileVelocity_GetResult_Request";
}

template<>
inline const char * name<aerobalance_interfaces::action::TrajectoryFileVelocity_GetResult_Request>()
{
  return "aerobalance_interfaces/action/TrajectoryFileVelocity_GetResult_Request";
}

template<>
struct has_fixed_size<aerobalance_interfaces::action::TrajectoryFileVelocity_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<aerobalance_interfaces::action::TrajectoryFileVelocity_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<aerobalance_interfaces::action::TrajectoryFileVelocity_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "aerobalance_interfaces/action/detail/trajectory_file_velocity__traits.hpp"

namespace aerobalance_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const TrajectoryFileVelocity_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TrajectoryFileVelocity_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TrajectoryFileVelocity_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace aerobalance_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use aerobalance_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const aerobalance_interfaces::action::TrajectoryFileVelocity_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  aerobalance_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aerobalance_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const aerobalance_interfaces::action::TrajectoryFileVelocity_GetResult_Response & msg)
{
  return aerobalance_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<aerobalance_interfaces::action::TrajectoryFileVelocity_GetResult_Response>()
{
  return "aerobalance_interfaces::action::TrajectoryFileVelocity_GetResult_Response";
}

template<>
inline const char * name<aerobalance_interfaces::action::TrajectoryFileVelocity_GetResult_Response>()
{
  return "aerobalance_interfaces/action/TrajectoryFileVelocity_GetResult_Response";
}

template<>
struct has_fixed_size<aerobalance_interfaces::action::TrajectoryFileVelocity_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<aerobalance_interfaces::action::TrajectoryFileVelocity_Result>::value> {};

template<>
struct has_bounded_size<aerobalance_interfaces::action::TrajectoryFileVelocity_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<aerobalance_interfaces::action::TrajectoryFileVelocity_Result>::value> {};

template<>
struct is_message<aerobalance_interfaces::action::TrajectoryFileVelocity_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<aerobalance_interfaces::action::TrajectoryFileVelocity_GetResult>()
{
  return "aerobalance_interfaces::action::TrajectoryFileVelocity_GetResult";
}

template<>
inline const char * name<aerobalance_interfaces::action::TrajectoryFileVelocity_GetResult>()
{
  return "aerobalance_interfaces/action/TrajectoryFileVelocity_GetResult";
}

template<>
struct has_fixed_size<aerobalance_interfaces::action::TrajectoryFileVelocity_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<aerobalance_interfaces::action::TrajectoryFileVelocity_GetResult_Request>::value &&
    has_fixed_size<aerobalance_interfaces::action::TrajectoryFileVelocity_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<aerobalance_interfaces::action::TrajectoryFileVelocity_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<aerobalance_interfaces::action::TrajectoryFileVelocity_GetResult_Request>::value &&
    has_bounded_size<aerobalance_interfaces::action::TrajectoryFileVelocity_GetResult_Response>::value
  >
{
};

template<>
struct is_service<aerobalance_interfaces::action::TrajectoryFileVelocity_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<aerobalance_interfaces::action::TrajectoryFileVelocity_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<aerobalance_interfaces::action::TrajectoryFileVelocity_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "aerobalance_interfaces/action/detail/trajectory_file_velocity__traits.hpp"

namespace aerobalance_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const TrajectoryFileVelocity_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TrajectoryFileVelocity_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TrajectoryFileVelocity_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace aerobalance_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use aerobalance_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const aerobalance_interfaces::action::TrajectoryFileVelocity_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  aerobalance_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aerobalance_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const aerobalance_interfaces::action::TrajectoryFileVelocity_FeedbackMessage & msg)
{
  return aerobalance_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<aerobalance_interfaces::action::TrajectoryFileVelocity_FeedbackMessage>()
{
  return "aerobalance_interfaces::action::TrajectoryFileVelocity_FeedbackMessage";
}

template<>
inline const char * name<aerobalance_interfaces::action::TrajectoryFileVelocity_FeedbackMessage>()
{
  return "aerobalance_interfaces/action/TrajectoryFileVelocity_FeedbackMessage";
}

template<>
struct has_fixed_size<aerobalance_interfaces::action::TrajectoryFileVelocity_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<aerobalance_interfaces::action::TrajectoryFileVelocity_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<aerobalance_interfaces::action::TrajectoryFileVelocity_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<aerobalance_interfaces::action::TrajectoryFileVelocity_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<aerobalance_interfaces::action::TrajectoryFileVelocity_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<aerobalance_interfaces::action::TrajectoryFileVelocity>
  : std::true_type
{
};

template<>
struct is_action_goal<aerobalance_interfaces::action::TrajectoryFileVelocity_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<aerobalance_interfaces::action::TrajectoryFileVelocity_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<aerobalance_interfaces::action::TrajectoryFileVelocity_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // AEROBALANCE_INTERFACES__ACTION__DETAIL__TRAJECTORY_FILE_VELOCITY__TRAITS_HPP_
