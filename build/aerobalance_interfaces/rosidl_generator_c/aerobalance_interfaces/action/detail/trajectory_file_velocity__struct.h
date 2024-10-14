// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aerobalance_interfaces:action/TrajectoryFileVelocity.idl
// generated code does not contain a copyright notice

#ifndef AEROBALANCE_INTERFACES__ACTION__DETAIL__TRAJECTORY_FILE_VELOCITY__STRUCT_H_
#define AEROBALANCE_INTERFACES__ACTION__DETAIL__TRAJECTORY_FILE_VELOCITY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'filepath'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/TrajectoryFileVelocity in the package aerobalance_interfaces.
typedef struct aerobalance_interfaces__action__TrajectoryFileVelocity_Goal
{
  rosidl_runtime_c__String filepath;
} aerobalance_interfaces__action__TrajectoryFileVelocity_Goal;

// Struct for a sequence of aerobalance_interfaces__action__TrajectoryFileVelocity_Goal.
typedef struct aerobalance_interfaces__action__TrajectoryFileVelocity_Goal__Sequence
{
  aerobalance_interfaces__action__TrajectoryFileVelocity_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aerobalance_interfaces__action__TrajectoryFileVelocity_Goal__Sequence;


// Constants defined in the message

/// Constant 'SUCCESSFUL'.
enum
{
  aerobalance_interfaces__action__TrajectoryFileVelocity_Result__SUCCESSFUL = 0
};

/// Constant 'INVALID_FILE'.
enum
{
  aerobalance_interfaces__action__TrajectoryFileVelocity_Result__INVALID_FILE = 1
};

/// Constant 'INVALID_GOAL'.
enum
{
  aerobalance_interfaces__action__TrajectoryFileVelocity_Result__INVALID_GOAL = -1
};

/// Constant 'INVALID_JOINTS'.
enum
{
  aerobalance_interfaces__action__TrajectoryFileVelocity_Result__INVALID_JOINTS = -2
};

/// Struct defined in action/TrajectoryFileVelocity in the package aerobalance_interfaces.
typedef struct aerobalance_interfaces__action__TrajectoryFileVelocity_Result
{
  int8_t error_code;
} aerobalance_interfaces__action__TrajectoryFileVelocity_Result;

// Struct for a sequence of aerobalance_interfaces__action__TrajectoryFileVelocity_Result.
typedef struct aerobalance_interfaces__action__TrajectoryFileVelocity_Result__Sequence
{
  aerobalance_interfaces__action__TrajectoryFileVelocity_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aerobalance_interfaces__action__TrajectoryFileVelocity_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'joint_names'
// already included above
// #include "rosidl_runtime_c/string.h"
// Member 'actual'
// Member 'desired'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in action/TrajectoryFileVelocity in the package aerobalance_interfaces.
typedef struct aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String__Sequence joint_names;
  rosidl_runtime_c__double__Sequence actual;
  rosidl_runtime_c__double__Sequence desired;
} aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback;

// Struct for a sequence of aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback.
typedef struct aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__Sequence
{
  aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "aerobalance_interfaces/action/detail/trajectory_file_velocity__struct.h"

/// Struct defined in action/TrajectoryFileVelocity in the package aerobalance_interfaces.
typedef struct aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  aerobalance_interfaces__action__TrajectoryFileVelocity_Goal goal;
} aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request;

// Struct for a sequence of aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request.
typedef struct aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request__Sequence
{
  aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/TrajectoryFileVelocity in the package aerobalance_interfaces.
typedef struct aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response;

// Struct for a sequence of aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response.
typedef struct aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response__Sequence
{
  aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/TrajectoryFileVelocity in the package aerobalance_interfaces.
typedef struct aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request;

// Struct for a sequence of aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request.
typedef struct aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request__Sequence
{
  aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "aerobalance_interfaces/action/detail/trajectory_file_velocity__struct.h"

/// Struct defined in action/TrajectoryFileVelocity in the package aerobalance_interfaces.
typedef struct aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response
{
  int8_t status;
  aerobalance_interfaces__action__TrajectoryFileVelocity_Result result;
} aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response;

// Struct for a sequence of aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response.
typedef struct aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response__Sequence
{
  aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "aerobalance_interfaces/action/detail/trajectory_file_velocity__struct.h"

/// Struct defined in action/TrajectoryFileVelocity in the package aerobalance_interfaces.
typedef struct aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback feedback;
} aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage;

// Struct for a sequence of aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage.
typedef struct aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage__Sequence
{
  aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AEROBALANCE_INTERFACES__ACTION__DETAIL__TRAJECTORY_FILE_VELOCITY__STRUCT_H_
