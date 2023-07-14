// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from baxter_maintenance_msgs:msg/UpdateStatus.idl
// generated code does not contain a copyright notice
#include "baxter_maintenance_msgs/msg/detail/update_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "baxter_maintenance_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "baxter_maintenance_msgs/msg/detail/update_status__struct.h"
#include "baxter_maintenance_msgs/msg/detail/update_status__functions.h"
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

#include "rosidl_runtime_c/string.h"  // long_description
#include "rosidl_runtime_c/string_functions.h"  // long_description

// forward declare type support functions


using _UpdateStatus__ros_msg_type = baxter_maintenance_msgs__msg__UpdateStatus;

static bool _UpdateStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _UpdateStatus__ros_msg_type * ros_message = static_cast<const _UpdateStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: status
  {
    cdr << ros_message->status;
  }

  // Field name: progress
  {
    cdr << ros_message->progress;
  }

  // Field name: long_description
  {
    const rosidl_runtime_c__String * str = &ros_message->long_description;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _UpdateStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _UpdateStatus__ros_msg_type * ros_message = static_cast<_UpdateStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: status
  {
    cdr >> ros_message->status;
  }

  // Field name: progress
  {
    cdr >> ros_message->progress;
  }

  // Field name: long_description
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->long_description.data) {
      rosidl_runtime_c__String__init(&ros_message->long_description);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->long_description,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'long_description'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_baxter_maintenance_msgs
size_t get_serialized_size_baxter_maintenance_msgs__msg__UpdateStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _UpdateStatus__ros_msg_type * ros_message = static_cast<const _UpdateStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name status
  {
    size_t item_size = sizeof(ros_message->status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name progress
  {
    size_t item_size = sizeof(ros_message->progress);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name long_description
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->long_description.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _UpdateStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_baxter_maintenance_msgs__msg__UpdateStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_baxter_maintenance_msgs
size_t max_serialized_size_baxter_maintenance_msgs__msg__UpdateStatus(
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

  // member: status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: progress
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: long_description
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

  return current_alignment - initial_alignment;
}

static size_t _UpdateStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_baxter_maintenance_msgs__msg__UpdateStatus(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_UpdateStatus = {
  "baxter_maintenance_msgs::msg",
  "UpdateStatus",
  _UpdateStatus__cdr_serialize,
  _UpdateStatus__cdr_deserialize,
  _UpdateStatus__get_serialized_size,
  _UpdateStatus__max_serialized_size
};

static rosidl_message_type_support_t _UpdateStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_UpdateStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, baxter_maintenance_msgs, msg, UpdateStatus)() {
  return &_UpdateStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
