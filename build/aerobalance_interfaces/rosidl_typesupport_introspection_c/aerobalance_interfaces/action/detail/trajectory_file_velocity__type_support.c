// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from aerobalance_interfaces:action/TrajectoryFileVelocity.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "aerobalance_interfaces/action/detail/trajectory_file_velocity__rosidl_typesupport_introspection_c.h"
#include "aerobalance_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "aerobalance_interfaces/action/detail/trajectory_file_velocity__functions.h"
#include "aerobalance_interfaces/action/detail/trajectory_file_velocity__struct.h"


// Include directives for member types
// Member `filepath`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void aerobalance_interfaces__action__TrajectoryFileVelocity_Goal__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  aerobalance_interfaces__action__TrajectoryFileVelocity_Goal__init(message_memory);
}

void aerobalance_interfaces__action__TrajectoryFileVelocity_Goal__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_Goal_fini_function(void * message_memory)
{
  aerobalance_interfaces__action__TrajectoryFileVelocity_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember aerobalance_interfaces__action__TrajectoryFileVelocity_Goal__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_Goal_message_member_array[1] = {
  {
    "filepath",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aerobalance_interfaces__action__TrajectoryFileVelocity_Goal, filepath),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers aerobalance_interfaces__action__TrajectoryFileVelocity_Goal__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_Goal_message_members = {
  "aerobalance_interfaces__action",  // message namespace
  "TrajectoryFileVelocity_Goal",  // message name
  1,  // number of fields
  sizeof(aerobalance_interfaces__action__TrajectoryFileVelocity_Goal),
  aerobalance_interfaces__action__TrajectoryFileVelocity_Goal__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_Goal_message_member_array,  // message members
  aerobalance_interfaces__action__TrajectoryFileVelocity_Goal__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  aerobalance_interfaces__action__TrajectoryFileVelocity_Goal__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t aerobalance_interfaces__action__TrajectoryFileVelocity_Goal__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_Goal_message_type_support_handle = {
  0,
  &aerobalance_interfaces__action__TrajectoryFileVelocity_Goal__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_aerobalance_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aerobalance_interfaces, action, TrajectoryFileVelocity_Goal)() {
  if (!aerobalance_interfaces__action__TrajectoryFileVelocity_Goal__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_Goal_message_type_support_handle.typesupport_identifier) {
    aerobalance_interfaces__action__TrajectoryFileVelocity_Goal__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &aerobalance_interfaces__action__TrajectoryFileVelocity_Goal__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "aerobalance_interfaces/action/detail/trajectory_file_velocity__rosidl_typesupport_introspection_c.h"
// already included above
// #include "aerobalance_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "aerobalance_interfaces/action/detail/trajectory_file_velocity__functions.h"
// already included above
// #include "aerobalance_interfaces/action/detail/trajectory_file_velocity__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void aerobalance_interfaces__action__TrajectoryFileVelocity_Result__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  aerobalance_interfaces__action__TrajectoryFileVelocity_Result__init(message_memory);
}

void aerobalance_interfaces__action__TrajectoryFileVelocity_Result__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_Result_fini_function(void * message_memory)
{
  aerobalance_interfaces__action__TrajectoryFileVelocity_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember aerobalance_interfaces__action__TrajectoryFileVelocity_Result__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_Result_message_member_array[1] = {
  {
    "error_code",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aerobalance_interfaces__action__TrajectoryFileVelocity_Result, error_code),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers aerobalance_interfaces__action__TrajectoryFileVelocity_Result__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_Result_message_members = {
  "aerobalance_interfaces__action",  // message namespace
  "TrajectoryFileVelocity_Result",  // message name
  1,  // number of fields
  sizeof(aerobalance_interfaces__action__TrajectoryFileVelocity_Result),
  aerobalance_interfaces__action__TrajectoryFileVelocity_Result__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_Result_message_member_array,  // message members
  aerobalance_interfaces__action__TrajectoryFileVelocity_Result__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  aerobalance_interfaces__action__TrajectoryFileVelocity_Result__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t aerobalance_interfaces__action__TrajectoryFileVelocity_Result__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_Result_message_type_support_handle = {
  0,
  &aerobalance_interfaces__action__TrajectoryFileVelocity_Result__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_aerobalance_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aerobalance_interfaces, action, TrajectoryFileVelocity_Result)() {
  if (!aerobalance_interfaces__action__TrajectoryFileVelocity_Result__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_Result_message_type_support_handle.typesupport_identifier) {
    aerobalance_interfaces__action__TrajectoryFileVelocity_Result__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &aerobalance_interfaces__action__TrajectoryFileVelocity_Result__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "aerobalance_interfaces/action/detail/trajectory_file_velocity__rosidl_typesupport_introspection_c.h"
// already included above
// #include "aerobalance_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "aerobalance_interfaces/action/detail/trajectory_file_velocity__functions.h"
// already included above
// #include "aerobalance_interfaces/action/detail/trajectory_file_velocity__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `joint_names`
// already included above
// #include "rosidl_runtime_c/string_functions.h"
// Member `actual`
// Member `desired`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__init(message_memory);
}

void aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_Feedback_fini_function(void * message_memory)
{
  aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__fini(message_memory);
}

size_t aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__rosidl_typesupport_introspection_c__size_function__TrajectoryFileVelocity_Feedback__joint_names(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__rosidl_typesupport_introspection_c__get_const_function__TrajectoryFileVelocity_Feedback__joint_names(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__rosidl_typesupport_introspection_c__get_function__TrajectoryFileVelocity_Feedback__joint_names(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__rosidl_typesupport_introspection_c__fetch_function__TrajectoryFileVelocity_Feedback__joint_names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__rosidl_typesupport_introspection_c__get_const_function__TrajectoryFileVelocity_Feedback__joint_names(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__rosidl_typesupport_introspection_c__assign_function__TrajectoryFileVelocity_Feedback__joint_names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__rosidl_typesupport_introspection_c__get_function__TrajectoryFileVelocity_Feedback__joint_names(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__rosidl_typesupport_introspection_c__resize_function__TrajectoryFileVelocity_Feedback__joint_names(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__rosidl_typesupport_introspection_c__size_function__TrajectoryFileVelocity_Feedback__actual(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__rosidl_typesupport_introspection_c__get_const_function__TrajectoryFileVelocity_Feedback__actual(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__rosidl_typesupport_introspection_c__get_function__TrajectoryFileVelocity_Feedback__actual(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__rosidl_typesupport_introspection_c__fetch_function__TrajectoryFileVelocity_Feedback__actual(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__rosidl_typesupport_introspection_c__get_const_function__TrajectoryFileVelocity_Feedback__actual(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__rosidl_typesupport_introspection_c__assign_function__TrajectoryFileVelocity_Feedback__actual(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__rosidl_typesupport_introspection_c__get_function__TrajectoryFileVelocity_Feedback__actual(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__rosidl_typesupport_introspection_c__resize_function__TrajectoryFileVelocity_Feedback__actual(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__rosidl_typesupport_introspection_c__size_function__TrajectoryFileVelocity_Feedback__desired(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__rosidl_typesupport_introspection_c__get_const_function__TrajectoryFileVelocity_Feedback__desired(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__rosidl_typesupport_introspection_c__get_function__TrajectoryFileVelocity_Feedback__desired(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__rosidl_typesupport_introspection_c__fetch_function__TrajectoryFileVelocity_Feedback__desired(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__rosidl_typesupport_introspection_c__get_const_function__TrajectoryFileVelocity_Feedback__desired(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__rosidl_typesupport_introspection_c__assign_function__TrajectoryFileVelocity_Feedback__desired(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__rosidl_typesupport_introspection_c__get_function__TrajectoryFileVelocity_Feedback__desired(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__rosidl_typesupport_introspection_c__resize_function__TrajectoryFileVelocity_Feedback__desired(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_Feedback_message_member_array[4] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint_names",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback, joint_names),  // bytes offset in struct
    NULL,  // default value
    aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__rosidl_typesupport_introspection_c__size_function__TrajectoryFileVelocity_Feedback__joint_names,  // size() function pointer
    aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__rosidl_typesupport_introspection_c__get_const_function__TrajectoryFileVelocity_Feedback__joint_names,  // get_const(index) function pointer
    aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__rosidl_typesupport_introspection_c__get_function__TrajectoryFileVelocity_Feedback__joint_names,  // get(index) function pointer
    aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__rosidl_typesupport_introspection_c__fetch_function__TrajectoryFileVelocity_Feedback__joint_names,  // fetch(index, &value) function pointer
    aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__rosidl_typesupport_introspection_c__assign_function__TrajectoryFileVelocity_Feedback__joint_names,  // assign(index, value) function pointer
    aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__rosidl_typesupport_introspection_c__resize_function__TrajectoryFileVelocity_Feedback__joint_names  // resize(index) function pointer
  },
  {
    "actual",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback, actual),  // bytes offset in struct
    NULL,  // default value
    aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__rosidl_typesupport_introspection_c__size_function__TrajectoryFileVelocity_Feedback__actual,  // size() function pointer
    aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__rosidl_typesupport_introspection_c__get_const_function__TrajectoryFileVelocity_Feedback__actual,  // get_const(index) function pointer
    aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__rosidl_typesupport_introspection_c__get_function__TrajectoryFileVelocity_Feedback__actual,  // get(index) function pointer
    aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__rosidl_typesupport_introspection_c__fetch_function__TrajectoryFileVelocity_Feedback__actual,  // fetch(index, &value) function pointer
    aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__rosidl_typesupport_introspection_c__assign_function__TrajectoryFileVelocity_Feedback__actual,  // assign(index, value) function pointer
    aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__rosidl_typesupport_introspection_c__resize_function__TrajectoryFileVelocity_Feedback__actual  // resize(index) function pointer
  },
  {
    "desired",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback, desired),  // bytes offset in struct
    NULL,  // default value
    aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__rosidl_typesupport_introspection_c__size_function__TrajectoryFileVelocity_Feedback__desired,  // size() function pointer
    aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__rosidl_typesupport_introspection_c__get_const_function__TrajectoryFileVelocity_Feedback__desired,  // get_const(index) function pointer
    aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__rosidl_typesupport_introspection_c__get_function__TrajectoryFileVelocity_Feedback__desired,  // get(index) function pointer
    aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__rosidl_typesupport_introspection_c__fetch_function__TrajectoryFileVelocity_Feedback__desired,  // fetch(index, &value) function pointer
    aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__rosidl_typesupport_introspection_c__assign_function__TrajectoryFileVelocity_Feedback__desired,  // assign(index, value) function pointer
    aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__rosidl_typesupport_introspection_c__resize_function__TrajectoryFileVelocity_Feedback__desired  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_Feedback_message_members = {
  "aerobalance_interfaces__action",  // message namespace
  "TrajectoryFileVelocity_Feedback",  // message name
  4,  // number of fields
  sizeof(aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback),
  aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_Feedback_message_member_array,  // message members
  aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_Feedback_message_type_support_handle = {
  0,
  &aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_aerobalance_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aerobalance_interfaces, action, TrajectoryFileVelocity_Feedback)() {
  aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_Feedback_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_Feedback_message_type_support_handle.typesupport_identifier) {
    aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "aerobalance_interfaces/action/detail/trajectory_file_velocity__rosidl_typesupport_introspection_c.h"
// already included above
// #include "aerobalance_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "aerobalance_interfaces/action/detail/trajectory_file_velocity__functions.h"
// already included above
// #include "aerobalance_interfaces/action/detail/trajectory_file_velocity__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "aerobalance_interfaces/action/trajectory_file_velocity.h"
// Member `goal`
// already included above
// #include "aerobalance_interfaces/action/detail/trajectory_file_velocity__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request__init(message_memory);
}

void aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_SendGoal_Request_fini_function(void * message_memory)
{
  aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_SendGoal_Request_message_members = {
  "aerobalance_interfaces__action",  // message namespace
  "TrajectoryFileVelocity_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request),
  aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_SendGoal_Request_message_member_array,  // message members
  aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_SendGoal_Request_message_type_support_handle = {
  0,
  &aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_aerobalance_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aerobalance_interfaces, action, TrajectoryFileVelocity_SendGoal_Request)() {
  aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aerobalance_interfaces, action, TrajectoryFileVelocity_Goal)();
  if (!aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "aerobalance_interfaces/action/detail/trajectory_file_velocity__rosidl_typesupport_introspection_c.h"
// already included above
// #include "aerobalance_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "aerobalance_interfaces/action/detail/trajectory_file_velocity__functions.h"
// already included above
// #include "aerobalance_interfaces/action/detail/trajectory_file_velocity__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response__init(message_memory);
}

void aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_SendGoal_Response_fini_function(void * message_memory)
{
  aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_SendGoal_Response_message_members = {
  "aerobalance_interfaces__action",  // message namespace
  "TrajectoryFileVelocity_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response),
  aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_SendGoal_Response_message_member_array,  // message members
  aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_SendGoal_Response_message_type_support_handle = {
  0,
  &aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_aerobalance_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aerobalance_interfaces, action, TrajectoryFileVelocity_SendGoal_Response)() {
  aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "aerobalance_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "aerobalance_interfaces/action/detail/trajectory_file_velocity__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers aerobalance_interfaces__action__detail__trajectory_file_velocity__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_SendGoal_service_members = {
  "aerobalance_interfaces__action",  // service namespace
  "TrajectoryFileVelocity_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // aerobalance_interfaces__action__detail__trajectory_file_velocity__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // aerobalance_interfaces__action__detail__trajectory_file_velocity__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t aerobalance_interfaces__action__detail__trajectory_file_velocity__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_SendGoal_service_type_support_handle = {
  0,
  &aerobalance_interfaces__action__detail__trajectory_file_velocity__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aerobalance_interfaces, action, TrajectoryFileVelocity_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aerobalance_interfaces, action, TrajectoryFileVelocity_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_aerobalance_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aerobalance_interfaces, action, TrajectoryFileVelocity_SendGoal)() {
  if (!aerobalance_interfaces__action__detail__trajectory_file_velocity__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_SendGoal_service_type_support_handle.typesupport_identifier) {
    aerobalance_interfaces__action__detail__trajectory_file_velocity__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)aerobalance_interfaces__action__detail__trajectory_file_velocity__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aerobalance_interfaces, action, TrajectoryFileVelocity_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aerobalance_interfaces, action, TrajectoryFileVelocity_SendGoal_Response)()->data;
  }

  return &aerobalance_interfaces__action__detail__trajectory_file_velocity__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "aerobalance_interfaces/action/detail/trajectory_file_velocity__rosidl_typesupport_introspection_c.h"
// already included above
// #include "aerobalance_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "aerobalance_interfaces/action/detail/trajectory_file_velocity__functions.h"
// already included above
// #include "aerobalance_interfaces/action/detail/trajectory_file_velocity__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request__init(message_memory);
}

void aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_GetResult_Request_fini_function(void * message_memory)
{
  aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_GetResult_Request_message_members = {
  "aerobalance_interfaces__action",  // message namespace
  "TrajectoryFileVelocity_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request),
  aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_GetResult_Request_message_member_array,  // message members
  aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_GetResult_Request_message_type_support_handle = {
  0,
  &aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_aerobalance_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aerobalance_interfaces, action, TrajectoryFileVelocity_GetResult_Request)() {
  aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "aerobalance_interfaces/action/detail/trajectory_file_velocity__rosidl_typesupport_introspection_c.h"
// already included above
// #include "aerobalance_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "aerobalance_interfaces/action/detail/trajectory_file_velocity__functions.h"
// already included above
// #include "aerobalance_interfaces/action/detail/trajectory_file_velocity__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "aerobalance_interfaces/action/trajectory_file_velocity.h"
// Member `result`
// already included above
// #include "aerobalance_interfaces/action/detail/trajectory_file_velocity__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response__init(message_memory);
}

void aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_GetResult_Response_fini_function(void * message_memory)
{
  aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_GetResult_Response_message_members = {
  "aerobalance_interfaces__action",  // message namespace
  "TrajectoryFileVelocity_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response),
  aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_GetResult_Response_message_member_array,  // message members
  aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_GetResult_Response_message_type_support_handle = {
  0,
  &aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_aerobalance_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aerobalance_interfaces, action, TrajectoryFileVelocity_GetResult_Response)() {
  aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aerobalance_interfaces, action, TrajectoryFileVelocity_Result)();
  if (!aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "aerobalance_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "aerobalance_interfaces/action/detail/trajectory_file_velocity__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers aerobalance_interfaces__action__detail__trajectory_file_velocity__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_GetResult_service_members = {
  "aerobalance_interfaces__action",  // service namespace
  "TrajectoryFileVelocity_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // aerobalance_interfaces__action__detail__trajectory_file_velocity__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // aerobalance_interfaces__action__detail__trajectory_file_velocity__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t aerobalance_interfaces__action__detail__trajectory_file_velocity__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_GetResult_service_type_support_handle = {
  0,
  &aerobalance_interfaces__action__detail__trajectory_file_velocity__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aerobalance_interfaces, action, TrajectoryFileVelocity_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aerobalance_interfaces, action, TrajectoryFileVelocity_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_aerobalance_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aerobalance_interfaces, action, TrajectoryFileVelocity_GetResult)() {
  if (!aerobalance_interfaces__action__detail__trajectory_file_velocity__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_GetResult_service_type_support_handle.typesupport_identifier) {
    aerobalance_interfaces__action__detail__trajectory_file_velocity__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)aerobalance_interfaces__action__detail__trajectory_file_velocity__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aerobalance_interfaces, action, TrajectoryFileVelocity_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aerobalance_interfaces, action, TrajectoryFileVelocity_GetResult_Response)()->data;
  }

  return &aerobalance_interfaces__action__detail__trajectory_file_velocity__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "aerobalance_interfaces/action/detail/trajectory_file_velocity__rosidl_typesupport_introspection_c.h"
// already included above
// #include "aerobalance_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "aerobalance_interfaces/action/detail/trajectory_file_velocity__functions.h"
// already included above
// #include "aerobalance_interfaces/action/detail/trajectory_file_velocity__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "aerobalance_interfaces/action/trajectory_file_velocity.h"
// Member `feedback`
// already included above
// #include "aerobalance_interfaces/action/detail/trajectory_file_velocity__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage__init(message_memory);
}

void aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_FeedbackMessage_fini_function(void * message_memory)
{
  aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_FeedbackMessage_message_members = {
  "aerobalance_interfaces__action",  // message namespace
  "TrajectoryFileVelocity_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage),
  aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_FeedbackMessage_message_member_array,  // message members
  aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_FeedbackMessage_message_type_support_handle = {
  0,
  &aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_aerobalance_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aerobalance_interfaces, action, TrajectoryFileVelocity_FeedbackMessage)() {
  aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aerobalance_interfaces, action, TrajectoryFileVelocity_Feedback)();
  if (!aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage__rosidl_typesupport_introspection_c__TrajectoryFileVelocity_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
