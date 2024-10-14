// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aerobalance_interfaces:action/TrajectoryFilePosition.idl
// generated code does not contain a copyright notice

#ifndef AEROBALANCE_INTERFACES__ACTION__DETAIL__TRAJECTORY_FILE_POSITION__STRUCT_H_
#define AEROBALANCE_INTERFACES__ACTION__DETAIL__TRAJECTORY_FILE_POSITION__STRUCT_H_

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
// Member 'joint'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/TrajectoryFilePosition in the package aerobalance_interfaces.
typedef struct aerobalance_interfaces__action__TrajectoryFilePosition_Goal
{
  rosidl_runtime_c__String filepath;
  float timestep;
  rosidl_runtime_c__String joint;
} aerobalance_interfaces__action__TrajectoryFilePosition_Goal;

// Struct for a sequence of aerobalance_interfaces__action__TrajectoryFilePosition_Goal.
typedef struct aerobalance_interfaces__action__TrajectoryFilePosition_Goal__Sequence
{
  aerobalance_interfaces__action__TrajectoryFilePosition_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aerobalance_interfaces__action__TrajectoryFilePosition_Goal__Sequence;


// Constants defined in the message

/// Constant 'SUCCESSFUL'.
enum
{
  aerobalance_interfaces__action__TrajectoryFilePosition_Result__SUCCESSFUL = 0
};

/// Constant 'INVALID_FILE'.
enum
{
  aerobalance_interfaces__action__TrajectoryFilePosition_Result__INVALID_FILE = 1
};

/// Constant 'INVALID_GOAL'.
enum
{
  aerobalance_interfaces__action__TrajectoryFilePosition_Result__INVALID_GOAL = -1
};

/// Constant 'INVALID_JOINTS'.
enum
{
  aerobalance_interfaces__action__TrajectoryFilePosition_Result__INVALID_JOINTS = -2
};

/// Struct defined in action/TrajectoryFilePosition in the package aerobalance_interfaces.
typedef struct aerobalance_interfaces__action__TrajectoryFilePosition_Result
{
  int8_t error_code;
} aerobalance_interfaces__action__TrajectoryFilePosition_Result;

// Struct for a sequence of aerobalance_interfaces__action__TrajectoryFilePosition_Result.
typedef struct aerobalance_interfaces__action__TrajectoryFilePosition_Result__Sequence
{
  aerobalance_interfaces__action__TrajectoryFilePosition_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aerobalance_interfaces__action__TrajectoryFilePosition_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'actual'
// Member 'desired'
#include "trajectory_msgs/msg/detail/joint_trajectory_point__struct.h"

/// Struct defined in action/TrajectoryFilePosition in the package aerobalance_interfaces.
typedef struct aerobalance_interfaces__action__TrajectoryFilePosition_Feedback
{
  trajectory_msgs__msg__JointTrajectoryPoint actual;
  trajectory_msgs__msg__JointTrajectoryPoint desired;
} aerobalance_interfaces__action__TrajectoryFilePosition_Feedback;

// Struct for a sequence of aerobalance_interfaces__action__TrajectoryFilePosition_Feedback.
typedef struct aerobalance_interfaces__action__TrajectoryFilePosition_Feedback__Sequence
{
  aerobalance_interfaces__action__TrajectoryFilePosition_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aerobalance_interfaces__action__TrajectoryFilePosition_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "aerobalance_interfaces/action/detail/trajectory_file_position__struct.h"

/// Struct defined in action/TrajectoryFilePosition in the package aerobalance_interfaces.
typedef struct aerobalance_interfaces__action__TrajectoryFilePosition_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  aerobalance_interfaces__action__TrajectoryFilePosition_Goal goal;
} aerobalance_interfaces__action__TrajectoryFilePosition_SendGoal_Request;

// Struct for a sequence of aerobalance_interfaces__action__TrajectoryFilePosition_SendGoal_Request.
typedef struct aerobalance_interfaces__action__TrajectoryFilePosition_SendGoal_Request__Sequence
{
  aerobalance_interfaces__action__TrajectoryFilePosition_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aerobalance_interfaces__action__TrajectoryFilePosition_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/TrajectoryFilePosition in the package aerobalance_interfaces.
typedef struct aerobalance_interfaces__action__TrajectoryFilePosition_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} aerobalance_interfaces__action__TrajectoryFilePosition_SendGoal_Response;

// Struct for a sequence of aerobalance_interfaces__action__TrajectoryFilePosition_SendGoal_Response.
typedef struct aerobalance_interfaces__action__TrajectoryFilePosition_SendGoal_Response__Sequence
{
  aerobalance_interfaces__action__TrajectoryFilePosition_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aerobalance_interfaces__action__TrajectoryFilePosition_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/TrajectoryFilePosition in the package aerobalance_interfaces.
typedef struct aerobalance_interfaces__action__TrajectoryFilePosition_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} aerobalance_interfaces__action__TrajectoryFilePosition_GetResult_Request;

// Struct for a sequence of aerobalance_interfaces__action__TrajectoryFilePosition_GetResult_Request.
typedef struct aerobalance_interfaces__action__TrajectoryFilePosition_GetResult_Request__Sequence
{
  aerobalance_interfaces__action__TrajectoryFilePosition_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aerobalance_interfaces__action__TrajectoryFilePosition_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "aerobalance_interfaces/action/detail/trajectory_file_position__struct.h"

/// Struct defined in action/TrajectoryFilePosition in the package aerobalance_interfaces.
typedef struct aerobalance_interfaces__action__TrajectoryFilePosition_GetResult_Response
{
  int8_t status;
  aerobalance_interfaces__action__TrajectoryFilePosition_Result result;
} aerobalance_interfaces__action__TrajectoryFilePosition_GetResult_Response;

// Struct for a sequence of aerobalance_interfaces__action__TrajectoryFilePosition_GetResult_Response.
typedef struct aerobalance_interfaces__action__TrajectoryFilePosition_GetResult_Response__Sequence
{
  aerobalance_interfaces__action__TrajectoryFilePosition_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aerobalance_interfaces__action__TrajectoryFilePosition_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "aerobalance_interfaces/action/detail/trajectory_file_position__struct.h"

/// Struct defined in action/TrajectoryFilePosition in the package aerobalance_interfaces.
typedef struct aerobalance_interfaces__action__TrajectoryFilePosition_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  aerobalance_interfaces__action__TrajectoryFilePosition_Feedback feedback;
} aerobalance_interfaces__action__TrajectoryFilePosition_FeedbackMessage;

// Struct for a sequence of aerobalance_interfaces__action__TrajectoryFilePosition_FeedbackMessage.
typedef struct aerobalance_interfaces__action__TrajectoryFilePosition_FeedbackMessage__Sequence
{
  aerobalance_interfaces__action__TrajectoryFilePosition_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aerobalance_interfaces__action__TrajectoryFilePosition_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AEROBALANCE_INTERFACES__ACTION__DETAIL__TRAJECTORY_FILE_POSITION__STRUCT_H_
