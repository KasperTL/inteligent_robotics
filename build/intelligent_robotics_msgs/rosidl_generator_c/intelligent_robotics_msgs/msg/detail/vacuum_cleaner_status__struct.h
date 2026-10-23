// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from intelligent_robotics_msgs:msg/VacuumCleanerStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "intelligent_robotics_msgs/msg/vacuum_cleaner_status.h"


#ifndef INTELLIGENT_ROBOTICS_MSGS__MSG__DETAIL__VACUUM_CLEANER_STATUS__STRUCT_H_
#define INTELLIGENT_ROBOTICS_MSGS__MSG__DETAIL__VACUUM_CLEANER_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'room_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/VacuumCleanerStatus in the package intelligent_robotics_msgs.
typedef struct intelligent_robotics_msgs__msg__VacuumCleanerStatus
{
  int8_t room_id;
  rosidl_runtime_c__String room_name;
  /// 0-100
  float battery_percent;
} intelligent_robotics_msgs__msg__VacuumCleanerStatus;

// Struct for a sequence of intelligent_robotics_msgs__msg__VacuumCleanerStatus.
typedef struct intelligent_robotics_msgs__msg__VacuumCleanerStatus__Sequence
{
  intelligent_robotics_msgs__msg__VacuumCleanerStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} intelligent_robotics_msgs__msg__VacuumCleanerStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTELLIGENT_ROBOTICS_MSGS__MSG__DETAIL__VACUUM_CLEANER_STATUS__STRUCT_H_
