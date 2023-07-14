// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from baxter_core_msgs:msg/URDFConfiguration.idl
// generated code does not contain a copyright notice
#include "baxter_core_msgs/msg/detail/urdf_configuration__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "baxter_core_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "baxter_core_msgs/msg/detail/urdf_configuration__struct.h"
#include "baxter_core_msgs/msg/detail/urdf_configuration__functions.h"
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

#include "builtin_interfaces/msg/detail/time__functions.h"  // time
#include "rosidl_runtime_c/string.h"  // joint, link, urdf
#include "rosidl_runtime_c/string_functions.h"  // joint, link, urdf

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_baxter_core_msgs
size_t get_serialized_size_builtin_interfaces__msg__Time(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_baxter_core_msgs
size_t max_serialized_size_builtin_interfaces__msg__Time(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_baxter_core_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time)();


using _URDFConfiguration__ros_msg_type = baxter_core_msgs__msg__URDFConfiguration;

static bool _URDFConfiguration__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _URDFConfiguration__ros_msg_type * ros_message = static_cast<const _URDFConfiguration__ros_msg_type *>(untyped_ros_message);
  // Field name: time
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->time, cdr))
    {
      return false;
    }
  }

  // Field name: link
  {
    const rosidl_runtime_c__String * str = &ros_message->link;
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

  // Field name: joint
  {
    const rosidl_runtime_c__String * str = &ros_message->joint;
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

  // Field name: urdf
  {
    const rosidl_runtime_c__String * str = &ros_message->urdf;
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

static bool _URDFConfiguration__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _URDFConfiguration__ros_msg_type * ros_message = static_cast<_URDFConfiguration__ros_msg_type *>(untyped_ros_message);
  // Field name: time
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->time))
    {
      return false;
    }
  }

  // Field name: link
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->link.data) {
      rosidl_runtime_c__String__init(&ros_message->link);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->link,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'link'\n");
      return false;
    }
  }

  // Field name: joint
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->joint.data) {
      rosidl_runtime_c__String__init(&ros_message->joint);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->joint,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'joint'\n");
      return false;
    }
  }

  // Field name: urdf
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->urdf.data) {
      rosidl_runtime_c__String__init(&ros_message->urdf);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->urdf,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'urdf'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_baxter_core_msgs
size_t get_serialized_size_baxter_core_msgs__msg__URDFConfiguration(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _URDFConfiguration__ros_msg_type * ros_message = static_cast<const _URDFConfiguration__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name time

  current_alignment += get_serialized_size_builtin_interfaces__msg__Time(
    &(ros_message->time), current_alignment);
  // field.name link
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->link.size + 1);
  // field.name joint
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->joint.size + 1);
  // field.name urdf
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->urdf.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _URDFConfiguration__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_baxter_core_msgs__msg__URDFConfiguration(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_baxter_core_msgs
size_t max_serialized_size_baxter_core_msgs__msg__URDFConfiguration(
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

  // member: time
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_builtin_interfaces__msg__Time(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: link
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
  // member: joint
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
  // member: urdf
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

static size_t _URDFConfiguration__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_baxter_core_msgs__msg__URDFConfiguration(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_URDFConfiguration = {
  "baxter_core_msgs::msg",
  "URDFConfiguration",
  _URDFConfiguration__cdr_serialize,
  _URDFConfiguration__cdr_deserialize,
  _URDFConfiguration__get_serialized_size,
  _URDFConfiguration__max_serialized_size
};

static rosidl_message_type_support_t _URDFConfiguration__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_URDFConfiguration,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, baxter_core_msgs, msg, URDFConfiguration)() {
  return &_URDFConfiguration__type_support;
}

#if defined(__cplusplus)
}
#endif
