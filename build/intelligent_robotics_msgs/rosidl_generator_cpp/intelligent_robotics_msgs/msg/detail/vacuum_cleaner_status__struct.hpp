// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from intelligent_robotics_msgs:msg/VacuumCleanerStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "intelligent_robotics_msgs/msg/vacuum_cleaner_status.hpp"


#ifndef INTELLIGENT_ROBOTICS_MSGS__MSG__DETAIL__VACUUM_CLEANER_STATUS__STRUCT_HPP_
#define INTELLIGENT_ROBOTICS_MSGS__MSG__DETAIL__VACUUM_CLEANER_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__intelligent_robotics_msgs__msg__VacuumCleanerStatus __attribute__((deprecated))
#else
# define DEPRECATED__intelligent_robotics_msgs__msg__VacuumCleanerStatus __declspec(deprecated)
#endif

namespace intelligent_robotics_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VacuumCleanerStatus_
{
  using Type = VacuumCleanerStatus_<ContainerAllocator>;

  explicit VacuumCleanerStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->room_id = 0;
      this->room_name = "";
      this->battery_percent = 0.0f;
    }
  }

  explicit VacuumCleanerStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : room_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->room_id = 0;
      this->room_name = "";
      this->battery_percent = 0.0f;
    }
  }

  // field types and members
  using _room_id_type =
    int8_t;
  _room_id_type room_id;
  using _room_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _room_name_type room_name;
  using _battery_percent_type =
    float;
  _battery_percent_type battery_percent;

  // setters for named parameter idiom
  Type & set__room_id(
    const int8_t & _arg)
  {
    this->room_id = _arg;
    return *this;
  }
  Type & set__room_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->room_name = _arg;
    return *this;
  }
  Type & set__battery_percent(
    const float & _arg)
  {
    this->battery_percent = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    intelligent_robotics_msgs::msg::VacuumCleanerStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const intelligent_robotics_msgs::msg::VacuumCleanerStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<intelligent_robotics_msgs::msg::VacuumCleanerStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<intelligent_robotics_msgs::msg::VacuumCleanerStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      intelligent_robotics_msgs::msg::VacuumCleanerStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<intelligent_robotics_msgs::msg::VacuumCleanerStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      intelligent_robotics_msgs::msg::VacuumCleanerStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<intelligent_robotics_msgs::msg::VacuumCleanerStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<intelligent_robotics_msgs::msg::VacuumCleanerStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<intelligent_robotics_msgs::msg::VacuumCleanerStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__intelligent_robotics_msgs__msg__VacuumCleanerStatus
    std::shared_ptr<intelligent_robotics_msgs::msg::VacuumCleanerStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__intelligent_robotics_msgs__msg__VacuumCleanerStatus
    std::shared_ptr<intelligent_robotics_msgs::msg::VacuumCleanerStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VacuumCleanerStatus_ & other) const
  {
    if (this->room_id != other.room_id) {
      return false;
    }
    if (this->room_name != other.room_name) {
      return false;
    }
    if (this->battery_percent != other.battery_percent) {
      return false;
    }
    return true;
  }
  bool operator!=(const VacuumCleanerStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VacuumCleanerStatus_

// alias to use template instance with default allocator
using VacuumCleanerStatus =
  intelligent_robotics_msgs::msg::VacuumCleanerStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace intelligent_robotics_msgs

#endif  // INTELLIGENT_ROBOTICS_MSGS__MSG__DETAIL__VACUUM_CLEANER_STATUS__STRUCT_HPP_
