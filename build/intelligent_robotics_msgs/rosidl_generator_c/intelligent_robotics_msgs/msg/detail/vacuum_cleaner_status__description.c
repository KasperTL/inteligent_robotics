// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from intelligent_robotics_msgs:msg/VacuumCleanerStatus.idl
// generated code does not contain a copyright notice

#include "intelligent_robotics_msgs/msg/detail/vacuum_cleaner_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_intelligent_robotics_msgs
const rosidl_type_hash_t *
intelligent_robotics_msgs__msg__VacuumCleanerStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x49, 0x5e, 0xe3, 0x58, 0xa9, 0xa3, 0x37, 0x7e,
      0x7d, 0x3a, 0x21, 0x79, 0x93, 0xcf, 0xc5, 0x59,
      0x4f, 0x45, 0xe6, 0xf8, 0x76, 0x0f, 0xd2, 0xa6,
      0x27, 0xc2, 0x4d, 0xd2, 0x42, 0x6b, 0x5b, 0x67,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char intelligent_robotics_msgs__msg__VacuumCleanerStatus__TYPE_NAME[] = "intelligent_robotics_msgs/msg/VacuumCleanerStatus";

// Define type names, field names, and default values
static char intelligent_robotics_msgs__msg__VacuumCleanerStatus__FIELD_NAME__room_id[] = "room_id";
static char intelligent_robotics_msgs__msg__VacuumCleanerStatus__FIELD_NAME__room_name[] = "room_name";
static char intelligent_robotics_msgs__msg__VacuumCleanerStatus__FIELD_NAME__battery_percent[] = "battery_percent";

static rosidl_runtime_c__type_description__Field intelligent_robotics_msgs__msg__VacuumCleanerStatus__FIELDS[] = {
  {
    {intelligent_robotics_msgs__msg__VacuumCleanerStatus__FIELD_NAME__room_id, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {intelligent_robotics_msgs__msg__VacuumCleanerStatus__FIELD_NAME__room_name, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {intelligent_robotics_msgs__msg__VacuumCleanerStatus__FIELD_NAME__battery_percent, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
intelligent_robotics_msgs__msg__VacuumCleanerStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {intelligent_robotics_msgs__msg__VacuumCleanerStatus__TYPE_NAME, 49, 49},
      {intelligent_robotics_msgs__msg__VacuumCleanerStatus__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "\n"
  "\n"
  "int8 room_id\n"
  "\n"
  "string room_name\n"
  "\n"
  "float32 battery_percent # 0-100";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
intelligent_robotics_msgs__msg__VacuumCleanerStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {intelligent_robotics_msgs__msg__VacuumCleanerStatus__TYPE_NAME, 49, 49},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 65, 65},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
intelligent_robotics_msgs__msg__VacuumCleanerStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *intelligent_robotics_msgs__msg__VacuumCleanerStatus__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
