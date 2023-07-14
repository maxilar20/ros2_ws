// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from apriltag_ros2:srv/AnalyzeSingleImage.idl
// generated code does not contain a copyright notice
#include "apriltag_ros2/srv/detail/analyze_single_image__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "apriltag_ros2/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "apriltag_ros2/srv/detail/analyze_single_image__struct.h"
#include "apriltag_ros2/srv/detail/analyze_single_image__functions.h"
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

#include "rosidl_runtime_c/string.h"  // full_path_where_to_get_image, full_path_where_to_save_image
#include "rosidl_runtime_c/string_functions.h"  // full_path_where_to_get_image, full_path_where_to_save_image
#include "sensor_msgs/msg/detail/camera_info__functions.h"  // camera_info

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_apriltag_ros2
size_t get_serialized_size_sensor_msgs__msg__CameraInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_apriltag_ros2
size_t max_serialized_size_sensor_msgs__msg__CameraInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_apriltag_ros2
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sensor_msgs, msg, CameraInfo)();


using _AnalyzeSingleImage_Request__ros_msg_type = apriltag_ros2__srv__AnalyzeSingleImage_Request;

static bool _AnalyzeSingleImage_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _AnalyzeSingleImage_Request__ros_msg_type * ros_message = static_cast<const _AnalyzeSingleImage_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: full_path_where_to_get_image
  {
    const rosidl_runtime_c__String * str = &ros_message->full_path_where_to_get_image;
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

  // Field name: full_path_where_to_save_image
  {
    const rosidl_runtime_c__String * str = &ros_message->full_path_where_to_save_image;
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

  // Field name: camera_info
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sensor_msgs, msg, CameraInfo
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->camera_info, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _AnalyzeSingleImage_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _AnalyzeSingleImage_Request__ros_msg_type * ros_message = static_cast<_AnalyzeSingleImage_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: full_path_where_to_get_image
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->full_path_where_to_get_image.data) {
      rosidl_runtime_c__String__init(&ros_message->full_path_where_to_get_image);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->full_path_where_to_get_image,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'full_path_where_to_get_image'\n");
      return false;
    }
  }

  // Field name: full_path_where_to_save_image
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->full_path_where_to_save_image.data) {
      rosidl_runtime_c__String__init(&ros_message->full_path_where_to_save_image);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->full_path_where_to_save_image,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'full_path_where_to_save_image'\n");
      return false;
    }
  }

  // Field name: camera_info
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sensor_msgs, msg, CameraInfo
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->camera_info))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_apriltag_ros2
size_t get_serialized_size_apriltag_ros2__srv__AnalyzeSingleImage_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AnalyzeSingleImage_Request__ros_msg_type * ros_message = static_cast<const _AnalyzeSingleImage_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name full_path_where_to_get_image
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->full_path_where_to_get_image.size + 1);
  // field.name full_path_where_to_save_image
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->full_path_where_to_save_image.size + 1);
  // field.name camera_info

  current_alignment += get_serialized_size_sensor_msgs__msg__CameraInfo(
    &(ros_message->camera_info), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _AnalyzeSingleImage_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_apriltag_ros2__srv__AnalyzeSingleImage_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_apriltag_ros2
size_t max_serialized_size_apriltag_ros2__srv__AnalyzeSingleImage_Request(
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

  // member: full_path_where_to_get_image
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
  // member: full_path_where_to_save_image
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
  // member: camera_info
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_sensor_msgs__msg__CameraInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _AnalyzeSingleImage_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_apriltag_ros2__srv__AnalyzeSingleImage_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_AnalyzeSingleImage_Request = {
  "apriltag_ros2::srv",
  "AnalyzeSingleImage_Request",
  _AnalyzeSingleImage_Request__cdr_serialize,
  _AnalyzeSingleImage_Request__cdr_deserialize,
  _AnalyzeSingleImage_Request__get_serialized_size,
  _AnalyzeSingleImage_Request__max_serialized_size
};

static rosidl_message_type_support_t _AnalyzeSingleImage_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AnalyzeSingleImage_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, apriltag_ros2, srv, AnalyzeSingleImage_Request)() {
  return &_AnalyzeSingleImage_Request__type_support;
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
// #include "apriltag_ros2/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "apriltag_ros2/srv/detail/analyze_single_image__struct.h"
// already included above
// #include "apriltag_ros2/srv/detail/analyze_single_image__functions.h"
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

#include "apriltag_ros2/msg/detail/april_tag_detection_array__functions.h"  // tag_detections

// forward declare type support functions
size_t get_serialized_size_apriltag_ros2__msg__AprilTagDetectionArray(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_apriltag_ros2__msg__AprilTagDetectionArray(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, apriltag_ros2, msg, AprilTagDetectionArray)();


using _AnalyzeSingleImage_Response__ros_msg_type = apriltag_ros2__srv__AnalyzeSingleImage_Response;

static bool _AnalyzeSingleImage_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _AnalyzeSingleImage_Response__ros_msg_type * ros_message = static_cast<const _AnalyzeSingleImage_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: tag_detections
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, apriltag_ros2, msg, AprilTagDetectionArray
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->tag_detections, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _AnalyzeSingleImage_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _AnalyzeSingleImage_Response__ros_msg_type * ros_message = static_cast<_AnalyzeSingleImage_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: tag_detections
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, apriltag_ros2, msg, AprilTagDetectionArray
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->tag_detections))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_apriltag_ros2
size_t get_serialized_size_apriltag_ros2__srv__AnalyzeSingleImage_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AnalyzeSingleImage_Response__ros_msg_type * ros_message = static_cast<const _AnalyzeSingleImage_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name tag_detections

  current_alignment += get_serialized_size_apriltag_ros2__msg__AprilTagDetectionArray(
    &(ros_message->tag_detections), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _AnalyzeSingleImage_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_apriltag_ros2__srv__AnalyzeSingleImage_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_apriltag_ros2
size_t max_serialized_size_apriltag_ros2__srv__AnalyzeSingleImage_Response(
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

  // member: tag_detections
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_apriltag_ros2__msg__AprilTagDetectionArray(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _AnalyzeSingleImage_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_apriltag_ros2__srv__AnalyzeSingleImage_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_AnalyzeSingleImage_Response = {
  "apriltag_ros2::srv",
  "AnalyzeSingleImage_Response",
  _AnalyzeSingleImage_Response__cdr_serialize,
  _AnalyzeSingleImage_Response__cdr_deserialize,
  _AnalyzeSingleImage_Response__get_serialized_size,
  _AnalyzeSingleImage_Response__max_serialized_size
};

static rosidl_message_type_support_t _AnalyzeSingleImage_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AnalyzeSingleImage_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, apriltag_ros2, srv, AnalyzeSingleImage_Response)() {
  return &_AnalyzeSingleImage_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "apriltag_ros2/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "apriltag_ros2/srv/analyze_single_image.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t AnalyzeSingleImage__callbacks = {
  "apriltag_ros2::srv",
  "AnalyzeSingleImage",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, apriltag_ros2, srv, AnalyzeSingleImage_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, apriltag_ros2, srv, AnalyzeSingleImage_Response)(),
};

static rosidl_service_type_support_t AnalyzeSingleImage__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &AnalyzeSingleImage__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, apriltag_ros2, srv, AnalyzeSingleImage)() {
  return &AnalyzeSingleImage__handle;
}

#if defined(__cplusplus)
}
#endif
