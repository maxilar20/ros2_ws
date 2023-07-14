// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from baxter_core_msgs:msg/AssemblyState.idl
// generated code does not contain a copyright notice
#include "baxter_core_msgs/msg/detail/assembly_state__rosidl_typesupport_fastrtps_cpp.hpp"
#include "baxter_core_msgs/msg/detail/assembly_state__struct.hpp"

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
  const baxter_core_msgs::msg::AssemblyState & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: ready
  cdr << (ros_message.ready ? true : false);
  // Member: enabled
  cdr << (ros_message.enabled ? true : false);
  // Member: stopped
  cdr << (ros_message.stopped ? true : false);
  // Member: error
  cdr << (ros_message.error ? true : false);
  // Member: estop_button
  cdr << ros_message.estop_button;
  // Member: estop_source
  cdr << ros_message.estop_source;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_baxter_core_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  baxter_core_msgs::msg::AssemblyState & ros_message)
{
  // Member: ready
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.ready = tmp ? true : false;
  }

  // Member: enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.enabled = tmp ? true : false;
  }

  // Member: stopped
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.stopped = tmp ? true : false;
  }

  // Member: error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.error = tmp ? true : false;
  }

  // Member: estop_button
  cdr >> ros_message.estop_button;

  // Member: estop_source
  cdr >> ros_message.estop_source;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_baxter_core_msgs
get_serialized_size(
  const baxter_core_msgs::msg::AssemblyState & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: ready
  {
    size_t item_size = sizeof(ros_message.ready);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: enabled
  {
    size_t item_size = sizeof(ros_message.enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: stopped
  {
    size_t item_size = sizeof(ros_message.stopped);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: error
  {
    size_t item_size = sizeof(ros_message.error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: estop_button
  {
    size_t item_size = sizeof(ros_message.estop_button);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: estop_source
  {
    size_t item_size = sizeof(ros_message.estop_source);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_baxter_core_msgs
max_serialized_size_AssemblyState(
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


  // Member: ready
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: enabled
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: stopped
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: estop_button
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: estop_source
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _AssemblyState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const baxter_core_msgs::msg::AssemblyState *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _AssemblyState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<baxter_core_msgs::msg::AssemblyState *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _AssemblyState__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const baxter_core_msgs::msg::AssemblyState *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _AssemblyState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_AssemblyState(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _AssemblyState__callbacks = {
  "baxter_core_msgs::msg",
  "AssemblyState",
  _AssemblyState__cdr_serialize,
  _AssemblyState__cdr_deserialize,
  _AssemblyState__get_serialized_size,
  _AssemblyState__max_serialized_size
};

static rosidl_message_type_support_t _AssemblyState__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_AssemblyState__callbacks,
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
get_message_type_support_handle<baxter_core_msgs::msg::AssemblyState>()
{
  return &baxter_core_msgs::msg::typesupport_fastrtps_cpp::_AssemblyState__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, baxter_core_msgs, msg, AssemblyState)() {
  return &baxter_core_msgs::msg::typesupport_fastrtps_cpp::_AssemblyState__handle;
}

#ifdef __cplusplus
}
#endif
