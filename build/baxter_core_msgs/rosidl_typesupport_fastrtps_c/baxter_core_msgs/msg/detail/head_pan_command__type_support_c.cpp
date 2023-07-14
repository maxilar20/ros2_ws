// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from baxter_core_msgs:msg/HeadPanCommand.idl
// generated code does not contain a copyright notice
#include "baxter_core_msgs/msg/detail/head_pan_command__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "baxter_core_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "baxter_core_msgs/msg/detail/head_pan_command__struct.h"
#include "baxter_core_msgs/msg/detail/head_pan_command__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _HeadPanCommand__ros_msg_type = baxter_core_msgs__msg__HeadPanCommand;

static bool _HeadPanCommand__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _HeadPanCommand__ros_msg_type * ros_message = static_cast<const _HeadPanCommand__ros_msg_type *>(untyped_ros_message);
  // Field name: target
  {
    cdr << ros_message->target;
  }

  // Field name: speed_ratio
  {
    cdr << ros_message->speed_ratio;
  }

  // Field name: enable_pan_request
  {
    cdr << ros_message->enable_pan_request;
  }

  return true;
}

static bool _HeadPanCommand__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _HeadPanCommand__ros_msg_type * ros_message = static_cast<_HeadPanCommand__ros_msg_type *>(untyped_ros_message);
  // Field name: target
  {
    cdr >> ros_message->target;
  }

  // Field name: speed_ratio
  {
    cdr >> ros_message->speed_ratio;
  }

  // Field name: enable_pan_request
  {
    cdr >> ros_message->enable_pan_request;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_baxter_core_msgs
size_t get_serialized_size_baxter_core_msgs__msg__HeadPanCommand(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _HeadPanCommand__ros_msg_type * ros_message = static_cast<const _HeadPanCommand__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name target
  {
    size_t item_size = sizeof(ros_message->target);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name speed_ratio
  {
    size_t item_size = sizeof(ros_message->speed_ratio);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name enable_pan_request
  {
    size_t item_size = sizeof(ros_message->enable_pan_request);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _HeadPanCommand__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_baxter_core_msgs__msg__HeadPanCommand(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_baxter_core_msgs
size_t max_serialized_size_baxter_core_msgs__msg__HeadPanCommand(
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

  // member: target
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: speed_ratio
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: enable_pan_request
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _HeadPanCommand__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_baxter_core_msgs__msg__HeadPanCommand(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_HeadPanCommand = {
  "baxter_core_msgs::msg",
  "HeadPanCommand",
  _HeadPanCommand__cdr_serialize,
  _HeadPanCommand__cdr_deserialize,
  _HeadPanCommand__get_serialized_size,
  _HeadPanCommand__max_serialized_size
};

static rosidl_message_type_support_t _HeadPanCommand__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_HeadPanCommand,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, baxter_core_msgs, msg, HeadPanCommand)() {
  return &_HeadPanCommand__type_support;
}

#if defined(__cplusplus)
}
#endif
