// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from intelligent_robotics_msgs:msg/VacuumCleanerStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "intelligent_robotics_msgs/msg/vacuum_cleaner_status.h"


#ifndef INTELLIGENT_ROBOTICS_MSGS__MSG__DETAIL__VACUUM_CLEANER_STATUS__FUNCTIONS_H_
#define INTELLIGENT_ROBOTICS_MSGS__MSG__DETAIL__VACUUM_CLEANER_STATUS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "intelligent_robotics_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "intelligent_robotics_msgs/msg/detail/vacuum_cleaner_status__struct.h"

/// Initialize msg/VacuumCleanerStatus message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * intelligent_robotics_msgs__msg__VacuumCleanerStatus
 * )) before or use
 * intelligent_robotics_msgs__msg__VacuumCleanerStatus__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_intelligent_robotics_msgs
bool
intelligent_robotics_msgs__msg__VacuumCleanerStatus__init(intelligent_robotics_msgs__msg__VacuumCleanerStatus * msg);

/// Finalize msg/VacuumCleanerStatus message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_intelligent_robotics_msgs
void
intelligent_robotics_msgs__msg__VacuumCleanerStatus__fini(intelligent_robotics_msgs__msg__VacuumCleanerStatus * msg);

/// Create msg/VacuumCleanerStatus message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * intelligent_robotics_msgs__msg__VacuumCleanerStatus__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_intelligent_robotics_msgs
intelligent_robotics_msgs__msg__VacuumCleanerStatus *
intelligent_robotics_msgs__msg__VacuumCleanerStatus__create(void);

/// Destroy msg/VacuumCleanerStatus message.
/**
 * It calls
 * intelligent_robotics_msgs__msg__VacuumCleanerStatus__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_intelligent_robotics_msgs
void
intelligent_robotics_msgs__msg__VacuumCleanerStatus__destroy(intelligent_robotics_msgs__msg__VacuumCleanerStatus * msg);

/// Check for msg/VacuumCleanerStatus message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_intelligent_robotics_msgs
bool
intelligent_robotics_msgs__msg__VacuumCleanerStatus__are_equal(const intelligent_robotics_msgs__msg__VacuumCleanerStatus * lhs, const intelligent_robotics_msgs__msg__VacuumCleanerStatus * rhs);

/// Copy a msg/VacuumCleanerStatus message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_intelligent_robotics_msgs
bool
intelligent_robotics_msgs__msg__VacuumCleanerStatus__copy(
  const intelligent_robotics_msgs__msg__VacuumCleanerStatus * input,
  intelligent_robotics_msgs__msg__VacuumCleanerStatus * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_intelligent_robotics_msgs
const rosidl_type_hash_t *
intelligent_robotics_msgs__msg__VacuumCleanerStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_intelligent_robotics_msgs
const rosidl_runtime_c__type_description__TypeDescription *
intelligent_robotics_msgs__msg__VacuumCleanerStatus__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_intelligent_robotics_msgs
const rosidl_runtime_c__type_description__TypeSource *
intelligent_robotics_msgs__msg__VacuumCleanerStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_intelligent_robotics_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
intelligent_robotics_msgs__msg__VacuumCleanerStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/VacuumCleanerStatus messages.
/**
 * It allocates the memory for the number of elements and calls
 * intelligent_robotics_msgs__msg__VacuumCleanerStatus__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_intelligent_robotics_msgs
bool
intelligent_robotics_msgs__msg__VacuumCleanerStatus__Sequence__init(intelligent_robotics_msgs__msg__VacuumCleanerStatus__Sequence * array, size_t size);

/// Finalize array of msg/VacuumCleanerStatus messages.
/**
 * It calls
 * intelligent_robotics_msgs__msg__VacuumCleanerStatus__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_intelligent_robotics_msgs
void
intelligent_robotics_msgs__msg__VacuumCleanerStatus__Sequence__fini(intelligent_robotics_msgs__msg__VacuumCleanerStatus__Sequence * array);

/// Create array of msg/VacuumCleanerStatus messages.
/**
 * It allocates the memory for the array and calls
 * intelligent_robotics_msgs__msg__VacuumCleanerStatus__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_intelligent_robotics_msgs
intelligent_robotics_msgs__msg__VacuumCleanerStatus__Sequence *
intelligent_robotics_msgs__msg__VacuumCleanerStatus__Sequence__create(size_t size);

/// Destroy array of msg/VacuumCleanerStatus messages.
/**
 * It calls
 * intelligent_robotics_msgs__msg__VacuumCleanerStatus__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_intelligent_robotics_msgs
void
intelligent_robotics_msgs__msg__VacuumCleanerStatus__Sequence__destroy(intelligent_robotics_msgs__msg__VacuumCleanerStatus__Sequence * array);

/// Check for msg/VacuumCleanerStatus message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_intelligent_robotics_msgs
bool
intelligent_robotics_msgs__msg__VacuumCleanerStatus__Sequence__are_equal(const intelligent_robotics_msgs__msg__VacuumCleanerStatus__Sequence * lhs, const intelligent_robotics_msgs__msg__VacuumCleanerStatus__Sequence * rhs);

/// Copy an array of msg/VacuumCleanerStatus messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_intelligent_robotics_msgs
bool
intelligent_robotics_msgs__msg__VacuumCleanerStatus__Sequence__copy(
  const intelligent_robotics_msgs__msg__VacuumCleanerStatus__Sequence * input,
  intelligent_robotics_msgs__msg__VacuumCleanerStatus__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // INTELLIGENT_ROBOTICS_MSGS__MSG__DETAIL__VACUUM_CLEANER_STATUS__FUNCTIONS_H_
