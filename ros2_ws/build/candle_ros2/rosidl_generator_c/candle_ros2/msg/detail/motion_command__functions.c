// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from candle_ros2:msg/MotionCommand.idl
// generated code does not contain a copyright notice
#include "candle_ros2/msg/detail/motion_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `drive_ids`
// Member `target_position`
// Member `target_velocity`
// Member `target_torque`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
candle_ros2__msg__MotionCommand__init(candle_ros2__msg__MotionCommand * msg)
{
  if (!msg) {
    return false;
  }
  // drive_ids
  if (!rosidl_runtime_c__uint32__Sequence__init(&msg->drive_ids, 0)) {
    candle_ros2__msg__MotionCommand__fini(msg);
    return false;
  }
  // target_position
  if (!rosidl_runtime_c__float__Sequence__init(&msg->target_position, 0)) {
    candle_ros2__msg__MotionCommand__fini(msg);
    return false;
  }
  // target_velocity
  if (!rosidl_runtime_c__float__Sequence__init(&msg->target_velocity, 0)) {
    candle_ros2__msg__MotionCommand__fini(msg);
    return false;
  }
  // target_torque
  if (!rosidl_runtime_c__float__Sequence__init(&msg->target_torque, 0)) {
    candle_ros2__msg__MotionCommand__fini(msg);
    return false;
  }
  return true;
}

void
candle_ros2__msg__MotionCommand__fini(candle_ros2__msg__MotionCommand * msg)
{
  if (!msg) {
    return;
  }
  // drive_ids
  rosidl_runtime_c__uint32__Sequence__fini(&msg->drive_ids);
  // target_position
  rosidl_runtime_c__float__Sequence__fini(&msg->target_position);
  // target_velocity
  rosidl_runtime_c__float__Sequence__fini(&msg->target_velocity);
  // target_torque
  rosidl_runtime_c__float__Sequence__fini(&msg->target_torque);
}

bool
candle_ros2__msg__MotionCommand__are_equal(const candle_ros2__msg__MotionCommand * lhs, const candle_ros2__msg__MotionCommand * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // drive_ids
  if (!rosidl_runtime_c__uint32__Sequence__are_equal(
      &(lhs->drive_ids), &(rhs->drive_ids)))
  {
    return false;
  }
  // target_position
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->target_position), &(rhs->target_position)))
  {
    return false;
  }
  // target_velocity
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->target_velocity), &(rhs->target_velocity)))
  {
    return false;
  }
  // target_torque
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->target_torque), &(rhs->target_torque)))
  {
    return false;
  }
  return true;
}

bool
candle_ros2__msg__MotionCommand__copy(
  const candle_ros2__msg__MotionCommand * input,
  candle_ros2__msg__MotionCommand * output)
{
  if (!input || !output) {
    return false;
  }
  // drive_ids
  if (!rosidl_runtime_c__uint32__Sequence__copy(
      &(input->drive_ids), &(output->drive_ids)))
  {
    return false;
  }
  // target_position
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->target_position), &(output->target_position)))
  {
    return false;
  }
  // target_velocity
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->target_velocity), &(output->target_velocity)))
  {
    return false;
  }
  // target_torque
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->target_torque), &(output->target_torque)))
  {
    return false;
  }
  return true;
}

candle_ros2__msg__MotionCommand *
candle_ros2__msg__MotionCommand__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  candle_ros2__msg__MotionCommand * msg = (candle_ros2__msg__MotionCommand *)allocator.allocate(sizeof(candle_ros2__msg__MotionCommand), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(candle_ros2__msg__MotionCommand));
  bool success = candle_ros2__msg__MotionCommand__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
candle_ros2__msg__MotionCommand__destroy(candle_ros2__msg__MotionCommand * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    candle_ros2__msg__MotionCommand__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
candle_ros2__msg__MotionCommand__Sequence__init(candle_ros2__msg__MotionCommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  candle_ros2__msg__MotionCommand * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(candle_ros2__msg__MotionCommand)) {
      return false;
    }
    data = (candle_ros2__msg__MotionCommand *)allocator.zero_allocate(size, sizeof(candle_ros2__msg__MotionCommand), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = candle_ros2__msg__MotionCommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        candle_ros2__msg__MotionCommand__fini(&data[i - 1]);
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
candle_ros2__msg__MotionCommand__Sequence__fini(candle_ros2__msg__MotionCommand__Sequence * array)
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
      candle_ros2__msg__MotionCommand__fini(&array->data[i]);
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

candle_ros2__msg__MotionCommand__Sequence *
candle_ros2__msg__MotionCommand__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  candle_ros2__msg__MotionCommand__Sequence * array = (candle_ros2__msg__MotionCommand__Sequence *)allocator.allocate(sizeof(candle_ros2__msg__MotionCommand__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = candle_ros2__msg__MotionCommand__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
candle_ros2__msg__MotionCommand__Sequence__destroy(candle_ros2__msg__MotionCommand__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    candle_ros2__msg__MotionCommand__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
candle_ros2__msg__MotionCommand__Sequence__are_equal(const candle_ros2__msg__MotionCommand__Sequence * lhs, const candle_ros2__msg__MotionCommand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!candle_ros2__msg__MotionCommand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
candle_ros2__msg__MotionCommand__Sequence__copy(
  const candle_ros2__msg__MotionCommand__Sequence * input,
  candle_ros2__msg__MotionCommand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(candle_ros2__msg__MotionCommand)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(candle_ros2__msg__MotionCommand);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    candle_ros2__msg__MotionCommand * data =
      (candle_ros2__msg__MotionCommand *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!candle_ros2__msg__MotionCommand__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          candle_ros2__msg__MotionCommand__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!candle_ros2__msg__MotionCommand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
