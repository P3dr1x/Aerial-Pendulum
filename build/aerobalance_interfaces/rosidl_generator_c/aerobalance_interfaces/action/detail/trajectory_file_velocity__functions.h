// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from aerobalance_interfaces:action/TrajectoryFileVelocity.idl
// generated code does not contain a copyright notice

#ifndef AEROBALANCE_INTERFACES__ACTION__DETAIL__TRAJECTORY_FILE_VELOCITY__FUNCTIONS_H_
#define AEROBALANCE_INTERFACES__ACTION__DETAIL__TRAJECTORY_FILE_VELOCITY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "aerobalance_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "aerobalance_interfaces/action/detail/trajectory_file_velocity__struct.h"

/// Initialize action/TrajectoryFileVelocity message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * aerobalance_interfaces__action__TrajectoryFileVelocity_Goal
 * )) before or use
 * aerobalance_interfaces__action__TrajectoryFileVelocity_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobalance_interfaces
bool
aerobalance_interfaces__action__TrajectoryFileVelocity_Goal__init(aerobalance_interfaces__action__TrajectoryFileVelocity_Goal * msg);

/// Finalize action/TrajectoryFileVelocity message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobalance_interfaces
void
aerobalance_interfaces__action__TrajectoryFileVelocity_Goal__fini(aerobalance_interfaces__action__TrajectoryFileVelocity_Goal * msg);

/// Create action/TrajectoryFileVelocity message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * aerobalance_interfaces__action__TrajectoryFileVelocity_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobalance_interfaces
aerobalance_interfaces__action__TrajectoryFileVelocity_Goal *
aerobalance_interfaces__action__TrajectoryFileVelocity_Goal__create();

