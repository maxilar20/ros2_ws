// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from baxter_core_msgs:msg/EndEffectorProperties.idl
// generated code does not contain a copyright notice
#include "baxter_core_msgs/msg/detail/end_effector_properties__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "baxter_core_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "baxter_core_msgs/msg/detail/end_effector_properties__struct.h"
#include "baxter_core_msgs/msg/detail/end_effector_properties__functions.h"
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

#include "rosidl_runtime_c/string.h"  // firmware_date, firmware_rev, hardware_rev, manufacturer, product, properties, serial_number
#include "rosidl_runtime_c/string_functions.h"  // firmware_date, firmware_rev, hardware_rev, manufacturer, product, properties, serial_number

// forward declare type support functions


using _EndEffectorProperties__ros_msg_type = baxter_core_msgs__msg__EndEffectorProperties;

static bool _EndEffectorProperties__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _EndEffectorProperties__ros_msg_type * ros_message = static_cast<const _EndEffectorProperties__ros_msg_type *>(untyped_ros_message);
  // Field name: id
  {
    cdr << ros_message->id;
  }

  // Field name: ui_type
  {
    cdr << ros_message->ui_type;
  }

  // Field name: manufacturer
  {
    const rosidl_runtime_c__String * str = &ros_message->manufacturer;
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

  // Field name: product
  {
    const rosidl_runtime_c__String * str = &ros_message->product;
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

  // Field name: serial_number
  {
    const rosidl_runtime_c__String * str = &ros_message->serial_number;
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

  // Field name: hardware_rev
  {
    const rosidl_runtime_c__String * str = &ros_message->hardware_rev;
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

  // Field name: firmware_rev
  {
    const rosidl_runtime_c__String * str = &ros_message->firmware_rev;
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

  // Field name: firmware_date
  {
    const rosidl_runtime_c__String * str = &ros_message->firmware_date;
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

  // Field name: has_calibration
  {
    cdr << (ros_message->has_calibration ? true : false);
  }

  // Field name: controls_grip
  {
    cdr << (ros_message->controls_grip ? true : false);
  }

  // Field name: senses_grip
  {
    cdr << (ros_message->senses_grip ? true : false);
  }

  // Field name: reverses_grip
  {
    cdr << (ros_message->reverses_grip ? true : false);
  }

  // Field name: controls_force
  {
    cdr << (ros_message->controls_force ? true : false);
  }

  // Field name: senses_force
  {
    cdr << (ros_message->senses_force ? true : false);
  }

  // Field name: controls_position
  {
    cdr << (ros_message->controls_position ? true : false);
  }

  // Field name: senses_position
  {
    cdr << (ros_message->senses_position ? true : false);
  }

  // Field name: properties
  {
    const rosidl_runtime_c__String * str = &ros_message->properties;
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

static bool _EndEffectorProperties__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _EndEffectorProperties__ros_msg_type * ros_message = static_cast<_EndEffectorProperties__ros_msg_type *>(untyped_ros_message);
  // Field name: id
  {
    cdr >> ros_message->id;
  }

  // Field name: ui_type
  {
    cdr >> ros_message->ui_type;
  }

  // Field name: manufacturer
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->manufacturer.data) {
      rosidl_runtime_c__String__init(&ros_message->manufacturer);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->manufacturer,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'manufacturer'\n");
      return false;
    }
  }

  // Field name: product
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->product.data) {
      rosidl_runtime_c__String__init(&ros_message->product);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->product,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'product'\n");
      return false;
    }
  }

  // Field name: serial_number
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->serial_number.data) {
      rosidl_runtime_c__String__init(&ros_message->serial_number);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->serial_number,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'serial_number'\n");
      return false;
    }
  }

  // Field name: hardware_rev
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->hardware_rev.data) {
      rosidl_runtime_c__String__init(&ros_message->hardware_rev);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->hardware_rev,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'hardware_rev'\n");
      return false;
    }
  }

  // Field name: firmware_rev
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->firmware_rev.data) {
      rosidl_runtime_c__String__init(&ros_message->firmware_rev);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->firmware_rev,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'firmware_rev'\n");
      return false;
    }
  }

  // Field name: firmware_date
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->firmware_date.data) {
      rosidl_runtime_c__String__init(&ros_message->firmware_date);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->firmware_date,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'firmware_date'\n");
      return false;
    }
  }

  // Field name: has_calibration
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->has_calibration = tmp ? true : false;
  }

  // Field name: controls_grip
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->controls_grip = tmp ? true : false;
  }

  // Field name: senses_grip
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->senses_grip = tmp ? true : false;
  }

  // Field name: reverses_grip
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->reverses_grip = tmp ? true : false;
  }

  // Field name: controls_force
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->controls_force = tmp ? true : false;
  }

  // Field name: senses_force
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->senses_force = tmp ? true : false;
  }

  // Field name: controls_position
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->controls_position = tmp ? true : false;
  }

  // Field name: senses_position
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->senses_position = tmp ? true : false;
  }

  // Field name: properties
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->properties.data) {
      rosidl_runtime_c__String__init(&ros_message->properties);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->properties,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'properties'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_baxter_core_msgs
size_t get_serialized_size_baxter_core_msgs__msg__EndEffectorProperties(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _EndEffectorProperties__ros_msg_type * ros_message = static_cast<const _EndEffectorProperties__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name id
  {
    size_t item_size = sizeof(ros_message->id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ui_type
  {
    size_t item_size = sizeof(ros_message->ui_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name manufacturer
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->manufacturer.size + 1);
  // field.name product
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->product.size + 1);
  // field.name serial_number
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->serial_number.size + 1);
  // field.name hardware_rev
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->hardware_rev.size + 1);
  // field.name firmware_rev
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->firmware_rev.size + 1);
  // field.name firmware_date
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->firmware_date.size + 1);
  // field.name has_calibration
  {
    size_t item_size = sizeof(ros_message->has_calibration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name controls_grip
  {
    size_t item_size = sizeof(ros_message->controls_grip);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name senses_grip
  {
    size_t item_size = sizeof(ros_message->senses_grip);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reverses_grip
  {
    size_t item_size = sizeof(ros_message->reverses_grip);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name controls_force
  {
    size_t item_size = sizeof(ros_message->controls_force);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name senses_force
  {
    size_t item_size = sizeof(ros_message->senses_force);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name controls_position
  {
    size_t item_size = sizeof(ros_message->controls_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name senses_position
  {
    size_t item_size = sizeof(ros_message->senses_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name properties
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->properties.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _EndEffectorProperties__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_baxter_core_msgs__msg__EndEffectorProperties(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_baxter_core_msgs
size_t max_serialized_size_baxter_core_msgs__msg__EndEffectorProperties(
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

  // member: id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ui_type
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: manufacturer
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
  // member: product
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
  // member: serial_number
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
  // member: hardware_rev
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
  // member: firmware_rev
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
  // member: firmware_date
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
  // member: has_calibration
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: controls_grip
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: senses_grip
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: reverses_grip
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: controls_force
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: senses_force
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: controls_position
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: senses_position
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: properties
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

static size_t _EndEffectorProperties__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_baxter_core_msgs__msg__EndEffectorProperties(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_EndEffectorProperties = {
  "baxter_core_msgs::msg",
  "EndEffectorProperties",
  _EndEffectorProperties__cdr_serialize,
  _EndEffectorProperties__cdr_deserialize,
  _EndEffectorProperties__get_serialized_size,
  _EndEffectorProperties__max_serialized_size
};

static rosidl_message_type_support_t _EndEffectorProperties__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_EndEffectorProperties,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, baxter_core_msgs, msg, EndEffectorProperties)() {
  return &_EndEffectorProperties__type_support;
}

#if defined(__cplusplus)
}
#endif
