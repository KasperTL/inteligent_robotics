// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from intelligent_robotics_msgs:msg/VacuumCleanerStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "intelligent_robotics_msgs/msg/vacuum_cleaner_status.hpp"


#ifndef INTELLIGENT_ROBOTICS_MSGS__MSG__DETAIL__VACUUM_CLEANER_STATUS__BUILDER_HPP_
#define INTELLIGENT_ROBOTICS_MSGS__MSG__DETAIL__VACUUM_CLEANER_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "intelligent_robotics_msgs/msg/detail/vacuum_cleaner_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace intelligent_robotics_msgs
{

namespace msg
{

namespace builder
{

class Init_VacuumCleanerStatus_battery_percent
{
public:
  explicit Init_VacuumCleanerStatus_battery_percent(::intelligent_robotics_msgs::msg::VacuumCleanerStatus & msg)
  : msg_(msg)
  {}
  ::intelligent_robotics_msgs::msg::VacuumCleanerStatus battery_percent(::intelligent_robotics_msgs::msg::VacuumCleanerStatus::_battery_percent_type arg)
  {
    msg_.battery_percent = std::move(arg);
    return std::move(msg_);
  }

private:
  ::intelligent_robotics_msgs::msg::VacuumCleanerStatus msg_;
};

class Init_VacuumCleanerStatus_room_name
{
public:
  explicit Init_VacuumCleanerStatus_room_name(::intelligent_robotics_msgs::msg::VacuumCleanerStatus & msg)
  : msg_(msg)
  {}
  Init_VacuumCleanerStatus_battery_percent room_name(::intelligent_robotics_msgs::msg::VacuumCleanerStatus::_room_name_type arg)
  {
    msg_.room_name = std::move(arg);
    return Init_VacuumCleanerStatus_battery_percent(msg_);
  }

private:
  ::intelligent_robotics_msgs::msg::VacuumCleanerStatus msg_;
};

class Init_VacuumCleanerStatus_room_id
{
public:
  Init_VacuumCleanerStatus_room_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VacuumCleanerStatus_room_name room_id(::intelligent_robotics_msgs::msg::VacuumCleanerStatus::_room_id_type arg)
  {
    msg_.room_id = std::move(arg);
    return Init_VacuumCleanerStatus_room_name(msg_);
  }

private:
  ::intelligent_robotics_msgs::msg::VacuumCleanerStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::intelligent_robotics_msgs::msg::VacuumCleanerStatus>()
{
  return intelligent_robotics_msgs::msg::builder::Init_VacuumCleanerStatus_room_id();
}

}  // namespace intelligent_robotics_msgs

#endif  // INTELLIGENT_ROBOTICS_MSGS__MSG__DETAIL__VACUUM_CLEANER_STATUS__BUILDER_HPP_