/// Destroy action/TrajectoryFileVelocity message.
/**
 * It calls
 * aerobalance_interfaces__action__TrajectoryFileVelocity_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobalance_interfaces
void
aerobalance_interfaces__action__TrajectoryFileVelocity_Goal__destroy(aerobalance_interfaces__action__TrajectoryFileVelocity_Goal * msg);

/// Check for action/TrajectoryFileVelocity message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobalance_interfaces
bool
aerobalance_interfaces__action__TrajectoryFileVelocity_Goal__are_equal(const aerobalance_interfaces__action__TrajectoryFileVelocity_Goal * lhs, const aerobalance_interfaces__action__TrajectoryFileVelocity_Goal * rhs);

/// Copy a action/TrajectoryFileVelocity message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobalance_interfaces
bool
aerobalance_interfaces__action__TrajectoryFileVelocity_Goal__copy(
  const aerobalance_interfaces__action__TrajectoryFileVelocity_Goal * input,
  aerobalance_interfaces__action__TrajectoryFileVelocity_Goal * output);

/// Initialize array of action/TrajectoryFileVelocity messages.
/**
 * It allocates the memory for the number of elements and calls
 * aerobalance_interfaces__action__TrajectoryFileVelocity_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobalance_interfaces
bool
aerobalance_interfaces__action__TrajectoryFileVelocity_Goal__Sequence__init(aerobalance_interfaces__action__TrajectoryFileVelocity_Goal__Sequence * array, size_t size);

/// Finalize array of action/TrajectoryFileVelocity messages.
/**
 * It calls
 * aerobalance_interfaces__action__TrajectoryFileVelocity_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobalance_interfaces
void
aerobalance_interfaces__action__TrajectoryFileVelocity_Goal__Sequence__fini(aerobalance_interfaces__action__TrajectoryFileVelocity_Goal__Sequence * array);

/// Create array of action/TrajectoryFileVelocity messages.
/**
 * It allocates the memory for the array and calls
 * aerobalance_interfaces__action__TrajectoryFileVelocity_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobalance_interfaces
aerobalance_interfaces__action__TrajectoryFileVelocity_Goal__Sequence *
aerobalance_interfaces__action__TrajectoryFileVelocity_Goal__Sequence__create(size_t size);

/// Destroy array of action/TrajectoryFileVelocity messages.
/**
 * It calls
 * aerobalance_interfaces__action__TrajectoryFileVelocity_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobalance_interfaces
void
aerobalance_interfaces__action__TrajectoryFileVelocity_Goal__Sequence__destroy(aerobalance_interfaces__action__TrajectoryFileVelocity_Goal__Sequence * array);

/// Check for action/TrajectoryFileVelocity message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobalance_interfaces
bool
aerobalance_interfaces__action__TrajectoryFileVelocity_Goal__Sequence__are_equal(const aerobalance_interfaces__action__TrajectoryFileVelocity_Goal__Sequence * lhs, const aerobalance_interfaces__action__TrajectoryFileVelocity_Goal__Sequence * rhs);

/// Copy an array of action/TrajectoryFileVelocity messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobalance_interfaces
bool
aerobalance_interfaces__action__TrajectoryFileVelocity_Goal__Sequence__copy(
  const aerobalance_interfaces__action__TrajectoryFileVelocity_Goal__Sequence * input,
  aerobalance_interfaces__action__TrajectoryFileVelocity_Goal__Sequence * output);

/// Initialize action/TrajectoryFileVelocity message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * aerobalance_interfaces__action__TrajectoryFileVelocity_Result
 * )) before or use
 * aerobalance_interfaces__action__TrajectoryFileVelocity_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobalance_interfaces
bool
aerobalance_interfaces__action__TrajectoryFileVelocity_Result__init(aerobalance_interfaces__action__TrajectoryFileVelocity_Result * msg);

/// Finalize action/TrajectoryFileVelocity message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobalance_interfaces
void
aerobalance_interfaces__action__TrajectoryFileVelocity_Result__fini(aerobalance_interfaces__action__TrajectoryFileVelocity_Result * msg);

/// Create action/TrajectoryFileVelocity message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * aerobalance_interfaces__action__TrajectoryFileVelocity_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobalance_interfaces
aerobalance_interfaces__action__TrajectoryFileVelocity_Result *
aerobalance_interfaces__action__TrajectoryFileVelocity_Result__create();

/// Destroy action/TrajectoryFileVelocity message.
/**
 * It calls
 * aerobalance_interfaces__action__TrajectoryFileVelocity_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobalance_interfaces
void
aerobalance_interfaces__action__TrajectoryFileVelocity_Result__destroy(aerobalance_interfaces__action__TrajectoryFileVelocity_Result * msg);

/// Check for action/TrajectoryFileVelocity message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobalance_interfaces
bool
aerobalance_interfaces__action__TrajectoryFileVelocity_Result__are_equal(const aerobalance_interfaces__action__TrajectoryFileVelocity_Result * lhs, const aerobalance_interfaces__action__TrajectoryFileVelocity_Result * rhs);

/// Copy a action/TrajectoryFileVelocity message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobalance_interfaces
bool
aerobalance_interfaces__action__TrajectoryFileVelocity_Result__copy(
  const aerobalance_interfaces__action__TrajectoryFileVelocity_Result * input,
  aerobalance_interfaces__action__TrajectoryFileVelocity_Result * output);

/// Initialize array of action/TrajectoryFileVelocity messages.
/**
 * It allocates the memory for the number of elements and calls
 * aerobalance_interfaces__action__TrajectoryFileVelocity_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobalance_interfaces
bool
aerobalance_interfaces__action__TrajectoryFileVelocity_Result__Sequence__init(aerobalance_interfaces__action__TrajectoryFileVelocity_Result__Sequence * array, size_t size);

/// Finalize array of action/TrajectoryFileVelocity messages.
/**
 * It calls
 * aerobalance_interfaces__action__TrajectoryFileVelocity_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobalance_interfaces
void
aerobalance_interfaces__action__TrajectoryFileVelocity_Result__Sequence__fini(aerobalance_interfaces__action__TrajectoryFileVelocity_Result__Sequence * array);

/// Create array of action/TrajectoryFileVelocity messages.
/**
 * It allocates the memory for the array and calls
 * aerobalance_interfaces__action__TrajectoryFileVelocity_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobalance_interfaces
aerobalance_interfaces__action__TrajectoryFileVelocity_Result__Sequence *
aerobalance_interfaces__action__TrajectoryFileVelocity_Result__Sequence__create(size_t size);

/// Destroy array of action/TrajectoryFileVelocity messages.
/**
 * It calls
 * aerobalance_interfaces__action__TrajectoryFileVelocity_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobalance_interfaces
void
aerobalance_interfaces__action__TrajectoryFileVelocity_Result__Sequence__destroy(aerobalance_interfaces__action__TrajectoryFileVelocity_Result__Sequence * array);

/// Check for action/TrajectoryFileVelocity message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobalance_interfaces
bool
aerobalance_interfaces__action__TrajectoryFileVelocity_Result__Sequence__are_equal(const aerobalance_interfaces__action__TrajectoryFileVelocity_Result__Sequence * lhs, const aerobalance_interfaces__action__TrajectoryFileVelocity_Result__Sequence * rhs);

/// Copy an array of action/TrajectoryFileVelocity messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobalance_interfaces
bool
aerobalance_interfaces__action__TrajectoryFileVelocity_Result__Sequence__copy(
  const aerobalance_interfaces__action__TrajectoryFileVelocity_Result__Sequence * input,
  aerobalance_interfaces__action__TrajectoryFileVelocity_Result__Sequence * output);

/// Initialize action/TrajectoryFileVelocity message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback
 * )) before or use
 * aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobalance_interfaces
bool
aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__init(aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback * msg);

/// Finalize action/TrajectoryFileVelocity message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobalance_interfaces
void
aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__fini(aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback * msg);

/// Create action/TrajectoryFileVelocity message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobalance_interfaces
aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback *
aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__create();

/// Destroy action/TrajectoryFileVelocity message.
/**
 * It calls
 * aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobalance_interfaces
void
aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__destroy(aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback * msg);

/// Check for action/TrajectoryFileVelocity message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobalance_interfaces
bool
aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__are_equal(const aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback * lhs, const aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback * rhs);

/// Copy a action/TrajectoryFileVelocity message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobalance_interfaces
bool
aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__copy(
  const aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback * input,
  aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback * output);

/// Initialize array of action/TrajectoryFileVelocity messages.
/**
 * It allocates the memory for the number of elements and calls
 * aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobalance_interfaces
bool
aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__Sequence__init(aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__Sequence * array, size_t size);

/// Finalize array of action/TrajectoryFileVelocity messages.
/**
 * It calls
 * aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobalance_interfaces
void
aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__Sequence__fini(aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__Sequence * array);

/// Create array of action/TrajectoryFileVelocity messages.
/**
 * It allocates the memory for the array and calls
 * aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobalance_interfaces
aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__Sequence *
aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__Sequence__create(size_t size);

/// Destroy array of action/TrajectoryFileVelocity messages.
/**
 * It calls
 * aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobalance_interfaces
void
aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__Sequence__destroy(aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__Sequence * array);

/// Check for action/TrajectoryFileVelocity message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobalance_interfaces
bool
aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__Sequence__are_equal(const aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__Sequence * lhs, const aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__Sequence * rhs);

/// Copy an array of action/TrajectoryFileVelocity messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobalance_interfaces
bool
aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__Sequence__copy(
  const aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__Sequence * input,
  aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__Sequence * output);

/// Initialize action/TrajectoryFileVelocity message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request
 * )) before or use
 * aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobalance_interfaces
bool
aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request__init(aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request * msg);

/// Finalize action/TrajectoryFileVelocity message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobalance_interfaces
void
aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request__fini(aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request * msg);

/// Create action/TrajectoryFileVelocity message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobalance_interfaces
aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request *
aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request__create();

/// Destroy action/TrajectoryFileVelocity message.
/**
 * It calls
 * aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobalance_interfaces
void
aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request__destroy(aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request * msg);

/// Check for action/TrajectoryFileVelocity message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobalance_interfaces
bool
aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request__are_equal(const aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request * lhs, const aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request * rhs);

/// Copy a action/TrajectoryFileVelocity message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobalance_interfaces
bool
aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request__copy(
  const aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request * input,
  aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request * output);

/// Initialize array of action/TrajectoryFileVelocity messages.
/**
 * It allocates the memory for the number of elements and calls
 * aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobalance_interfaces
bool
aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request__Sequence__init(aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/TrajectoryFileVelocity messages.
/**
 * It calls
 * aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobalance_interfaces
void
aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request__Sequence__fini(aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request__Sequence * array);

/// Create array of action/TrajectoryFileVelocity messages.
/**
 * It allocates the memory for the array and calls
 * aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobalance_interfaces
aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request__Sequence *
aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/TrajectoryFileVelocity messages.
/**
 * It calls
 * aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobalance_interfaces
void
aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request__Sequence__destroy(aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request__Sequence * array);

/// Check for action/TrajectoryFileVelocity message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobalance_interfaces
bool
aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request__Sequence__are_equal(const aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request__Sequence * lhs, const aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/TrajectoryFileVelocity messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobalance_interfaces
bool
aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request__Sequence__copy(
  const aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request__Sequence * input,
  aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request__Sequence * output);

/// Initialize action/TrajectoryFileVelocity message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response
 * )) before or use
 * aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobalance_interfaces
bool
aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response__init(aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response * msg);

/// Finalize action/TrajectoryFileVelocity message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobalance_interfaces
void
aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response__fini(aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response * msg);

/// Create action/TrajectoryFileVelocity message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobalance_interfaces
aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response *
aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response__create();

/// Destroy action/TrajectoryFileVelocity message.
/**
 * It calls
 * aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobalance_interfaces
void
aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response__destroy(aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response * msg);

/// Check for action/TrajectoryFileVelocity message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobalance_interfaces
bool
aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response__are_equal(const aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response * lhs, const aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response * rhs);

/// Copy a action/TrajectoryFileVelocity message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobalance_interfaces
bool
aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response__copy(
  const aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response * input,
  aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response * output);

/// Initialize array of action/TrajectoryFileVelocity messages.
/**
 * It allocates the memory for the number of elements and calls
 * aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobalance_interfaces
bool
aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response__Sequence__init(aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/TrajectoryFileVelocity messages.
/**
 * It calls
 * aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobalance_interfaces
void
aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response__Sequence__fini(aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response__Sequence * array);

/// Create array of action/TrajectoryFileVelocity messages.
/**
 * It allocates the memory for the array and calls
 * aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobalance_interfaces
aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response__Sequence *
aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/TrajectoryFileVelocity messages.
/**
 * It calls
 * aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobalance_interfaces
void
aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response__Sequence__destroy(aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response__Sequence * array);

/// Check for action/TrajectoryFileVelocity message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobalance_interfaces
bool
aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response__Sequence__are_equal(const aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response__Sequence * lhs, const aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/TrajectoryFileVelocity messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobalance_interfaces
bool
aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response__Sequence__copy(
  const aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response__Sequence * input,
  aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response__Sequence * output);

/// Initialize action/TrajectoryFileVelocity message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request
 * )) before or use
 * aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobalance_interfaces
bool
aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request__init(aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request * msg);

/// Finalize action/TrajectoryFileVelocity message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobalance_interfaces
void
aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request__fini(aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request * msg);

/// Create action/TrajectoryFileVelocity message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobalance_interfaces
aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request *
aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request__create();

/// Destroy action/TrajectoryFileVelocity message.
/**
 * It calls
 * aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobalance_interfaces
void
aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request__destroy(aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request * msg);

/// Check for action/TrajectoryFileVelocity message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobalance_interfaces
bool
aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request__are_equal(const aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request * lhs, const aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request * rhs);

/// Copy a action/TrajectoryFileVelocity message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobalance_interfaces
bool
aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request__copy(
  const aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request * input,
  aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request * output);

/// Initialize array of action/TrajectoryFileVelocity messages.
/**
 * It allocates the memory for the number of elements and calls
 * aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobalance_interfaces
bool
aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request__Sequence__init(aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/TrajectoryFileVelocity messages.
/**
 * It calls
 * aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobalance_interfaces
void
aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request__Sequence__fini(aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request__Sequence * array);

/// Create array of action/TrajectoryFileVelocity messages.
/**
 * It allocates the memory for the array and calls
 * aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobalance_interfaces
aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request__Sequence *
aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/TrajectoryFileVelocity messages.
/**
 * It calls
 * aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobalance_interfaces
void
aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request__Sequence__destroy(aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request__Sequence * array);

/// Check for action/TrajectoryFileVelocity message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobalance_interfaces
bool
aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request__Sequence__are_equal(const aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request__Sequence * lhs, const aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request__Sequence * rhs);

/// Copy an array of action/TrajectoryFileVelocity messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobalance_interfaces
bool
aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request__Sequence__copy(
  const aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request__Sequence * input,
  aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request__Sequence * output);

/// Initialize action/TrajectoryFileVelocity message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response
 * )) before or use
 * aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobalance_interfaces
bool
aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response__init(aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response * msg);

/// Finalize action/TrajectoryFileVelocity message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobalance_interfaces
void
aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response__fini(aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response * msg);

/// Create action/TrajectoryFileVelocity message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobalance_interfaces
aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response *
aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response__create();

/// Destroy action/TrajectoryFileVelocity message.
/**
 * It calls
 * aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobalance_interfaces
void
aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response__destroy(aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response * msg);

/// Check for action/TrajectoryFileVelocity message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobalance_interfaces
bool
aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response__are_equal(const aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response * lhs, const aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response * rhs);

/// Copy a action/TrajectoryFileVelocity message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobalance_interfaces
bool
aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response__copy(
  const aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response * input,
  aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response * output);

/// Initialize array of action/TrajectoryFileVelocity messages.
/**
 * It allocates the memory for the number of elements and calls
 * aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobalance_interfaces
bool
aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response__Sequence__init(aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/TrajectoryFileVelocity messages.
/**
 * It calls
 * aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobalance_interfaces
void
aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response__Sequence__fini(aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response__Sequence * array);

/// Create array of action/TrajectoryFileVelocity messages.
/**
 * It allocates the memory for the array and calls
 * aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobalance_interfaces
aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response__Sequence *
aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/TrajectoryFileVelocity messages.
/**
 * It calls
 * aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobalance_interfaces
void
aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response__Sequence__destroy(aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response__Sequence * array);

/// Check for action/TrajectoryFileVelocity message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobalance_interfaces
bool
aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response__Sequence__are_equal(const aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response__Sequence * lhs, const aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response__Sequence * rhs);

/// Copy an array of action/TrajectoryFileVelocity messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobalance_interfaces
bool
aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response__Sequence__copy(
  const aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response__Sequence * input,
  aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response__Sequence * output);

/// Initialize action/TrajectoryFileVelocity message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage
 * )) before or use
 * aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobalance_interfaces
bool
aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage__init(aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage * msg);

/// Finalize action/TrajectoryFileVelocity message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobalance_interfaces
void
aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage__fini(aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage * msg);

/// Create action/TrajectoryFileVelocity message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobalance_interfaces
aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage *
aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage__create();

/// Destroy action/TrajectoryFileVelocity message.
/**
 * It calls
 * aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobalance_interfaces
void
aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage__destroy(aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage * msg);

/// Check for action/TrajectoryFileVelocity message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobalance_interfaces
bool
aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage__are_equal(const aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage * lhs, const aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage * rhs);

/// Copy a action/TrajectoryFileVelocity message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobalance_interfaces
bool
aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage__copy(
  const aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage * input,
  aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage * output);

/// Initialize array of action/TrajectoryFileVelocity messages.
/**
 * It allocates the memory for the number of elements and calls
 * aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobalance_interfaces
bool
aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage__Sequence__init(aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/TrajectoryFileVelocity messages.
/**
 * It calls
 * aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobalance_interfaces
void
aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage__Sequence__fini(aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage__Sequence * array);

/// Create array of action/TrajectoryFileVelocity messages.
/**
 * It allocates the memory for the array and calls
 * aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobalance_interfaces
aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage__Sequence *
aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/TrajectoryFileVelocity messages.
/**
 * It calls
 * aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobalance_interfaces
void
aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage__Sequence__destroy(aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage__Sequence * array);

/// Check for action/TrajectoryFileVelocity message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobalance_interfaces
bool
aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage__Sequence__are_equal(const aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage__Sequence * lhs, const aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/TrajectoryFileVelocity messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobalance_interfaces
bool
aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage__Sequence__copy(
  const aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage__Sequence * input,
  aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // AEROBALANCE_INTERFACES__ACTION__DETAIL__TRAJECTORY_FILE_VELOCITY__FUNCTIONS_H_
