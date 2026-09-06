// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from candle_ros2:msg/VelocityPidCommand.idl
// generated code does not contain a copyright notice

#include "candle_ros2/msg/detail/velocity_pid_command__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_candle_ros2
const rosidl_type_hash_t *
candle_ros2__msg__VelocityPidCommand__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x2c, 0xd3, 0x24, 0x26, 0x05, 0x81, 0xb3, 0xfa,
      0xd6, 0xc4, 0xf4, 0x91, 0xed, 0x6b, 0x98, 0x68,
      0xb0, 0xf9, 0x69, 0x3b, 0x89, 0x34, 0xf1, 0xaa,
      0xd6, 0xdf, 0x37, 0xa8, 0x1b, 0x3e, 0x30, 0xc7,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "candle_ros2/msg/detail/pid__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t candle_ros2__msg__Pid__EXPECTED_HASH = {1, {
    0x8e, 0x0c, 0x55, 0xf1, 0x6a, 0xb8, 0xab, 0x1d,
    0x42, 0xfe, 0xb5, 0x01, 0xf0, 0xa1, 0xfd, 0xaf,
    0x38, 0x94, 0x73, 0x08, 0x81, 0xa8, 0xa1, 0xfe,
    0x9f, 0x19, 0x8d, 0xbc, 0xb2, 0x52, 0x9e, 0x31,
  }};
#endif

static char candle_ros2__msg__VelocityPidCommand__TYPE_NAME[] = "candle_ros2/msg/VelocityPidCommand";
static char candle_ros2__msg__Pid__TYPE_NAME[] = "candle_ros2/msg/Pid";

// Define type names, field names, and default values
static char candle_ros2__msg__VelocityPidCommand__FIELD_NAME__drive_ids[] = "drive_ids";
static char candle_ros2__msg__VelocityPidCommand__FIELD_NAME__velocity_pid[] = "velocity_pid";

static rosidl_runtime_c__type_description__Field candle_ros2__msg__VelocityPidCommand__FIELDS[] = {
  {
    {candle_ros2__msg__VelocityPidCommand__FIELD_NAME__drive_ids, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {candle_ros2__msg__VelocityPidCommand__FIELD_NAME__velocity_pid, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {candle_ros2__msg__Pid__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription candle_ros2__msg__VelocityPidCommand__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {candle_ros2__msg__Pid__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
candle_ros2__msg__VelocityPidCommand__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {candle_ros2__msg__VelocityPidCommand__TYPE_NAME, 34, 34},
      {candle_ros2__msg__VelocityPidCommand__FIELDS, 2, 2},
    },
    {candle_ros2__msg__VelocityPidCommand__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&candle_ros2__msg__Pid__EXPECTED_HASH, candle_ros2__msg__Pid__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = candle_ros2__msg__Pid__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint16[] drive_ids\n"
  "candle_ros2/Pid[] velocity_pid";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
candle_ros2__msg__VelocityPidCommand__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {candle_ros2__msg__VelocityPidCommand__TYPE_NAME, 34, 34},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 50, 50},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
candle_ros2__msg__VelocityPidCommand__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *candle_ros2__msg__VelocityPidCommand__get_individual_type_description_source(NULL),
    sources[1] = *candle_ros2__msg__Pid__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
