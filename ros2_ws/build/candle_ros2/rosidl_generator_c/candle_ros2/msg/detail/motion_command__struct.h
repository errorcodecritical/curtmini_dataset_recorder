// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from candle_ros2:msg/MotionCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "candle_ros2/msg/motion_command.h"


#ifndef CANDLE_ROS2__MSG__DETAIL__MOTION_COMMAND__STRUCT_H_
#define CANDLE_ROS2__MSG__DETAIL__MOTION_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'drive_ids'
// Member 'target_position'
// Member 'target_velocity'
// Member 'target_torque'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/MotionCommand in the package candle_ros2.
typedef struct candle_ros2__msg__MotionCommand
{
  rosidl_runtime_c__uint32__Sequence drive_ids;
  rosidl_runtime_c__float__Sequence target_position;
  rosidl_runtime_c__float__Sequence target_velocity;
  rosidl_runtime_c__float__Sequence target_torque;
} candle_ros2__msg__MotionCommand;

// Struct for a sequence of candle_ros2__msg__MotionCommand.
typedef struct candle_ros2__msg__MotionCommand__Sequence
{
  candle_ros2__msg__MotionCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} candle_ros2__msg__MotionCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CANDLE_ROS2__MSG__DETAIL__MOTION_COMMAND__STRUCT_H_
