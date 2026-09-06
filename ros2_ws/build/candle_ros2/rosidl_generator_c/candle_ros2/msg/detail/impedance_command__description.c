// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from candle_ros2:msg/ImpedanceCommand.idl
// generated code does not contain a copyright notice

#include "candle_ros2/msg/detail/impedance_command__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_candle_ros2
const rosidl_type_hash_t *
candle_ros2__msg__ImpedanceCommand__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb8, 0xf5, 0xa6, 0x30, 0xd3, 0x14, 0x5c, 0x8b,
      0x21, 0x14, 0x91, 0xef, 0xb8, 0x28, 0x3a, 0x50,
      0xb4, 0x97, 0x0f, 0xf5, 0x01, 0x2a, 0xdc, 0x45,
      0x1b, 0xbc, 0xd5, 0x28, 0xbf, 0x35, 0x92, 0xc5,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char candle_ros2__msg__ImpedanceCommand__TYPE_NAME[] = "candle_ros2/msg/ImpedanceCommand";

// Define type names, field names, and default values
static char candle_ros2__msg__ImpedanceCommand__FIELD_NAME__drive_ids[] = "drive_ids";
static char candle_ros2__msg__ImpedanceCommand__FIELD_NAME__kp[] = "kp";
static char candle_ros2__msg__ImpedanceCommand__FIELD_NAME__kd[] = "kd";
static char candle_ros2__msg__ImpedanceCommand__FIELD_NAME__max_output[] = "max_output";

static rosidl_runtime_c__type_description__Field candle_ros2__msg__ImpedanceCommand__FIELDS[] = {
  {
    {candle_ros2__msg__ImpedanceCommand__FIELD_NAME__drive_ids, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {candle_ros2__msg__ImpedanceCommand__FIELD_NAME__kp, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {candle_ros2__msg__ImpedanceCommand__FIELD_NAME__kd, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {candle_ros2__msg__ImpedanceCommand__FIELD_NAME__max_output, 10, 10},
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
candle_ros2__msg__ImpedanceCommand__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {candle_ros2__msg__ImpedanceCommand__TYPE_NAME, 32, 32},
      {candle_ros2__msg__ImpedanceCommand__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint16[] drive_ids\n"
  "float32[] kp\n"
  "float32[] kd\n"
  "float32[] max_output";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
candle_ros2__msg__ImpedanceCommand__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {candle_ros2__msg__ImpedanceCommand__TYPE_NAME, 32, 32},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 66, 66},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
candle_ros2__msg__ImpedanceCommand__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *candle_ros2__msg__ImpedanceCommand__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
