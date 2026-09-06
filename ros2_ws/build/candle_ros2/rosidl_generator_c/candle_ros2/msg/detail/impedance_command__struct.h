// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from candle_ros2:msg/ImpedanceCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "candle_ros2/msg/impedance_command.h"


#ifndef CANDLE_ROS2__MSG__DETAIL__IMPEDANCE_COMMAND__STRUCT_H_
#define CANDLE_ROS2__MSG__DETAIL__IMPEDANCE_COMMAND__STRUCT_H_

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
// Member 'kp'
// Member 'kd'
// Member 'max_output'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/ImpedanceCommand in the package candle_ros2.
typedef struct candle_ros2__msg__ImpedanceCommand
{
  rosidl_runtime_c__uint16__Sequence drive_ids;
  rosidl_runtime_c__float__Sequence kp;
  rosidl_runtime_c__float__Sequence kd;
  rosidl_runtime_c__float__Sequence max_output;
} candle_ros2__msg__ImpedanceCommand;

// Struct for a sequence of candle_ros2__msg__ImpedanceCommand.
typedef struct candle_ros2__msg__ImpedanceCommand__Sequence
{
  candle_ros2__msg__ImpedanceCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} candle_ros2__msg__ImpedanceCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CANDLE_ROS2__MSG__DETAIL__IMPEDANCE_COMMAND__STRUCT_H_
