// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from aerobalance_interfaces:action/TrajectoryFileVelocity.idl
// generated code does not contain a copyright notice
#include "aerobalance_interfaces/action/detail/trajectory_file_velocity__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `filepath`
#include "rosidl_runtime_c/string_functions.h"

bool
aerobalance_interfaces__action__TrajectoryFileVelocity_Goal__init(aerobalance_interfaces__action__TrajectoryFileVelocity_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // filepath
  if (!rosidl_runtime_c__String__init(&msg->filepath)) {
    aerobalance_interfaces__action__TrajectoryFileVelocity_Goal__fini(msg);
    return false;
  }
  return true;
}

void
aerobalance_interfaces__action__TrajectoryFileVelocity_Goal__fini(aerobalance_interfaces__action__TrajectoryFileVelocity_Goal * msg)
{
  if (!msg) {
    return;
  }
  // filepath
  rosidl_runtime_c__String__fini(&msg->filepath);
}

bool
aerobalance_interfaces__action__TrajectoryFileVelocity_Goal__are_equal(const aerobalance_interfaces__action__TrajectoryFileVelocity_Goal * lhs, const aerobalance_interfaces__action__TrajectoryFileVelocity_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // filepath
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->filepath), &(rhs->filepath)))
  {
    return false;
  }
  return true;
}

bool
aerobalance_interfaces__action__TrajectoryFileVelocity_Goal__copy(
  const aerobalance_interfaces__action__TrajectoryFileVelocity_Goal * input,
  aerobalance_interfaces__action__TrajectoryFileVelocity_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // filepath
  if (!rosidl_runtime_c__String__copy(
      &(input->filepath), &(output->filepath)))
  {
    return false;
  }
  return true;
}

aerobalance_interfaces__action__TrajectoryFileVelocity_Goal *
aerobalance_interfaces__action__TrajectoryFileVelocity_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aerobalance_interfaces__action__TrajectoryFileVelocity_Goal * msg = (aerobalance_interfaces__action__TrajectoryFileVelocity_Goal *)allocator.allocate(sizeof(aerobalance_interfaces__action__TrajectoryFileVelocity_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aerobalance_interfaces__action__TrajectoryFileVelocity_Goal));
  bool success = aerobalance_interfaces__action__TrajectoryFileVelocity_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
