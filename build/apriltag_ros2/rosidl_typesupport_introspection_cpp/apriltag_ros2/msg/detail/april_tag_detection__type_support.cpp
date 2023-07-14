// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from apriltag_ros2:msg/AprilTagDetection.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "apriltag_ros2/msg/detail/april_tag_detection__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace apriltag_ros2
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void AprilTagDetection_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) apriltag_ros2::msg::AprilTagDetection(_init);
}

void AprilTagDetection_fini_function(void * message_memory)
{
  auto typed_message = static_cast<apriltag_ros2::msg::AprilTagDetection *>(message_memory);
  typed_message->~AprilTagDetection();
}

size_t size_function__AprilTagDetection__id(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AprilTagDetection__id(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__AprilTagDetection__id(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__AprilTagDetection__id(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__AprilTagDetection__id(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__AprilTagDetection__id(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__AprilTagDetection__id(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

void resize_function__AprilTagDetection__id(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__AprilTagDetection__size(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AprilTagDetection__size(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__AprilTagDetection__size(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__AprilTagDetection__size(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__AprilTagDetection__size(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__AprilTagDetection__size(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__AprilTagDetection__size(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__AprilTagDetection__size(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember AprilTagDetection_message_member_array[3] = {
  {
    "id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(apriltag_ros2::msg::AprilTagDetection, id),  // bytes offset in struct
    nullptr,  // default value
    size_function__AprilTagDetection__id,  // size() function pointer
    get_const_function__AprilTagDetection__id,  // get_const(index) function pointer
    get_function__AprilTagDetection__id,  // get(index) function pointer
    fetch_function__AprilTagDetection__id,  // fetch(index, &value) function pointer
    assign_function__AprilTagDetection__id,  // assign(index, value) function pointer
    resize_function__AprilTagDetection__id  // resize(index) function pointer
  },
  {
    "size",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(apriltag_ros2::msg::AprilTagDetection, size),  // bytes offset in struct
    nullptr,  // default value
    size_function__AprilTagDetection__size,  // size() function pointer
    get_const_function__AprilTagDetection__size,  // get_const(index) function pointer
    get_function__AprilTagDetection__size,  // get(index) function pointer
    fetch_function__AprilTagDetection__size,  // fetch(index, &value) function pointer
    assign_function__AprilTagDetection__size,  // assign(index, value) function pointer
    resize_function__AprilTagDetection__size  // resize(index) function pointer
  },
  {
    "pose",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::PoseWithCovarianceStamped>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(apriltag_ros2::msg::AprilTagDetection, pose),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers AprilTagDetection_message_members = {
  "apriltag_ros2::msg",  // message namespace
  "AprilTagDetection",  // message name
  3,  // number of fields
  sizeof(apriltag_ros2::msg::AprilTagDetection),
  AprilTagDetection_message_member_array,  // message members
  AprilTagDetection_init_function,  // function to initialize message memory (memory has to be allocated)
  AprilTagDetection_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t AprilTagDetection_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &AprilTagDetection_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace apriltag_ros2


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<apriltag_ros2::msg::AprilTagDetection>()
{
  return &::apriltag_ros2::msg::rosidl_typesupport_introspection_cpp::AprilTagDetection_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, apriltag_ros2, msg, AprilTagDetection)() {
  return &::apriltag_ros2::msg::rosidl_typesupport_introspection_cpp::AprilTagDetection_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
