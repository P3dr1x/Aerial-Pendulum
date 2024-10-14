// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from aerobalance_interfaces:action/TrajectoryFilePosition.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "aerobalance_interfaces/action/detail/trajectory_file_position__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace aerobalance_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void TrajectoryFilePosition_Goal_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) aerobalance_interfaces::action::TrajectoryFilePosition_Goal(_init);
}

void TrajectoryFilePosition_Goal_fini_function(void * message_memory)
{
  auto typed_message = static_cast<aerobalance_interfaces::action::TrajectoryFilePosition_Goal *>(message_memory);
  typed_message->~TrajectoryFilePosition_Goal();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TrajectoryFilePosition_Goal_message_member_array[3] = {
  {
    "filepath",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aerobalance_interfaces::action::TrajectoryFilePosition_Goal, filepath),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "timestep",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aerobalance_interfaces::action::TrajectoryFilePosition_Goal, timestep),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "joint",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aerobalance_interfaces::action::TrajectoryFilePosition_Goal, joint),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TrajectoryFilePosition_Goal_message_members = {
  "aerobalance_interfaces::action",  // message namespace
  "TrajectoryFilePosition_Goal",  // message name
  3,  // number of fields
  sizeof(aerobalance_interfaces::action::TrajectoryFilePosition_Goal),
  TrajectoryFilePosition_Goal_message_member_array,  // message members
  TrajectoryFilePosition_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  TrajectoryFilePosition_Goal_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TrajectoryFilePosition_Goal_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TrajectoryFilePosition_Goal_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace aerobalance_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<aerobalance_interfaces::action::TrajectoryFilePosition_Goal>()
{
  return &::aerobalance_interfaces::action::rosidl_typesupport_introspection_cpp::TrajectoryFilePosition_Goal_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, aerobalance_interfaces, action, TrajectoryFilePosition_Goal)() {
  return &::aerobalance_interfaces::action::rosidl_typesupport_introspection_cpp::TrajectoryFilePosition_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "aerobalance_interfaces/action/detail/trajectory_file_position__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace aerobalance_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void TrajectoryFilePosition_Result_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) aerobalance_interfaces::action::TrajectoryFilePosition_Result(_init);
}

void TrajectoryFilePosition_Result_fini_function(void * message_memory)
{
  auto typed_message = static_cast<aerobalance_interfaces::action::TrajectoryFilePosition_Result *>(message_memory);
  typed_message->~TrajectoryFilePosition_Result();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TrajectoryFilePosition_Result_message_member_array[1] = {
  {
    "error_code",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aerobalance_interfaces::action::TrajectoryFilePosition_Result, error_code),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TrajectoryFilePosition_Result_message_members = {
  "aerobalance_interfaces::action",  // message namespace
  "TrajectoryFilePosition_Result",  // message name
  1,  // number of fields
  sizeof(aerobalance_interfaces::action::TrajectoryFilePosition_Result),
  TrajectoryFilePosition_Result_message_member_array,  // message members
  TrajectoryFilePosition_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  TrajectoryFilePosition_Result_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TrajectoryFilePosition_Result_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TrajectoryFilePosition_Result_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace aerobalance_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<aerobalance_interfaces::action::TrajectoryFilePosition_Result>()
{
  return &::aerobalance_interfaces::action::rosidl_typesupport_introspection_cpp::TrajectoryFilePosition_Result_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, aerobalance_interfaces, action, TrajectoryFilePosition_Result)() {
  return &::aerobalance_interfaces::action::rosidl_typesupport_introspection_cpp::TrajectoryFilePosition_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "aerobalance_interfaces/action/detail/trajectory_file_position__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace aerobalance_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void TrajectoryFilePosition_Feedback_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) aerobalance_interfaces::action::TrajectoryFilePosition_Feedback(_init);
}

void TrajectoryFilePosition_Feedback_fini_function(void * message_memory)
{
  auto typed_message = static_cast<aerobalance_interfaces::action::TrajectoryFilePosition_Feedback *>(message_memory);
  typed_message->~TrajectoryFilePosition_Feedback();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TrajectoryFilePosition_Feedback_message_member_array[2] = {
  {
    "actual",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<trajectory_msgs::msg::JointTrajectoryPoint>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aerobalance_interfaces::action::TrajectoryFilePosition_Feedback, actual),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "desired",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<trajectory_msgs::msg::JointTrajectoryPoint>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aerobalance_interfaces::action::TrajectoryFilePosition_Feedback, desired),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TrajectoryFilePosition_Feedback_message_members = {
  "aerobalance_interfaces::action",  // message namespace
  "TrajectoryFilePosition_Feedback",  // message name
  2,  // number of fields
  sizeof(aerobalance_interfaces::action::TrajectoryFilePosition_Feedback),
  TrajectoryFilePosition_Feedback_message_member_array,  // message members
  TrajectoryFilePosition_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  TrajectoryFilePosition_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TrajectoryFilePosition_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TrajectoryFilePosition_Feedback_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace aerobalance_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<aerobalance_interfaces::action::TrajectoryFilePosition_Feedback>()
{
  return &::aerobalance_interfaces::action::rosidl_typesupport_introspection_cpp::TrajectoryFilePosition_Feedback_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, aerobalance_interfaces, action, TrajectoryFilePosition_Feedback)() {
  return &::aerobalance_interfaces::action::rosidl_typesupport_introspection_cpp::TrajectoryFilePosition_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "aerobalance_interfaces/action/detail/trajectory_file_position__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace aerobalance_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void TrajectoryFilePosition_SendGoal_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) aerobalance_interfaces::action::TrajectoryFilePosition_SendGoal_Request(_init);
}

void TrajectoryFilePosition_SendGoal_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<aerobalance_interfaces::action::TrajectoryFilePosition_SendGoal_Request *>(message_memory);
  typed_message->~TrajectoryFilePosition_SendGoal_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TrajectoryFilePosition_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aerobalance_interfaces::action::TrajectoryFilePosition_SendGoal_Request, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "goal",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<aerobalance_interfaces::action::TrajectoryFilePosition_Goal>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aerobalance_interfaces::action::TrajectoryFilePosition_SendGoal_Request, goal),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TrajectoryFilePosition_SendGoal_Request_message_members = {
  "aerobalance_interfaces::action",  // message namespace
  "TrajectoryFilePosition_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(aerobalance_interfaces::action::TrajectoryFilePosition_SendGoal_Request),
  TrajectoryFilePosition_SendGoal_Request_message_member_array,  // message members
  TrajectoryFilePosition_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  TrajectoryFilePosition_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TrajectoryFilePosition_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TrajectoryFilePosition_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace aerobalance_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<aerobalance_interfaces::action::TrajectoryFilePosition_SendGoal_Request>()
{
  return &::aerobalance_interfaces::action::rosidl_typesupport_introspection_cpp::TrajectoryFilePosition_SendGoal_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, aerobalance_interfaces, action, TrajectoryFilePosition_SendGoal_Request)() {
  return &::aerobalance_interfaces::action::rosidl_typesupport_introspection_cpp::TrajectoryFilePosition_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "aerobalance_interfaces/action/detail/trajectory_file_position__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace aerobalance_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void TrajectoryFilePosition_SendGoal_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) aerobalance_interfaces::action::TrajectoryFilePosition_SendGoal_Response(_init);
}

void TrajectoryFilePosition_SendGoal_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<aerobalance_interfaces::action::TrajectoryFilePosition_SendGoal_Response *>(message_memory);
  typed_message->~TrajectoryFilePosition_SendGoal_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TrajectoryFilePosition_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aerobalance_interfaces::action::TrajectoryFilePosition_SendGoal_Response, accepted),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "stamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aerobalance_interfaces::action::TrajectoryFilePosition_SendGoal_Response, stamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TrajectoryFilePosition_SendGoal_Response_message_members = {
  "aerobalance_interfaces::action",  // message namespace
  "TrajectoryFilePosition_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(aerobalance_interfaces::action::TrajectoryFilePosition_SendGoal_Response),
  TrajectoryFilePosition_SendGoal_Response_message_member_array,  // message members
  TrajectoryFilePosition_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  TrajectoryFilePosition_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TrajectoryFilePosition_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TrajectoryFilePosition_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace aerobalance_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<aerobalance_interfaces::action::TrajectoryFilePosition_SendGoal_Response>()
{
  return &::aerobalance_interfaces::action::rosidl_typesupport_introspection_cpp::TrajectoryFilePosition_SendGoal_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, aerobalance_interfaces, action, TrajectoryFilePosition_SendGoal_Response)() {
  return &::aerobalance_interfaces::action::rosidl_typesupport_introspection_cpp::TrajectoryFilePosition_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "aerobalance_interfaces/action/detail/trajectory_file_position__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace aerobalance_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers TrajectoryFilePosition_SendGoal_service_members = {
  "aerobalance_interfaces::action",  // service namespace
  "TrajectoryFilePosition_SendGoal",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<aerobalance_interfaces::action::TrajectoryFilePosition_SendGoal>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t TrajectoryFilePosition_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TrajectoryFilePosition_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace aerobalance_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<aerobalance_interfaces::action::TrajectoryFilePosition_SendGoal>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::aerobalance_interfaces::action::rosidl_typesupport_introspection_cpp::TrajectoryFilePosition_SendGoal_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::aerobalance_interfaces::action::TrajectoryFilePosition_SendGoal_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::aerobalance_interfaces::action::TrajectoryFilePosition_SendGoal_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, aerobalance_interfaces, action, TrajectoryFilePosition_SendGoal)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<aerobalance_interfaces::action::TrajectoryFilePosition_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "aerobalance_interfaces/action/detail/trajectory_file_position__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace aerobalance_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void TrajectoryFilePosition_GetResult_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) aerobalance_interfaces::action::TrajectoryFilePosition_GetResult_Request(_init);
}

void TrajectoryFilePosition_GetResult_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<aerobalance_interfaces::action::TrajectoryFilePosition_GetResult_Request *>(message_memory);
  typed_message->~TrajectoryFilePosition_GetResult_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TrajectoryFilePosition_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aerobalance_interfaces::action::TrajectoryFilePosition_GetResult_Request, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TrajectoryFilePosition_GetResult_Request_message_members = {
  "aerobalance_interfaces::action",  // message namespace
  "TrajectoryFilePosition_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(aerobalance_interfaces::action::TrajectoryFilePosition_GetResult_Request),
  TrajectoryFilePosition_GetResult_Request_message_member_array,  // message members
  TrajectoryFilePosition_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  TrajectoryFilePosition_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TrajectoryFilePosition_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TrajectoryFilePosition_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace aerobalance_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<aerobalance_interfaces::action::TrajectoryFilePosition_GetResult_Request>()
{
  return &::aerobalance_interfaces::action::rosidl_typesupport_introspection_cpp::TrajectoryFilePosition_GetResult_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, aerobalance_interfaces, action, TrajectoryFilePosition_GetResult_Request)() {
  return &::aerobalance_interfaces::action::rosidl_typesupport_introspection_cpp::TrajectoryFilePosition_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "aerobalance_interfaces/action/detail/trajectory_file_position__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace aerobalance_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void TrajectoryFilePosition_GetResult_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) aerobalance_interfaces::action::TrajectoryFilePosition_GetResult_Response(_init);
}

void TrajectoryFilePosition_GetResult_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<aerobalance_interfaces::action::TrajectoryFilePosition_GetResult_Response *>(message_memory);
  typed_message->~TrajectoryFilePosition_GetResult_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TrajectoryFilePosition_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aerobalance_interfaces::action::TrajectoryFilePosition_GetResult_Response, status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "result",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<aerobalance_interfaces::action::TrajectoryFilePosition_Result>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aerobalance_interfaces::action::TrajectoryFilePosition_GetResult_Response, result),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TrajectoryFilePosition_GetResult_Response_message_members = {
  "aerobalance_interfaces::action",  // message namespace
  "TrajectoryFilePosition_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(aerobalance_interfaces::action::TrajectoryFilePosition_GetResult_Response),
  TrajectoryFilePosition_GetResult_Response_message_member_array,  // message members
  TrajectoryFilePosition_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  TrajectoryFilePosition_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TrajectoryFilePosition_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TrajectoryFilePosition_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace aerobalance_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<aerobalance_interfaces::action::TrajectoryFilePosition_GetResult_Response>()
{
  return &::aerobalance_interfaces::action::rosidl_typesupport_introspection_cpp::TrajectoryFilePosition_GetResult_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, aerobalance_interfaces, action, TrajectoryFilePosition_GetResult_Response)() {
  return &::aerobalance_interfaces::action::rosidl_typesupport_introspection_cpp::TrajectoryFilePosition_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "aerobalance_interfaces/action/detail/trajectory_file_position__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace aerobalance_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers TrajectoryFilePosition_GetResult_service_members = {
  "aerobalance_interfaces::action",  // service namespace
  "TrajectoryFilePosition_GetResult",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<aerobalance_interfaces::action::TrajectoryFilePosition_GetResult>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t TrajectoryFilePosition_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TrajectoryFilePosition_GetResult_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace aerobalance_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<aerobalance_interfaces::action::TrajectoryFilePosition_GetResult>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::aerobalance_interfaces::action::rosidl_typesupport_introspection_cpp::TrajectoryFilePosition_GetResult_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::aerobalance_interfaces::action::TrajectoryFilePosition_GetResult_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::aerobalance_interfaces::action::TrajectoryFilePosition_GetResult_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, aerobalance_interfaces, action, TrajectoryFilePosition_GetResult)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<aerobalance_interfaces::action::TrajectoryFilePosition_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "aerobalance_interfaces/action/detail/trajectory_file_position__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace aerobalance_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void TrajectoryFilePosition_FeedbackMessage_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) aerobalance_interfaces::action::TrajectoryFilePosition_FeedbackMessage(_init);
}

void TrajectoryFilePosition_FeedbackMessage_fini_function(void * message_memory)
{
  auto typed_message = static_cast<aerobalance_interfaces::action::TrajectoryFilePosition_FeedbackMessage *>(message_memory);
  typed_message->~TrajectoryFilePosition_FeedbackMessage();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TrajectoryFilePosition_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aerobalance_interfaces::action::TrajectoryFilePosition_FeedbackMessage, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "feedback",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<aerobalance_interfaces::action::TrajectoryFilePosition_Feedback>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aerobalance_interfaces::action::TrajectoryFilePosition_FeedbackMessage, feedback),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TrajectoryFilePosition_FeedbackMessage_message_members = {
  "aerobalance_interfaces::action",  // message namespace
  "TrajectoryFilePosition_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(aerobalance_interfaces::action::TrajectoryFilePosition_FeedbackMessage),
  TrajectoryFilePosition_FeedbackMessage_message_member_array,  // message members
  TrajectoryFilePosition_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  TrajectoryFilePosition_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TrajectoryFilePosition_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TrajectoryFilePosition_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace aerobalance_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<aerobalance_interfaces::action::TrajectoryFilePosition_FeedbackMessage>()
{
  return &::aerobalance_interfaces::action::rosidl_typesupport_introspection_cpp::TrajectoryFilePosition_FeedbackMessage_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, aerobalance_interfaces, action, TrajectoryFilePosition_FeedbackMessage)() {
  return &::aerobalance_interfaces::action::rosidl_typesupport_introspection_cpp::TrajectoryFilePosition_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
