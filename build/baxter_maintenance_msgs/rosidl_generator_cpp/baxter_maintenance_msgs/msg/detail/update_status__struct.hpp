// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from baxter_maintenance_msgs:msg/UpdateStatus.idl
// generated code does not contain a copyright notice

#ifndef BAXTER_MAINTENANCE_MSGS__MSG__DETAIL__UPDATE_STATUS__STRUCT_HPP_
#define BAXTER_MAINTENANCE_MSGS__MSG__DETAIL__UPDATE_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__baxter_maintenance_msgs__msg__UpdateStatus __attribute__((deprecated))
#else
# define DEPRECATED__baxter_maintenance_msgs__msg__UpdateStatus __declspec(deprecated)
#endif

namespace baxter_maintenance_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct UpdateStatus_
{
  using Type = UpdateStatus_<ContainerAllocator>;

  explicit UpdateStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
      this->progress = 0.0f;
      this->long_description = "";
    }
  }

  explicit UpdateStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : long_description(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
      this->progress = 0.0f;
      this->long_description = "";
    }
  }

  // field types and members
  using _status_type =
    uint16_t;
  _status_type status;
  using _progress_type =
    float;
  _progress_type progress;
  using _long_description_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _long_description_type long_description;

  // setters for named parameter idiom
  Type & set__status(
    const uint16_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__progress(
    const float & _arg)
  {
    this->progress = _arg;
    return *this;
  }
  Type & set__long_description(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->long_description = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint16_t STS_IDLE =
    0u;
  static constexpr uint16_t STS_INVALID =
    1u;
  static constexpr uint16_t STS_BUSY =
    2u;
  static constexpr uint16_t STS_CANCELLED =
    3u;
  static constexpr uint16_t STS_ERR =
    4u;
  static constexpr uint16_t STS_MOUNT_UPDATE =
    5u;
  static constexpr uint16_t STS_VERIFY_UPDATE =
    6u;
  static constexpr uint16_t STS_PREP_STAGING =
    7u;
  static constexpr uint16_t STS_MOUNT_STAGING =
    8u;
  static constexpr uint16_t STS_EXTRACT_UPDATE =
    9u;
  static constexpr uint16_t STS_LOAD_KEXEC =
    10u;

  // pointer types
  using RawPtr =
    baxter_maintenance_msgs::msg::UpdateStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const baxter_maintenance_msgs::msg::UpdateStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<baxter_maintenance_msgs::msg::UpdateStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<baxter_maintenance_msgs::msg::UpdateStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      baxter_maintenance_msgs::msg::UpdateStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<baxter_maintenance_msgs::msg::UpdateStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      baxter_maintenance_msgs::msg::UpdateStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<baxter_maintenance_msgs::msg::UpdateStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<baxter_maintenance_msgs::msg::UpdateStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<baxter_maintenance_msgs::msg::UpdateStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__baxter_maintenance_msgs__msg__UpdateStatus
    std::shared_ptr<baxter_maintenance_msgs::msg::UpdateStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__baxter_maintenance_msgs__msg__UpdateStatus
    std::shared_ptr<baxter_maintenance_msgs::msg::UpdateStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UpdateStatus_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->progress != other.progress) {
      return false;
    }
    if (this->long_description != other.long_description) {
      return false;
    }
    return true;
  }
  bool operator!=(const UpdateStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UpdateStatus_

// alias to use template instance with default allocator
using UpdateStatus =
  baxter_maintenance_msgs::msg::UpdateStatus_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint16_t UpdateStatus_<ContainerAllocator>::STS_IDLE;
template<typename ContainerAllocator>
constexpr uint16_t UpdateStatus_<ContainerAllocator>::STS_INVALID;
template<typename ContainerAllocator>
constexpr uint16_t UpdateStatus_<ContainerAllocator>::STS_BUSY;
template<typename ContainerAllocator>
constexpr uint16_t UpdateStatus_<ContainerAllocator>::STS_CANCELLED;
template<typename ContainerAllocator>
constexpr uint16_t UpdateStatus_<ContainerAllocator>::STS_ERR;
template<typename ContainerAllocator>
constexpr uint16_t UpdateStatus_<ContainerAllocator>::STS_MOUNT_UPDATE;
template<typename ContainerAllocator>
constexpr uint16_t UpdateStatus_<ContainerAllocator>::STS_VERIFY_UPDATE;
template<typename ContainerAllocator>
constexpr uint16_t UpdateStatus_<ContainerAllocator>::STS_PREP_STAGING;
template<typename ContainerAllocator>
constexpr uint16_t UpdateStatus_<ContainerAllocator>::STS_MOUNT_STAGING;
template<typename ContainerAllocator>
constexpr uint16_t UpdateStatus_<ContainerAllocator>::STS_EXTRACT_UPDATE;
template<typename ContainerAllocator>
constexpr uint16_t UpdateStatus_<ContainerAllocator>::STS_LOAD_KEXEC;

}  // namespace msg

}  // namespace baxter_maintenance_msgs

#endif  // BAXTER_MAINTENANCE_MSGS__MSG__DETAIL__UPDATE_STATUS__STRUCT_HPP_
