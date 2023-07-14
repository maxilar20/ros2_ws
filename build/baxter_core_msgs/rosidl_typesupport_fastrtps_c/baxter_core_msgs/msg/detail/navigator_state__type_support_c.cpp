// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from baxter_core_msgs:msg/NavigatorState.idl
// generated code does not contain a copyright notice
#include "baxter_core_msgs/msg/detail/navigator_state__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "baxter_core_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "baxter_core_msgs/msg/detail/navigator_state__struct.h"
#include "baxter_core_msgs/msg/detail/navigator_state__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // buttons, lights
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // buttons, lights
#include "rosidl_runtime_c/string.h"  // button_names, light_names
#include "rosidl_runtime_c/string_functions.h"  // button_names, light_names

// forward declare type support functions


using _NavigatorState__ros_msg_type = baxter_core_msgs__msg__NavigatorState;

static bool _NavigatorState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _NavigatorState__ros_msg_type * ros_message = static_cast<const _NavigatorState__ros_msg_type *>(untyped_ros_message);
  // Field name: button_names
  {
    size_t size = ros_message->button_names.size;
    auto array_ptr = ros_message->button_names.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
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
  }

  // Field name: buttons
  {
    size_t size = ros_message->buttons.size;
    auto array_ptr = ros_message->buttons.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: wheel
  {
    cdr << ros_message->wheel;
  }

  // Field name: light_names
  {
    size_t size = ros_message->light_names.size;
    auto array_ptr = ros_message->light_names.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
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
  }

  // Field name: lights
  {
    size_t size = ros_message->lights.size;
    auto array_ptr = ros_message->lights.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _NavigatorState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _NavigatorState__ros_msg_type * ros_message = static_cast<_NavigatorState__ros_msg_type *>(untyped_ros_message);
  // Field name: button_names
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->button_names.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->button_names);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->button_names, size)) {
      fprintf(stderr, "failed to create array for field 'button_names'");
      return false;
    }
    auto array_ptr = ros_message->button_names.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'button_names'\n");
        return false;
      }
    }
  }

  // Field name: buttons
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->buttons.data) {
      rosidl_runtime_c__boolean__Sequence__fini(&ros_message->buttons);
    }
    if (!rosidl_runtime_c__boolean__Sequence__init(&ros_message->buttons, size)) {
      fprintf(stderr, "failed to create array for field 'buttons'");
      return false;
    }
    auto array_ptr = ros_message->buttons.data;
    for (size_t i = 0; i < size; ++i) {
      uint8_t tmp;
      cdr >> tmp;
      array_ptr[i] = tmp ? true : false;
    }
  }

  // Field name: wheel
  {
    cdr >> ros_message->wheel;
  }

  // Field name: light_names
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->light_names.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->light_names);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->light_names, size)) {
      fprintf(stderr, "failed to create array for field 'light_names'");
      return false;
    }
    auto array_ptr = ros_message->light_names.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'light_names'\n");
        return false;
      }
    }
  }

  // Field name: lights
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->lights.data) {
      rosidl_runtime_c__boolean__Sequence__fini(&ros_message->lights);
    }
    if (!rosidl_runtime_c__boolean__Sequence__init(&ros_message->lights, size)) {
      fprintf(stderr, "failed to create array for field 'lights'");
      return false;
    }
    auto array_ptr = ros_message->lights.data;
    for (size_t i = 0; i < size; ++i) {
      uint8_t tmp;
      cdr >> tmp;
      array_ptr[i] = tmp ? true : false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_baxter_core_msgs
size_t get_serialized_size_baxter_core_msgs__msg__NavigatorState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _NavigatorState__ros_msg_type * ros_message = static_cast<const _NavigatorState__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name button_names
  {
    size_t array_size = ros_message->button_names.size;
    auto array_ptr = ros_message->button_names.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name buttons
  {
    size_t array_size = ros_message->buttons.size;
    auto array_ptr = ros_message->buttons.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wheel
  {
    size_t item_size = sizeof(ros_message->wheel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name light_names
  {
    size_t array_size = ros_message->light_names.size;
    auto array_ptr = ros_message->light_names.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name lights
  {
    size_t array_size = ros_message->lights.size;
    auto array_ptr = ros_message->lights.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _NavigatorState__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_baxter_core_msgs__msg__NavigatorState(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_baxter_core_msgs
size_t max_serialized_size_baxter_core_msgs__msg__NavigatorState(
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

  // member: button_names
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: buttons
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: wheel
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: light_names
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: lights
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _NavigatorState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_baxter_core_msgs__msg__NavigatorState(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_NavigatorState = {
  "baxter_core_msgs::msg",
  "NavigatorState",
  _NavigatorState__cdr_serialize,
  _NavigatorState__cdr_deserialize,
  _NavigatorState__get_serialized_size,
  _NavigatorState__max_serialized_size
};

static rosidl_message_type_support_t _NavigatorState__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_NavigatorState,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, baxter_core_msgs, msg, NavigatorState)() {
  return &_NavigatorState__type_support;
}

#if defined(__cplusplus)
}
#endif
