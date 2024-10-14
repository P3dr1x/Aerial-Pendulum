// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from aerobalance_interfaces:action/TrajectoryFileVelocity.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "aerobalance_interfaces/action/detail/trajectory_file_velocity__struct.hpp"
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

void TrajectoryFileVelocity_Goal_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) aerobalance_interfaces::action::TrajectoryFileVelocity_Goal(_init);
}

void TrajectoryFileVelocity_Goal_fini_function(void * message_memory)
{
  auto typed_message = static_cast<aerobalance_interfaces::action::TrajectoryFileVelocity_Goal *>(message_memory);
  typed_message->~TrajectoryFileVelocity_Goal();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TrajectoryFileVelocity_Goal_message_member_array[1] = {
  {
    "filepath",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aerobalance_interfaces::action::TrajectoryFileVelocity_Goal, filepath),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TrajectoryFileVelocity_Goal_message_members = {
  "aerobalance_interfaces::action",  // message namespace
  "TrajectoryFileVelocity_Goal",  // message name
  1,  // number of fields
  sizeof(aerobalance_interfaces::action::TrajectoryFileVelocity_Goal),
  TrajectoryFileVelocity_Goal_message_member_array,  // message members
  TrajectoryFileVelocity_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  TrajectoryFileVelocity_Goal_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TrajectoryFileVelocity_Goal_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TrajectoryFileVelocity_Goal_message_members,
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
get_message_type_support_handle<aerobalance_interfaces::action::TrajectoryFileVelocity_Goal>()
{
  return &::aerobalance_interfaces::action::rosidl_typesupport_introspection_cpp::TrajectoryFileVelocity_Goal_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, aerobalance_interfaces, action, TrajectoryFileVelocity_Goal)() {
  return &::aerobalance_interfaces::action::rosidl_typesupport_introspection_cpp::TrajectoryFileVelocity_Goal_message_type_support_handle;
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
// #include "aerobalance_interfaces/action/detail/trajectory_file_velocity__struct.hpp"
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

void TrajectoryFileVelocity_Result_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) aerobalance_interfaces::action::TrajectoryFileVelocity_Result(_init);
}

void TrajectoryFileVelocity_Result_fini_function(void * message_memory)
{
  auto typed_message = static_cast<aerobalance_interfaces::action::TrajectoryFileVelocity_Result *>(message_memory);
  typed_message->~TrajectoryFileVelocity_Result();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TrajectoryFileVelocity_Result_message_member_array[1] = {
  {
    "error_code",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aerobalance_interfaces::action::TrajectoryFileVelocity_Result, error_code),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TrajectoryFileVelocity_Result_message_members = {
  "aerobalance_interfaces::action",  // message namespace
  "TrajectoryFileVelocity_Result",  // message name
  1,  // number of fields
  sizeof(aerobalance_interfaces::action::TrajectoryFileVelocity_Result),
  TrajectoryFileVelocity_Result_message_member_array,  // message members
  TrajectoryFileVelocity_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  TrajectoryFileVelocity_Result_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TrajectoryFileVelocity_Result_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TrajectoryFileVelocity_Result_message_members,
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
get_message_type_support_handle<aerobalance_interfaces::action::TrajectoryFileVelocity_Result>()
{
  return &::aerobalance_interfaces::action::rosidl_typesupport_introspection_cpp::TrajectoryFileVelocity_Result_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, aerobalance_interfaces, action, TrajectoryFileVelocity_Result)() {
  return &::aerobalance_interfaces::action::rosidl_typesupport_introspection_cpp::TrajectoryFileVelocity_Result_message_type_support_handle;
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
// #include "aerobalance_interfaces/action/detail/trajectory_file_velocity__struct.hpp"
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

void TrajectoryFileVelocity_Feedback_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) aerobalance_interfaces::action::TrajectoryFileVelocity_Feedback(_init);
}

void TrajectoryFileVelocity_Feedback_fini_function(void * message_memory)
{
  auto typed_message = static_cast<aerobalance_interfaces::action::TrajectoryFileVelocity_Feedback *>(message_memory);
  typed_message->~TrajectoryFileVelocity_Feedback();
}

size_t size_function__TrajectoryFileVelocity_Feedback__joint_names(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TrajectoryFileVelocity_Feedback__joint_names(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__TrajectoryFileVelocity_Feedback__joint_names(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__TrajectoryFileVelocity_Feedback__joint_names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__TrajectoryFileVelocity_Feedback__joint_names(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__TrajectoryFileVelocity_Feedback__joint_names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__TrajectoryFileVelocity_Feedback__joint_names(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__TrajectoryFileVelocity_Feedback__joint_names(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__TrajectoryFileVelocity_Feedback__actual(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TrajectoryFileVelocity_Feedback__actual(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__TrajectoryFileVelocity_Feedback__actual(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__TrajectoryFileVelocity_Feedback__actual(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__TrajectoryFileVelocity_Feedback__actual(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__TrajectoryFileVelocity_Feedback__actual(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__TrajectoryFileVelocity_Feedback__actual(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__TrajectoryFileVelocity_Feedback__actual(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__TrajectoryFileVelocity_Feedback__desired(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TrajectoryFileVelocity_Feedback__desired(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__TrajectoryFileVelocity_Feedback__desired(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__TrajectoryFileVelocity_Feedback__desired(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__TrajectoryFileVelocity_Feedback__desired(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__TrajectoryFileVelocity_Feedback__desired(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__TrajectoryFileVelocity_Feedback__desired(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__TrajectoryFileVelocity_Feedback__desired(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TrajectoryFileVelocity_Feedback_message_member_array[4] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aerobalance_interfaces::action::TrajectoryFileVelocity_Feedback, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "joint_names",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aerobalance_interfaces::action::TrajectoryFileVelocity_Feedback, joint_names),  // bytes offset in struct
    nullptr,  // default value
    size_function__TrajectoryFileVelocity_Feedback__joint_names,  // size() function pointer
    get_const_function__TrajectoryFileVelocity_Feedback__joint_names,  // get_const(index) function pointer
    get_function__TrajectoryFileVelocity_Feedback__joint_names,  // get(index) function pointer
    fetch_function__TrajectoryFileVelocity_Feedback__joint_names,  // fetch(index, &value) function pointer
    assign_function__TrajectoryFileVelocity_Feedback__joint_names,  // assign(index, value) function pointer
    resize_function__TrajectoryFileVelocity_Feedback__joint_names  // resize(index) function pointer
  },
  {
    "actual",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aerobalance_interfaces::action::TrajectoryFileVelocity_Feedback, actual),  // bytes offset in struct
    nullptr,  // default value
    size_function__TrajectoryFileVelocity_Feedback__actual,  // size() function pointer
    get_const_function__TrajectoryFileVelocity_Feedback__actual,  // get_const(index) function pointer
    get_function__TrajectoryFileVelocity_Feedback__actual,  // get(index) function pointer
    fetch_function__TrajectoryFileVelocity_Feedback__actual,  // fetch(index, &value) function pointer
    assign_function__TrajectoryFileVelocity_Feedback__actual,  // assign(index, value) function pointer
    resize_function__TrajectoryFileVelocity_Feedback__actual  // resize(index) function pointer
  },
  {
    "desired",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aerobalance_interfaces::action::TrajectoryFileVelocity_Feedback, desired),  // bytes offset in struct
    nullptr,  // default value
    size_function__TrajectoryFileVelocity_Feedback__desired,  // size() function pointer
    get_const_function__TrajectoryFileVelocity_Feedback__desired,  // get_const(index) function pointer
    get_function__TrajectoryFileVelocity_Feedback__desired,  // get(index) function pointer
    fetch_function__TrajectoryFileVelocity_Feedback__desired,  // fetch(index, &value) function pointer
    assign_function__TrajectoryFileVelocity_Feedback__desired,  // assign(index, value) function pointer
    resize_function__TrajectoryFileVelocity_Feedback__desired  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TrajectoryFileVelocity_Feedback_message_members = {
  "aerobalance_interfaces::action",  // message namespace
  "TrajectoryFileVelocity_Feedback",  // message name
  4,  // number of fields
  sizeof(aerobalance_interfaces::action::TrajectoryFileVelocity_Feedback),
  TrajectoryFileVelocity_Feedback_message_member_array,  // message members
  TrajectoryFileVelocity_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  TrajectoryFileVelocity_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TrajectoryFileVelocity_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TrajectoryFileVelocity_Feedback_message_members,
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
get_message_type_support_handle<aerobalance_interfaces::action::TrajectoryFileVelocity_Feedback>()
{
  return &::aerobalance_interfaces::action::rosidl_typesupport_introspection_cpp::TrajectoryFileVelocity_Feedback_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, aerobalance_interfaces, action, TrajectoryFileVelocity_Feedback)() {
  return &::aerobalance_interfaces::action::rosidl_typesupport_introspection_cpp::TrajectoryFileVelocity_Feedback_message_type_support_handle;
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
// #include "aerobalance_interfaces/action/detail/trajectory_file_velocity__struct.hpp"
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

void TrajectoryFileVelocity_SendGoal_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) aerobalance_interfaces::action::TrajectoryFileVelocity_SendGoal_Request(_init);
}

void TrajectoryFileVelocity_SendGoal_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<aerobalance_interfaces::action::TrajectoryFileVelocity_SendGoal_Request *>(message_memory);
  typed_message->~TrajectoryFileVelocity_SendGoal_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TrajectoryFileVelocity_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aerobalance_interfaces::action::TrajectoryFileVelocity_SendGoal_Request, goal_id),  // bytes offset in struct
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
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<aerobalance_interfaces::action::TrajectoryFileVelocity_Goal>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aerobalance_interfaces::action::TrajectoryFileVelocity_SendGoal_Request, goal),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TrajectoryFileVelocity_SendGoal_Request_message_members = {
  "aerobalance_interfaces::action",  // message namespace
  "TrajectoryFileVelocity_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(aerobalance_interfaces::action::TrajectoryFileVelocity_SendGoal_Request),
  TrajectoryFileVelocity_SendGoal_Request_message_member_array,  // message members
  TrajectoryFileVelocity_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  TrajectoryFileVelocity_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TrajectoryFileVelocity_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TrajectoryFileVelocity_SendGoal_Request_message_members,
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
get_message_type_support_handle<aerobalance_interfaces::action::TrajectoryFileVelocity_SendGoal_Request>()
{
  return &::aerobalance_interfaces::action::rosidl_typesupport_introspection_cpp::TrajectoryFileVelocity_SendGoal_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, aerobalance_interfaces, action, TrajectoryFileVelocity_SendGoal_Request)() {
  return &::aerobalance_interfaces::action::rosidl_typesupport_introspection_cpp::TrajectoryFileVelocity_SendGoal_Request_message_type_support_handle;
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
// #include "aerobalance_interfaces/action/detail/trajectory_file_velocity__struct.hpp"
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

void TrajectoryFileVelocity_SendGoal_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) aerobalance_interfaces::action::TrajectoryFileVelocity_SendGoal_Response(_init);
}

void TrajectoryFileVelocity_SendGoal_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<aerobalance_interfaces::action::TrajectoryFileVelocity_SendGoal_Response *>(message_memory);
  typed_message->~TrajectoryFileVelocity_SendGoal_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TrajectoryFileVelocity_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aerobalance_interfaces::action::TrajectoryFileVelocity_SendGoal_Response, accepted),  // bytes offset in struct
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
    offsetof(aerobalance_interfaces::action::TrajectoryFileVelocity_SendGoal_Response, stamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TrajectoryFileVelocity_SendGoal_Response_message_members = {
  "aerobalance_interfaces::action",  // message namespace
  "TrajectoryFileVelocity_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(aerobalance_interfaces::action::TrajectoryFileVelocity_SendGoal_Response),
  TrajectoryFileVelocity_SendGoal_Response_message_member_array,  // message members
  TrajectoryFileVelocity_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  TrajectoryFileVelocity_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TrajectoryFileVelocity_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TrajectoryFileVelocity_SendGoal_Response_message_members,
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
get_message_type_support_handle<aerobalance_interfaces::action::TrajectoryFileVelocity_SendGoal_Response>()
{
  return &::aerobalance_interfaces::action::rosidl_typesupport_introspection_cpp::TrajectoryFileVelocity_SendGoal_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, aerobalance_interfaces, action, TrajectoryFileVelocity_SendGoal_Response)() {
  return &::aerobalance_interfaces::action::rosidl_typesupport_introspection_cpp::TrajectoryFileVelocity_SendGoal_Response_message_type_support_handle;
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
// #include "aerobalance_interfaces/action/detail/trajectory_file_velocity__struct.hpp"
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
static ::rosidl_typesupport_introspection_cpp::ServiceMembers TrajectoryFileVelocity_SendGoal_service_members = {
  "aerobalance_interfaces::action",  // service namespace
  "TrajectoryFileVelocity_SendGoal",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<aerobalance_interfaces::action::TrajectoryFileVelocity_SendGoal>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t TrajectoryFileVelocity_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TrajectoryFileVelocity_SendGoal_service_members,
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
get_service_type_support_handle<aerobalance_interfaces::action::TrajectoryFileVelocity_SendGoal>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::aerobalance_interfaces::action::rosidl_typesupport_introspection_cpp::TrajectoryFileVelocity_SendGoal_service_type_support_handle;
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
        ::aerobalance_interfaces::action::TrajectoryFileVelocity_SendGoal_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::aerobalance_interfaces::action::TrajectoryFileVelocity_SendGoal_Response
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
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, aerobalance_interfaces, action, TrajectoryFileVelocity_SendGoal)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<aerobalance_interfaces::action::TrajectoryFileVelocity_SendGoal>();
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
// #include "aerobalance_interfaces/action/detail/trajectory_file_velocity__struct.hpp"
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

void TrajectoryFileVelocity_GetResult_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) aerobalance_interfaces::action::TrajectoryFileVelocity_GetResult_Request(_init);
}

void TrajectoryFileVelocity_GetResult_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<aerobalance_interfaces::action::TrajectoryFileVelocity_GetResult_Request *>(message_memory);
  typed_message->~TrajectoryFileVelocity_GetResult_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TrajectoryFileVelocity_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aerobalance_interfaces::action::TrajectoryFileVelocity_GetResult_Request, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TrajectoryFileVelocity_GetResult_Request_message_members = {
  "aerobalance_interfaces::action",  // message namespace
  "TrajectoryFileVelocity_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(aerobalance_interfaces::action::TrajectoryFileVelocity_GetResult_Request),
  TrajectoryFileVelocity_GetResult_Request_message_member_array,  // message members
  TrajectoryFileVelocity_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  TrajectoryFileVelocity_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TrajectoryFileVelocity_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TrajectoryFileVelocity_GetResult_Request_message_members,
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
get_message_type_support_handle<aerobalance_interfaces::action::TrajectoryFileVelocity_GetResult_Request>()
{
  return &::aerobalance_interfaces::action::rosidl_typesupport_introspection_cpp::TrajectoryFileVelocity_GetResult_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, aerobalance_interfaces, action, TrajectoryFileVelocity_GetResult_Request)() {
  return &::aerobalance_interfaces::action::rosidl_typesupport_introspection_cpp::TrajectoryFileVelocity_GetResult_Request_message_type_support_handle;
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
// #include "aerobalance_interfaces/action/detail/trajectory_file_velocity__struct.hpp"
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

void TrajectoryFileVelocity_GetResult_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) aerobalance_interfaces::action::TrajectoryFileVelocity_GetResult_Response(_init);
}

void TrajectoryFileVelocity_GetResult_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<aerobalance_interfaces::action::TrajectoryFileVelocity_GetResult_Response *>(message_memory);
  typed_message->~TrajectoryFileVelocity_GetResult_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TrajectoryFileVelocity_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aerobalance_interfaces::action::TrajectoryFileVelocity_GetResult_Response, status),  // bytes offset in struct
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
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<aerobalance_interfaces::action::TrajectoryFileVelocity_Result>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aerobalance_interfaces::action::TrajectoryFileVelocity_GetResult_Response, result),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TrajectoryFileVelocity_GetResult_Response_message_members = {
  "aerobalance_interfaces::action",  // message namespace
  "TrajectoryFileVelocity_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(aerobalance_interfaces::action::TrajectoryFileVelocity_GetResult_Response),
  TrajectoryFileVelocity_GetResult_Response_message_member_array,  // message members
  TrajectoryFileVelocity_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  TrajectoryFileVelocity_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TrajectoryFileVelocity_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TrajectoryFileVelocity_GetResult_Response_message_members,
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
get_message_type_support_handle<aerobalance_interfaces::action::TrajectoryFileVelocity_GetResult_Response>()
{
  return &::aerobalance_interfaces::action::rosidl_typesupport_introspection_cpp::TrajectoryFileVelocity_GetResult_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, aerobalance_interfaces, action, TrajectoryFileVelocity_GetResult_Response)() {
  return &::aerobalance_interfaces::action::rosidl_typesupport_introspection_cpp::TrajectoryFileVelocity_GetResult_Response_message_type_support_handle;
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
// #include "aerobalance_interfaces/action/detail/trajectory_file_velocity__struct.hpp"
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
static ::rosidl_typesupport_introspection_cpp::ServiceMembers TrajectoryFileVelocity_GetResult_service_members = {
  "aerobalance_interfaces::action",  // service namespace
  "TrajectoryFileVelocity_GetResult",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<aerobalance_interfaces::action::TrajectoryFileVelocity_GetResult>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t TrajectoryFileVelocity_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TrajectoryFileVelocity_GetResult_service_members,
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
get_service_type_support_handle<aerobalance_interfaces::action::TrajectoryFileVelocity_GetResult>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::aerobalance_interfaces::action::rosidl_typesupport_introspection_cpp::TrajectoryFileVelocity_GetResult_service_type_support_handle;
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
        ::aerobalance_interfaces::action::TrajectoryFileVelocity_GetResult_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::aerobalance_interfaces::action::TrajectoryFileVelocity_GetResult_Response
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
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, aerobalance_interfaces, action, TrajectoryFileVelocity_GetResult)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<aerobalance_interfaces::action::TrajectoryFileVelocity_GetResult>();
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
// #include "aerobalance_interfaces/action/detail/trajectory_file_velocity__struct.hpp"
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

void TrajectoryFileVelocity_FeedbackMessage_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) aerobalance_interfaces::action::TrajectoryFileVelocity_FeedbackMessage(_init);
}

void TrajectoryFileVelocity_FeedbackMessage_fini_function(void * message_memory)
{
  auto typed_message = static_cast<aerobalance_interfaces::action::TrajectoryFileVelocity_FeedbackMessage *>(message_memory);
  typed_message->~TrajectoryFileVelocity_FeedbackMessage();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TrajectoryFileVelocity_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aerobalance_interfaces::action::TrajectoryFileVelocity_FeedbackMessage, goal_id),  // bytes offset in struct
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
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<aerobalance_interfaces::action::TrajectoryFileVelocity_Feedback>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aerobalance_interfaces::action::TrajectoryFileVelocity_FeedbackMessage, feedback),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TrajectoryFileVelocity_FeedbackMessage_message_members = {
  "aerobalance_interfaces::action",  // message namespace
  "TrajectoryFileVelocity_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(aerobalance_interfaces::action::TrajectoryFileVelocity_FeedbackMessage),
  TrajectoryFileVelocity_FeedbackMessage_message_member_array,  // message members
  TrajectoryFileVelocity_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  TrajectoryFileVelocity_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TrajectoryFileVelocity_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TrajectoryFileVelocity_FeedbackMessage_message_members,
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
get_message_type_support_handle<aerobalance_interfaces::action::TrajectoryFileVelocity_FeedbackMessage>()
{
  return &::aerobalance_interfaces::action::rosidl_typesupport_introspection_cpp::TrajectoryFileVelocity_FeedbackMessage_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, aerobalance_interfaces, action, TrajectoryFileVelocity_FeedbackMessage)() {
  return &::aerobalance_interfaces::action::rosidl_typesupport_introspection_cpp::TrajectoryFileVelocity_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
