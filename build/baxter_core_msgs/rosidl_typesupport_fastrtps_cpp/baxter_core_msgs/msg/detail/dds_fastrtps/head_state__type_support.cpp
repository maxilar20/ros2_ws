// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from baxter_core_msgs:msg/HeadState.idl
// generated code does not contain a copyright notice
#include "baxter_core_msgs/msg/detail/head_state__rosidl_typesupport_fastrtps_cpp.hpp"
#include "baxter_core_msgs/msg/detail/head_state__struct.hpp"

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
  const baxter_core_msgs::msg::HeadState & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: pan
  cdr << ros_message.pan;
  // Member: is_turning
  cdr << (ros_message.is_turning ? true : false);
  // Member: is_nodding
  cdr << (ros_message.is_nodding ? true : false);
  // Member: is_pan_enabled
  cdr << (ros_message.is_pan_enabled ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_baxter_core_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  baxter_core_msgs::msg::HeadState & ros_message)
{
  // Member: pan
  cdr >> ros_message.pan;

  // Member: is_turning
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_turning = tmp ? true : false;
  }

  // Member: is_nodding
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_nodding = tmp ? true : false;
  }

  // Member: is_pan_enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_pan_enabled = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_baxter_core_msgs
get_serialized_size(
  const baxter_core_msgs::msg::HeadState & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: pan
  {
    size_t item_size = sizeof(ros_message.pan);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: is_turning
  {
    size_t item_size = sizeof(ros_message.is_turning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: is_nodding
  {
    size_t item_size = sizeof(ros_message.is_nodding);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: is_pan_enabled
  {
    size_t item_size = sizeof(ros_message.is_pan_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_baxter_core_msgs
max_serialized_size_HeadState(
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


  // Member: pan
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: is_turning
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: is_nodding
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: is_pan_enabled
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _HeadState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const baxter_core_msgs::msg::HeadState *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _HeadState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<baxter_core_msgs::msg::HeadState *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _HeadState__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const baxter_core_msgs::msg::HeadState *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _HeadState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_HeadState(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _HeadState__callbacks = {
  "baxter_core_msgs::msg",
  "HeadState",
  _HeadState__cdr_serialize,
  _HeadState__cdr_deserialize,
  _HeadState__get_serialized_size,
  _HeadState__max_serialized_size
};

static rosidl_message_type_support_t _HeadState__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_HeadState__callbacks,
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
get_message_type_support_handle<baxter_core_msgs::msg::HeadState>()
{
  return &baxter_core_msgs::msg::typesupport_fastrtps_cpp::_HeadState__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, baxter_core_msgs, msg, HeadState)() {
  return &baxter_core_msgs::msg::typesupport_fastrtps_cpp::_HeadState__handle;
}

#ifdef __cplusplus
}
#endif
