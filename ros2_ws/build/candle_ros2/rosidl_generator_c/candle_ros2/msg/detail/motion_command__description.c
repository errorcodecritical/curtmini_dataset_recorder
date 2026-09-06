// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from candle_ros2:msg/MotionCommand.idl
// generated code does not contain a copyright notice

#include "candle_ros2/msg/detail/motion_command__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_candle_ros2
const rosidl_type_hash_t *
candle_ros2__msg__MotionCommand__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf1, 0x58, 0xc0, 0xae, 0x91, 0xc3, 0x15, 0xf5,
      0x22, 0xfb, 0xe3, 0xc8, 0xfd, 0x3b, 0x3a, 0x77,
      0xe4, 0xfd, 0xe0, 0xf7, 0xa0, 0x5c, 0x2d, 0x30,
      0x3a, 0xe1, 0x65, 0xc4, 0xa0, 0xed, 0xf8, 0xbd,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char candle_ros2__msg__MotionCommand__TYPE_NAME[] = "candle_ros2/msg/MotionCommand";

// Define type names, field names, and default values
static char candle_ros2__msg__MotionCommand__FIELD_NAME__drive_ids[] = "drive_ids";
static char candle_ros2__msg__MotionCommand__FIELD_NAME__target_position[] = "target_position";
static char candle_ros2__msg__MotionCommand__FIELD_NAME__target_velocity[] = "target_velocity";
static char candle_ros2__msg__MotionCommand__FIELD_NAME__target_torque[] = "target_torque";

static rosidl_runtime_c__type_description__Field candle_ros2__msg__MotionCommand__FIELDS[] = {
  {
    {candle_ros2__msg__MotionCommand__FIELD_NAME__drive_ids, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {candle_ros2__msg__MotionCommand__FIELD_NAME__target_position, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {candle_ros2__msg__MotionCommand__FIELD_NAME__target_velocity, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {candle_ros2__msg__MotionCommand__FIELD_NAME__target_torque, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
candle_ros2__msg__MotionCommand__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {candle_ros2__msg__MotionCommand__TYPE_NAME, 29, 29},
      {candle_ros2__msg__MotionCommand__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint32[] drive_ids\n"
  "float32[] target_position\n"
  "float32[] target_velocity\n"
  "float32[] target_torque";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
candle_ros2__msg__MotionCommand__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {candle_ros2__msg__MotionCommand__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 95, 95},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
candle_ros2__msg__MotionCommand__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *candle_ros2__msg__MotionCommand__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