aerobalance_interfaces__action__TrajectoryFileVelocity_Goal__destroy(aerobalance_interfaces__action__TrajectoryFileVelocity_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aerobalance_interfaces__action__TrajectoryFileVelocity_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
aerobalance_interfaces__action__TrajectoryFileVelocity_Goal__Sequence__init(aerobalance_interfaces__action__TrajectoryFileVelocity_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aerobalance_interfaces__action__TrajectoryFileVelocity_Goal * data = NULL;

  if (size) {
    data = (aerobalance_interfaces__action__TrajectoryFileVelocity_Goal *)allocator.zero_allocate(size, sizeof(aerobalance_interfaces__action__TrajectoryFileVelocity_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = aerobalance_interfaces__action__TrajectoryFileVelocity_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        aerobalance_interfaces__action__TrajectoryFileVelocity_Goal__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
aerobalance_interfaces__action__TrajectoryFileVelocity_Goal__Sequence__fini(aerobalance_interfaces__action__TrajectoryFileVelocity_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      aerobalance_interfaces__action__TrajectoryFileVelocity_Goal__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

aerobalance_interfaces__action__TrajectoryFileVelocity_Goal__Sequence *
aerobalance_interfaces__action__TrajectoryFileVelocity_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aerobalance_interfaces__action__TrajectoryFileVelocity_Goal__Sequence * array = (aerobalance_interfaces__action__TrajectoryFileVelocity_Goal__Sequence *)allocator.allocate(sizeof(aerobalance_interfaces__action__TrajectoryFileVelocity_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = aerobalance_interfaces__action__TrajectoryFileVelocity_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
aerobalance_interfaces__action__TrajectoryFileVelocity_Goal__Sequence__destroy(aerobalance_interfaces__action__TrajectoryFileVelocity_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aerobalance_interfaces__action__TrajectoryFileVelocity_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
aerobalance_interfaces__action__TrajectoryFileVelocity_Goal__Sequence__are_equal(const aerobalance_interfaces__action__TrajectoryFileVelocity_Goal__Sequence * lhs, const aerobalance_interfaces__action__TrajectoryFileVelocity_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aerobalance_interfaces__action__TrajectoryFileVelocity_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
aerobalance_interfaces__action__TrajectoryFileVelocity_Goal__Sequence__copy(
  const aerobalance_interfaces__action__TrajectoryFileVelocity_Goal__Sequence * input,
  aerobalance_interfaces__action__TrajectoryFileVelocity_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(aerobalance_interfaces__action__TrajectoryFileVelocity_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aerobalance_interfaces__action__TrajectoryFileVelocity_Goal * data =
      (aerobalance_interfaces__action__TrajectoryFileVelocity_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aerobalance_interfaces__action__TrajectoryFileVelocity_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          aerobalance_interfaces__action__TrajectoryFileVelocity_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aerobalance_interfaces__action__TrajectoryFileVelocity_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
aerobalance_interfaces__action__TrajectoryFileVelocity_Result__init(aerobalance_interfaces__action__TrajectoryFileVelocity_Result * msg)
{
  if (!msg) {
    return false;
  }
  // error_code
  return true;
}

void
aerobalance_interfaces__action__TrajectoryFileVelocity_Result__fini(aerobalance_interfaces__action__TrajectoryFileVelocity_Result * msg)
{
  if (!msg) {
    return;
  }
  // error_code
}

bool
aerobalance_interfaces__action__TrajectoryFileVelocity_Result__are_equal(const aerobalance_interfaces__action__TrajectoryFileVelocity_Result * lhs, const aerobalance_interfaces__action__TrajectoryFileVelocity_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // error_code
  if (lhs->error_code != rhs->error_code) {
    return false;
  }
  return true;
}

bool
aerobalance_interfaces__action__TrajectoryFileVelocity_Result__copy(
  const aerobalance_interfaces__action__TrajectoryFileVelocity_Result * input,
  aerobalance_interfaces__action__TrajectoryFileVelocity_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // error_code
  output->error_code = input->error_code;
  return true;
}

aerobalance_interfaces__action__TrajectoryFileVelocity_Result *
aerobalance_interfaces__action__TrajectoryFileVelocity_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aerobalance_interfaces__action__TrajectoryFileVelocity_Result * msg = (aerobalance_interfaces__action__TrajectoryFileVelocity_Result *)allocator.allocate(sizeof(aerobalance_interfaces__action__TrajectoryFileVelocity_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aerobalance_interfaces__action__TrajectoryFileVelocity_Result));
  bool success = aerobalance_interfaces__action__TrajectoryFileVelocity_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
aerobalance_interfaces__action__TrajectoryFileVelocity_Result__destroy(aerobalance_interfaces__action__TrajectoryFileVelocity_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aerobalance_interfaces__action__TrajectoryFileVelocity_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
aerobalance_interfaces__action__TrajectoryFileVelocity_Result__Sequence__init(aerobalance_interfaces__action__TrajectoryFileVelocity_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aerobalance_interfaces__action__TrajectoryFileVelocity_Result * data = NULL;

  if (size) {
    data = (aerobalance_interfaces__action__TrajectoryFileVelocity_Result *)allocator.zero_allocate(size, sizeof(aerobalance_interfaces__action__TrajectoryFileVelocity_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = aerobalance_interfaces__action__TrajectoryFileVelocity_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        aerobalance_interfaces__action__TrajectoryFileVelocity_Result__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
aerobalance_interfaces__action__TrajectoryFileVelocity_Result__Sequence__fini(aerobalance_interfaces__action__TrajectoryFileVelocity_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      aerobalance_interfaces__action__TrajectoryFileVelocity_Result__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

aerobalance_interfaces__action__TrajectoryFileVelocity_Result__Sequence *
aerobalance_interfaces__action__TrajectoryFileVelocity_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aerobalance_interfaces__action__TrajectoryFileVelocity_Result__Sequence * array = (aerobalance_interfaces__action__TrajectoryFileVelocity_Result__Sequence *)allocator.allocate(sizeof(aerobalance_interfaces__action__TrajectoryFileVelocity_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = aerobalance_interfaces__action__TrajectoryFileVelocity_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
aerobalance_interfaces__action__TrajectoryFileVelocity_Result__Sequence__destroy(aerobalance_interfaces__action__TrajectoryFileVelocity_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aerobalance_interfaces__action__TrajectoryFileVelocity_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
aerobalance_interfaces__action__TrajectoryFileVelocity_Result__Sequence__are_equal(const aerobalance_interfaces__action__TrajectoryFileVelocity_Result__Sequence * lhs, const aerobalance_interfaces__action__TrajectoryFileVelocity_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aerobalance_interfaces__action__TrajectoryFileVelocity_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
aerobalance_interfaces__action__TrajectoryFileVelocity_Result__Sequence__copy(
  const aerobalance_interfaces__action__TrajectoryFileVelocity_Result__Sequence * input,
  aerobalance_interfaces__action__TrajectoryFileVelocity_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(aerobalance_interfaces__action__TrajectoryFileVelocity_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aerobalance_interfaces__action__TrajectoryFileVelocity_Result * data =
      (aerobalance_interfaces__action__TrajectoryFileVelocity_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aerobalance_interfaces__action__TrajectoryFileVelocity_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          aerobalance_interfaces__action__TrajectoryFileVelocity_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aerobalance_interfaces__action__TrajectoryFileVelocity_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `joint_names`
// already included above
// #include "rosidl_runtime_c/string_functions.h"
// Member `actual`
// Member `desired`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__init(aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__fini(msg);
    return false;
  }
  // joint_names
  if (!rosidl_runtime_c__String__Sequence__init(&msg->joint_names, 0)) {
    aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__fini(msg);
    return false;
  }
  // actual
  if (!rosidl_runtime_c__double__Sequence__init(&msg->actual, 0)) {
    aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__fini(msg);
    return false;
  }
  // desired
  if (!rosidl_runtime_c__double__Sequence__init(&msg->desired, 0)) {
    aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__fini(aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // joint_names
  rosidl_runtime_c__String__Sequence__fini(&msg->joint_names);
  // actual
  rosidl_runtime_c__double__Sequence__fini(&msg->actual);
  // desired
  rosidl_runtime_c__double__Sequence__fini(&msg->desired);
}

bool
aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__are_equal(const aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback * lhs, const aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // joint_names
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->joint_names), &(rhs->joint_names)))
  {
    return false;
  }
  // actual
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->actual), &(rhs->actual)))
  {
    return false;
  }
  // desired
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->desired), &(rhs->desired)))
  {
    return false;
  }
  return true;
}

bool
aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__copy(
  const aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback * input,
  aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // joint_names
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->joint_names), &(output->joint_names)))
  {
    return false;
  }
  // actual
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->actual), &(output->actual)))
  {
    return false;
  }
  // desired
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->desired), &(output->desired)))
  {
    return false;
  }
  return true;
}

aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback *
aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback * msg = (aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback *)allocator.allocate(sizeof(aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback));
  bool success = aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__destroy(aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__Sequence__init(aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback * data = NULL;

  if (size) {
    data = (aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback *)allocator.zero_allocate(size, sizeof(aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__Sequence__fini(aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__Sequence *
aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__Sequence * array = (aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__Sequence *)allocator.allocate(sizeof(aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__Sequence__destroy(aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__Sequence__are_equal(const aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__Sequence * lhs, const aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__Sequence__copy(
  const aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__Sequence * input,
  aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback * data =
      (aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "aerobalance_interfaces/action/detail/trajectory_file_velocity__functions.h"

bool
aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request__init(aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!aerobalance_interfaces__action__TrajectoryFileVelocity_Goal__init(&msg->goal)) {
    aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request__fini(aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  aerobalance_interfaces__action__TrajectoryFileVelocity_Goal__fini(&msg->goal);
}

bool
aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request__are_equal(const aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request * lhs, const aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!aerobalance_interfaces__action__TrajectoryFileVelocity_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request__copy(
  const aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request * input,
  aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!aerobalance_interfaces__action__TrajectoryFileVelocity_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request *
aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request * msg = (aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request *)allocator.allocate(sizeof(aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request));
  bool success = aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request__destroy(aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request__Sequence__init(aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request * data = NULL;

  if (size) {
    data = (aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request *)allocator.zero_allocate(size, sizeof(aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request__Sequence__fini(aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request__Sequence *
aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request__Sequence * array = (aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request__Sequence *)allocator.allocate(sizeof(aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request__Sequence__destroy(aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request__Sequence__are_equal(const aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request__Sequence * lhs, const aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request__Sequence__copy(
  const aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request__Sequence * input,
  aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request * data =
      (aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response__init(aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response__fini(aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response__are_equal(const aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response * lhs, const aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response__copy(
  const aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response * input,
  aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response *
aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response * msg = (aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response *)allocator.allocate(sizeof(aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response));
  bool success = aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response__destroy(aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response__Sequence__init(aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response * data = NULL;

  if (size) {
    data = (aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response *)allocator.zero_allocate(size, sizeof(aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response__Sequence__fini(aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response__Sequence *
aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response__Sequence * array = (aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response__Sequence *)allocator.allocate(sizeof(aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response__Sequence__destroy(aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response__Sequence__are_equal(const aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response__Sequence * lhs, const aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response__Sequence__copy(
  const aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response__Sequence * input,
  aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response * data =
      (aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request__init(aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request__fini(aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request__are_equal(const aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request * lhs, const aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request__copy(
  const aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request * input,
  aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request *
aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request * msg = (aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request *)allocator.allocate(sizeof(aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request));
  bool success = aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request__destroy(aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request__Sequence__init(aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request * data = NULL;

  if (size) {
    data = (aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request *)allocator.zero_allocate(size, sizeof(aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request__Sequence__fini(aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request__Sequence *
aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request__Sequence * array = (aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request__Sequence *)allocator.allocate(sizeof(aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request__Sequence__destroy(aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request__Sequence__are_equal(const aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request__Sequence * lhs, const aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request__Sequence__copy(
  const aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request__Sequence * input,
  aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request * data =
      (aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "aerobalance_interfaces/action/detail/trajectory_file_velocity__functions.h"

bool
aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response__init(aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!aerobalance_interfaces__action__TrajectoryFileVelocity_Result__init(&msg->result)) {
    aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response__fini(aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  aerobalance_interfaces__action__TrajectoryFileVelocity_Result__fini(&msg->result);
}

bool
aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response__are_equal(const aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response * lhs, const aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!aerobalance_interfaces__action__TrajectoryFileVelocity_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response__copy(
  const aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response * input,
  aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!aerobalance_interfaces__action__TrajectoryFileVelocity_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response *
aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response * msg = (aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response *)allocator.allocate(sizeof(aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response));
  bool success = aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response__destroy(aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response__Sequence__init(aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response * data = NULL;

  if (size) {
    data = (aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response *)allocator.zero_allocate(size, sizeof(aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response__Sequence__fini(aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response__Sequence *
aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response__Sequence * array = (aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response__Sequence *)allocator.allocate(sizeof(aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response__Sequence__destroy(aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response__Sequence__are_equal(const aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response__Sequence * lhs, const aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response__Sequence__copy(
  const aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response__Sequence * input,
  aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response * data =
      (aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "aerobalance_interfaces/action/detail/trajectory_file_velocity__functions.h"

bool
aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage__init(aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__init(&msg->feedback)) {
    aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage__fini(aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__fini(&msg->feedback);
}

bool
aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage__are_equal(const aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage * lhs, const aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage__copy(
  const aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage * input,
  aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage *
aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage * msg = (aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage *)allocator.allocate(sizeof(aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage));
  bool success = aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage__destroy(aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage__Sequence__init(aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage * data = NULL;

  if (size) {
    data = (aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage *)allocator.zero_allocate(size, sizeof(aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage__Sequence__fini(aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage__Sequence *
aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage__Sequence * array = (aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage__Sequence *)allocator.allocate(sizeof(aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage__Sequence__destroy(aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage__Sequence__are_equal(const aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage__Sequence * lhs, const aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage__Sequence__copy(
  const aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage__Sequence * input,
  aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage * data =
      (aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
