// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from intelligent_robotics_msgs:msg/VacuumCleanerStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "intelligent_robotics_msgs/msg/vacuum_cleaner_status.hpp"


#ifndef INTELLIGENT_ROBOTICS_MSGS__MSG__DETAIL__VACUUM_CLEANER_STATUS__TRAITS_HPP_
#define INTELLIGENT_ROBOTICS_MSGS__MSG__DETAIL__VACUUM_CLEANER_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "intelligent_robotics_msgs/msg/detail/vacuum_cleaner_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace intelligent_robotics_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const VacuumCleanerStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: room_id
  {
    out << "room_id: ";
    rosidl_generator_traits::value_to_yaml(msg.room_id, out);
    out << ", ";
  }

  // member: room_name
  {
    out << "room_name: ";
    rosidl_generator_traits::value_to_yaml(msg.room_name, out);
    out << ", ";
  }

  // member: battery_percent
  {
    out << "battery_percent: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_percent, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VacuumCleanerStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: room_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "room_id: ";
    rosidl_generator_traits::value_to_yaml(msg.room_id, out);
    out << "\n";
  }

  // member: room_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "room_name: ";
    rosidl_generator_traits::value_to_yaml(msg.room_name, out);
    out << "\n";
  }

  // member: battery_percent
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_percent: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_percent, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VacuumCleanerStatus & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace intelligent_robotics_msgs

namespace rosidl_generator_traits
{

[[deprecated("use intelligent_robotics_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const intelligent_robotics_msgs::msg::VacuumCleanerStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  intelligent_robotics_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use intelligent_robotics_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const intelligent_robotics_msgs::msg::VacuumCleanerStatus & msg)
{
  return intelligent_robotics_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<intelligent_robotics_msgs::msg::VacuumCleanerStatus>()
{
  return "intelligent_robotics_msgs::msg::VacuumCleanerStatus";
}

template<>
inline const char * name<intelligent_robotics_msgs::msg::VacuumCleanerStatus>()
{
  return "intelligent_robotics_msgs/msg/VacuumCleanerStatus";
}

template<>
struct has_fixed_size<intelligent_robotics_msgs::msg::VacuumCleanerStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<intelligent_robotics_msgs::msg::VacuumCleanerStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<intelligent_robotics_msgs::msg::VacuumCleanerStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTELLIGENT_ROBOTICS_MSGS__MSG__DETAIL__VACUUM_CLEANER_STATUS__TRAITS_HPP_
