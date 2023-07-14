// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from baxter_core_msgs:msg/EndEffectorState.idl
// generated code does not contain a copyright notice
#include "baxter_core_msgs/msg/detail/end_effector_state__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "baxter_core_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "baxter_core_msgs/msg/detail/end_effector_state__struct.h"
#include "baxter_core_msgs/msg/detail/end_effector_state__functions.h"
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

#include "builtin_interfaces/msg/detail/time__functions.h"  // timestamp
#include "rosidl_runtime_c/string.h"  // command, command_sender, state
#include "rosidl_runtime_c/string_functions.h"  // command, command_sender, state

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


using _EndEffectorState__ros_msg_type = baxter_core_msgs__msg__EndEffectorState;

static bool _EndEffectorState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _EndEffectorState__ros_msg_type * ros_message = static_cast<const _EndEffectorState__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->timestamp, cdr))
    {
      return false;
    }
  }

  // Field name: id
  {
    cdr << ros_message->id;
  }

  // Field name: enabled
  {
    cdr << ros_message->enabled;
  }

  // Field name: calibrated
  {
    cdr << ros_message->calibrated;
  }

  // Field name: ready
  {
    cdr << ros_message->ready;
  }

  // Field name: moving
  {
    cdr << ros_message->moving;
  }

  // Field name: gripping
  {
    cdr << ros_message->gripping;
  }

  // Field name: missed
  {
    cdr << ros_message->missed;
  }

  // Field name: error
  {
    cdr << ros_message->error;
  }

  // Field name: reverse
  {
    cdr << ros_message->reverse;
  }

  // Field name: position
  {
    cdr << ros_message->position;
  }

  // Field name: force
  {
    cdr << ros_message->force;
  }

  // Field name: state
  {
    const rosidl_runtime_c__String * str = &ros_message->state;
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

  // Field name: command
  {
    const rosidl_runtime_c__String * str = &ros_message->command;
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

  // Field name: command_sender
  {
    const rosidl_runtime_c__String * str = &ros_message->command_sender;
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

  // Field name: command_sequence
  {
    cdr << ros_message->command_sequence;
  }

  return true;
}

static bool _EndEffectorState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _EndEffectorState__ros_msg_type * ros_message = static_cast<_EndEffectorState__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->timestamp))
    {
      return false;
    }
  }

  // Field name: id
  {
    cdr >> ros_message->id;
  }

  // Field name: enabled
  {
    cdr >> ros_message->enabled;
  }

  // Field name: calibrated
  {
    cdr >> ros_message->calibrated;
  }

  // Field name: ready
  {
    cdr >> ros_message->ready;
  }

  // Field name: moving
  {
    cdr >> ros_message->moving;
  }

  // Field name: gripping
  {
    cdr >> ros_message->gripping;
  }

  // Field name: missed
  {
    cdr >> ros_message->missed;
  }

  // Field name: error
  {
    cdr >> ros_message->error;
  }

  // Field name: reverse
  {
    cdr >> ros_message->reverse;
  }

  // Field name: position
  {
    cdr >> ros_message->position;
  }

  // Field name: force
  {
    cdr >> ros_message->force;
  }

  // Field name: state
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->state.data) {
      rosidl_runtime_c__String__init(&ros_message->state);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->state,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'state'\n");
      return false;
    }
  }

  // Field name: command
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->command.data) {
      rosidl_runtime_c__String__init(&ros_message->command);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->command,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'command'\n");
      return false;
    }
  }

  // Field name: command_sender
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->command_sender.data) {
      rosidl_runtime_c__String__init(&ros_message->command_sender);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->command_sender,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'command_sender'\n");
      return false;
    }
  }

  // Field name: command_sequence
  {
    cdr >> ros_message->command_sequence;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_baxter_core_msgs
size_t get_serialized_size_baxter_core_msgs__msg__EndEffectorState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _EndEffectorState__ros_msg_type * ros_message = static_cast<const _EndEffectorState__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name timestamp

  current_alignment += get_serialized_size_builtin_interfaces__msg__Time(
    &(ros_message->timestamp), current_alignment);
  // field.name id
  {
    size_t item_size = sizeof(ros_message->id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name enabled
  {
    size_t item_size = sizeof(ros_message->enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name calibrated
  {
    size_t item_size = sizeof(ros_message->calibrated);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ready
  {
    size_t item_size = sizeof(ros_message->ready);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name moving
  {
    size_t item_size = sizeof(ros_message->moving);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gripping
  {
    size_t item_size = sizeof(ros_message->gripping);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name missed
  {
    size_t item_size = sizeof(ros_message->missed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name error
  {
    size_t item_size = sizeof(ros_message->error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reverse
  {
    size_t item_size = sizeof(ros_message->reverse);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name position
  {
    size_t item_size = sizeof(ros_message->position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name force
  {
    size_t item_size = sizeof(ros_message->force);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name state
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->state.size + 1);
  // field.name command
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->command.size + 1);
  // field.name command_sender
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->command_sender.size + 1);
  // field.name command_sequence
  {
    size_t item_size = sizeof(ros_message->command_sequence);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _EndEffectorState__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_baxter_core_msgs__msg__EndEffectorState(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_baxter_core_msgs
size_t max_serialized_size_baxter_core_msgs__msg__EndEffectorState(
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

  // member: timestamp
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
  // member: id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: enabled
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: calibrated
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ready
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: moving
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: gripping
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: missed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: reverse
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: position
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: force
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: state
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
  // member: command
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
  // member: command_sender
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
  // member: command_sequence
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _EndEffectorState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_baxter_core_msgs__msg__EndEffectorState(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_EndEffectorState = {
  "baxter_core_msgs::msg",
  "EndEffectorState",
  _EndEffectorState__cdr_serialize,
  _EndEffectorState__cdr_deserialize,
  _EndEffectorState__get_serialized_size,
  _EndEffectorState__max_serialized_size
};

static rosidl_message_type_support_t _EndEffectorState__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_EndEffectorState,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, baxter_core_msgs, msg, EndEffectorState)() {
  return &_EndEffectorState__type_support;
}

#if defined(__cplusplus)
}
#endif
