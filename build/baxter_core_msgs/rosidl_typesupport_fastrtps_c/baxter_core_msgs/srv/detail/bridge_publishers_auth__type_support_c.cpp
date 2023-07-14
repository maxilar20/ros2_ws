// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from baxter_core_msgs:srv/BridgePublishersAuth.idl
// generated code does not contain a copyright notice
#include "baxter_core_msgs/srv/detail/bridge_publishers_auth__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "baxter_core_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "baxter_core_msgs/srv/detail/bridge_publishers_auth__struct.h"
#include "baxter_core_msgs/srv/detail/bridge_publishers_auth__functions.h"
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

#include "rosidl_runtime_c/string.h"  // topic, user
#include "rosidl_runtime_c/string_functions.h"  // topic, user

// forward declare type support functions


using _BridgePublishersAuth_Request__ros_msg_type = baxter_core_msgs__srv__BridgePublishersAuth_Request;

static bool _BridgePublishersAuth_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _BridgePublishersAuth_Request__ros_msg_type * ros_message = static_cast<const _BridgePublishersAuth_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: topic
  {
    const rosidl_runtime_c__String * str = &ros_message->topic;
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

  // Field name: user
  {
    const rosidl_runtime_c__String * str = &ros_message->user;
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

static bool _BridgePublishersAuth_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _BridgePublishersAuth_Request__ros_msg_type * ros_message = static_cast<_BridgePublishersAuth_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: topic
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->topic.data) {
      rosidl_runtime_c__String__init(&ros_message->topic);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->topic,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'topic'\n");
      return false;
    }
  }

  // Field name: user
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->user.data) {
      rosidl_runtime_c__String__init(&ros_message->user);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->user,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'user'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_baxter_core_msgs
size_t get_serialized_size_baxter_core_msgs__srv__BridgePublishersAuth_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _BridgePublishersAuth_Request__ros_msg_type * ros_message = static_cast<const _BridgePublishersAuth_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name topic
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->topic.size + 1);
  // field.name user
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->user.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _BridgePublishersAuth_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_baxter_core_msgs__srv__BridgePublishersAuth_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_baxter_core_msgs
size_t max_serialized_size_baxter_core_msgs__srv__BridgePublishersAuth_Request(
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

  // member: topic
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
  // member: user
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

static size_t _BridgePublishersAuth_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_baxter_core_msgs__srv__BridgePublishersAuth_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_BridgePublishersAuth_Request = {
  "baxter_core_msgs::srv",
  "BridgePublishersAuth_Request",
  _BridgePublishersAuth_Request__cdr_serialize,
  _BridgePublishersAuth_Request__cdr_deserialize,
  _BridgePublishersAuth_Request__get_serialized_size,
  _BridgePublishersAuth_Request__max_serialized_size
};

static rosidl_message_type_support_t _BridgePublishersAuth_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_BridgePublishersAuth_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, baxter_core_msgs, srv, BridgePublishersAuth_Request)() {
  return &_BridgePublishersAuth_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "baxter_core_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "baxter_core_msgs/srv/detail/bridge_publishers_auth__struct.h"
// already included above
// #include "baxter_core_msgs/srv/detail/bridge_publishers_auth__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

#include "baxter_core_msgs/msg/detail/bridge_publisher__functions.h"  // publishers
// already included above
// #include "rosidl_runtime_c/string.h"  // forced_left, forced_right
// already included above
// #include "rosidl_runtime_c/string_functions.h"  // forced_left, forced_right

// forward declare type support functions
size_t get_serialized_size_baxter_core_msgs__msg__BridgePublisher(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_baxter_core_msgs__msg__BridgePublisher(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, baxter_core_msgs, msg, BridgePublisher)();


using _BridgePublishersAuth_Response__ros_msg_type = baxter_core_msgs__srv__BridgePublishersAuth_Response;

static bool _BridgePublishersAuth_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _BridgePublishersAuth_Response__ros_msg_type * ros_message = static_cast<const _BridgePublishersAuth_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: publishers
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, baxter_core_msgs, msg, BridgePublisher
      )()->data);
    size_t size = ros_message->publishers.size;
    auto array_ptr = ros_message->publishers.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: forced_left
  {
    const rosidl_runtime_c__String * str = &ros_message->forced_left;
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

  // Field name: forced_right
  {
    const rosidl_runtime_c__String * str = &ros_message->forced_right;
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

static bool _BridgePublishersAuth_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _BridgePublishersAuth_Response__ros_msg_type * ros_message = static_cast<_BridgePublishersAuth_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: publishers
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, baxter_core_msgs, msg, BridgePublisher
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->publishers.data) {
      baxter_core_msgs__msg__BridgePublisher__Sequence__fini(&ros_message->publishers);
    }
    if (!baxter_core_msgs__msg__BridgePublisher__Sequence__init(&ros_message->publishers, size)) {
      fprintf(stderr, "failed to create array for field 'publishers'");
      return false;
    }
    auto array_ptr = ros_message->publishers.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: forced_left
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->forced_left.data) {
      rosidl_runtime_c__String__init(&ros_message->forced_left);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->forced_left,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'forced_left'\n");
      return false;
    }
  }

  // Field name: forced_right
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->forced_right.data) {
      rosidl_runtime_c__String__init(&ros_message->forced_right);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->forced_right,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'forced_right'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_baxter_core_msgs
size_t get_serialized_size_baxter_core_msgs__srv__BridgePublishersAuth_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _BridgePublishersAuth_Response__ros_msg_type * ros_message = static_cast<const _BridgePublishersAuth_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name publishers
  {
    size_t array_size = ros_message->publishers.size;
    auto array_ptr = ros_message->publishers.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_baxter_core_msgs__msg__BridgePublisher(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name forced_left
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->forced_left.size + 1);
  // field.name forced_right
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->forced_right.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _BridgePublishersAuth_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_baxter_core_msgs__srv__BridgePublishersAuth_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_baxter_core_msgs
size_t max_serialized_size_baxter_core_msgs__srv__BridgePublishersAuth_Response(
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

  // member: publishers
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_baxter_core_msgs__msg__BridgePublisher(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: forced_left
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
  // member: forced_right
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

static size_t _BridgePublishersAuth_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_baxter_core_msgs__srv__BridgePublishersAuth_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_BridgePublishersAuth_Response = {
  "baxter_core_msgs::srv",
  "BridgePublishersAuth_Response",
  _BridgePublishersAuth_Response__cdr_serialize,
  _BridgePublishersAuth_Response__cdr_deserialize,
  _BridgePublishersAuth_Response__get_serialized_size,
  _BridgePublishersAuth_Response__max_serialized_size
};

static rosidl_message_type_support_t _BridgePublishersAuth_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_BridgePublishersAuth_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, baxter_core_msgs, srv, BridgePublishersAuth_Response)() {
  return &_BridgePublishersAuth_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "baxter_core_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "baxter_core_msgs/srv/bridge_publishers_auth.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t BridgePublishersAuth__callbacks = {
  "baxter_core_msgs::srv",
  "BridgePublishersAuth",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, baxter_core_msgs, srv, BridgePublishersAuth_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, baxter_core_msgs, srv, BridgePublishersAuth_Response)(),
};

static rosidl_service_type_support_t BridgePublishersAuth__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &BridgePublishersAuth__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, baxter_core_msgs, srv, BridgePublishersAuth)() {
  return &BridgePublishersAuth__handle;
}

#if defined(__cplusplus)
}
#endif
