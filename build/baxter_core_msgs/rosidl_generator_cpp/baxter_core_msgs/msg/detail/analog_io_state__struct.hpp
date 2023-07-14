// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from baxter_core_msgs:msg/AnalogIOState.idl
// generated code does not contain a copyright notice

#ifndef BAXTER_CORE_MSGS__MSG__DETAIL__ANALOG_IO_STATE__STRUCT_HPP_
#define BAXTER_CORE_MSGS__MSG__DETAIL__ANALOG_IO_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__baxter_core_msgs__msg__AnalogIOState __attribute__((deprecated))
#else
# define DEPRECATED__baxter_core_msgs__msg__AnalogIOState __declspec(deprecated)
#endif

namespace baxter_core_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AnalogIOState_
{
  using Type = AnalogIOState_<ContainerAllocator>;

  explicit AnalogIOState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value = 0.0;
      this->is_input_only = false;
    }
  }

  explicit AnalogIOState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value = 0.0;
      this->is_input_only = false;
    }
  }

  // field types and members
  using _timestamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _timestamp_type timestamp;
  using _value_type =
    double;
  _value_type value;
  using _is_input_only_type =
    bool;
  _is_input_only_type is_input_only;

  // setters for named parameter idiom
  Type & set__timestamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__value(
    const double & _arg)
  {
    this->value = _arg;
    return *this;
  }
  Type & set__is_input_only(
    const bool & _arg)
  {
    this->is_input_only = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    baxter_core_msgs::msg::AnalogIOState_<ContainerAllocator> *;
  using ConstRawPtr =
    const baxter_core_msgs::msg::AnalogIOState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<baxter_core_msgs::msg::AnalogIOState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<baxter_core_msgs::msg::AnalogIOState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      baxter_core_msgs::msg::AnalogIOState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<baxter_core_msgs::msg::AnalogIOState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      baxter_core_msgs::msg::AnalogIOState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<baxter_core_msgs::msg::AnalogIOState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<baxter_core_msgs::msg::AnalogIOState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<baxter_core_msgs::msg::AnalogIOState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__baxter_core_msgs__msg__AnalogIOState
    std::shared_ptr<baxter_core_msgs::msg::AnalogIOState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__baxter_core_msgs__msg__AnalogIOState
    std::shared_ptr<baxter_core_msgs::msg::AnalogIOState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AnalogIOState_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->value != other.value) {
      return false;
    }
    if (this->is_input_only != other.is_input_only) {
      return false;
    }
    return true;
  }
  bool operator!=(const AnalogIOState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AnalogIOState_

// alias to use template instance with default allocator
using AnalogIOState =
  baxter_core_msgs::msg::AnalogIOState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace baxter_core_msgs

#endif  // BAXTER_CORE_MSGS__MSG__DETAIL__ANALOG_IO_STATE__STRUCT_HPP_
