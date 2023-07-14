// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from baxter_core_msgs:msg/BridgePublisher.idl
// generated code does not contain a copyright notice
#include "baxter_core_msgs/msg/detail/bridge_publisher__rosidl_typesupport_fastrtps_cpp.hpp"
#include "baxter_core_msgs/msg/detail/bridge_publisher__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace baxter_core_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_baxter_core_msgs
cdr_serialize(
  const baxter_core_msgs::msg::BridgePublisher & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: topic
  cdr << ros_message.topic;
  // Member: user
  cdr << ros_message.user;
  // Member: time
  cdr << ros_message.time;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_baxter_core_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  baxter_core_msgs::msg::BridgePublisher & ros_message)
{
  // Member: topic
  cdr >> ros_message.topic;

  // Member: user
  cdr >> ros_message.user;

  // Member: time
  cdr >> ros_message.time;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_baxter_core_msgs
get_serialized_size(
  const baxter_core_msgs::msg::BridgePublisher & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: topic
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.topic.size() + 1);
  // Member: user
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.user.size() + 1);
  // Member: time
  {
    size_t item_size = sizeof(ros_message.time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_baxter_core_msgs
max_serialized_size_BridgePublisher(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: topic
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: user
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: time
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _BridgePublisher__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const baxter_core_msgs::msg::BridgePublisher *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _BridgePublisher__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<baxter_core_msgs::msg::BridgePublisher *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _BridgePublisher__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const baxter_core_msgs::msg::BridgePublisher *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _BridgePublisher__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_BridgePublisher(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _BridgePublisher__callbacks = {
  "baxter_core_msgs::msg",
  "BridgePublisher",
  _BridgePublisher__cdr_serialize,
  _BridgePublisher__cdr_deserialize,
  _BridgePublisher__get_serialized_size,
  _BridgePublisher__max_serialized_size
};

static rosidl_message_type_support_t _BridgePublisher__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_BridgePublisher__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace baxter_core_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_baxter_core_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<baxter_core_msgs::msg::BridgePublisher>()
{
  return &baxter_core_msgs::msg::typesupport_fastrtps_cpp::_BridgePublisher__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, baxter_core_msgs, msg, BridgePublisher)() {
  return &baxter_core_msgs::msg::typesupport_fastrtps_cpp::_BridgePublisher__handle;
}

#ifdef __cplusplus
}
#endif
