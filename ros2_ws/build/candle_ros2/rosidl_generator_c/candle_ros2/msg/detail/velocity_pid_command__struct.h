// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from candle_ros2:msg/VelocityPidCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "candle_ros2/msg/velocity_pid_command.h"


#ifndef CANDLE_ROS2__MSG__DETAIL__VELOCITY_PID_COMMAND__STRUCT_H_
#define CANDLE_ROS2__MSG__DETAIL__VELOCITY_PID_COMMAND__STRUCT_H_

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
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'velocity_pid'
#include "candle_ros2/msg/detail/pid__struct.h"

/// Struct defined in msg/VelocityPidCommand in the package candle_ros2.
typedef struct candle_ros2__msg__VelocityPidCommand
{
  rosidl_runtime_c__uint16__Sequence drive_ids;
  candle_ros2__msg__Pid__Sequence velocity_pid;
} candle_ros2__msg__VelocityPidCommand;

// Struct for a sequence of candle_ros2__msg__VelocityPidCommand.
typedef struct candle_ros2__msg__VelocityPidCommand__Sequence
{
  candle_ros2__msg__VelocityPidCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} candle_ros2__msg__VelocityPidCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CANDLE_ROS2__MSG__DETAIL__VELOCITY_PID_COMMAND__STRUCT_H_
