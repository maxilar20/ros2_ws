// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from apriltag_ros2:srv/AnalyzeSingleImage.idl
// generated code does not contain a copyright notice
#include "apriltag_ros2/srv/detail/analyze_single_image__rosidl_typesupport_fastrtps_cpp.hpp"
#include "apriltag_ros2/srv/detail/analyze_single_image__struct.hpp"

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
namespace sensor_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const sensor_msgs::msg::CameraInfo &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  sensor_msgs::msg::CameraInfo &);
size_t get_serialized_size(
  const sensor_msgs::msg::CameraInfo &,
  size_t current_alignment);
size_t
max_serialized_size_CameraInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace sensor_msgs


namespace apriltag_ros2
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_apriltag_ros2
cdr_serialize(
  const apriltag_ros2::srv::AnalyzeSingleImage_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: full_path_where_to_get_image
  cdr << ros_message.full_path_where_to_get_image;
  // Member: full_path_where_to_save_image
  cdr << ros_message.full_path_where_to_save_image;
  // Member: camera_info
  sensor_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.camera_info,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_apriltag_ros2
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  apriltag_ros2::srv::AnalyzeSingleImage_Request & ros_message)
{
  // Member: full_path_where_to_get_image
  cdr >> ros_message.full_path_where_to_get_image;

  // Member: full_path_where_to_save_image
  cdr >> ros_message.full_path_where_to_save_image;

  // Member: camera_info
  sensor_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.camera_info);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_apriltag_ros2
get_serialized_size(
  const apriltag_ros2::srv::AnalyzeSingleImage_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: full_path_where_to_get_image
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.full_path_where_to_get_image.size() + 1);
  // Member: full_path_where_to_save_image
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.full_path_where_to_save_image.size() + 1);
  // Member: camera_info

  current_alignment +=
    sensor_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.camera_info, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_apriltag_ros2
max_serialized_size_AnalyzeSingleImage_Request(
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


  // Member: full_path_where_to_get_image
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

  // Member: full_path_where_to_save_image
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

  // Member: camera_info
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        sensor_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_CameraInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _AnalyzeSingleImage_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const apriltag_ros2::srv::AnalyzeSingleImage_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _AnalyzeSingleImage_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<apriltag_ros2::srv::AnalyzeSingleImage_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _AnalyzeSingleImage_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const apriltag_ros2::srv::AnalyzeSingleImage_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _AnalyzeSingleImage_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_AnalyzeSingleImage_Request(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _AnalyzeSingleImage_Request__callbacks = {
  "apriltag_ros2::srv",
  "AnalyzeSingleImage_Request",
  _AnalyzeSingleImage_Request__cdr_serialize,
  _AnalyzeSingleImage_Request__cdr_deserialize,
  _AnalyzeSingleImage_Request__get_serialized_size,
  _AnalyzeSingleImage_Request__max_serialized_size
};

static rosidl_message_type_support_t _AnalyzeSingleImage_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_AnalyzeSingleImage_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace apriltag_ros2

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_apriltag_ros2
const rosidl_message_type_support_t *
get_message_type_support_handle<apriltag_ros2::srv::AnalyzeSingleImage_Request>()
{
  return &apriltag_ros2::srv::typesupport_fastrtps_cpp::_AnalyzeSingleImage_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, apriltag_ros2, srv, AnalyzeSingleImage_Request)() {
  return &apriltag_ros2::srv::typesupport_fastrtps_cpp::_AnalyzeSingleImage_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace apriltag_ros2
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const apriltag_ros2::msg::AprilTagDetectionArray &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  apriltag_ros2::msg::AprilTagDetectionArray &);
size_t get_serialized_size(
  const apriltag_ros2::msg::AprilTagDetectionArray &,
  size_t current_alignment);
size_t
max_serialized_size_AprilTagDetectionArray(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace apriltag_ros2


namespace apriltag_ros2
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_apriltag_ros2
cdr_serialize(
  const apriltag_ros2::srv::AnalyzeSingleImage_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: tag_detections
  apriltag_ros2::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.tag_detections,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_apriltag_ros2
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  apriltag_ros2::srv::AnalyzeSingleImage_Response & ros_message)
{
  // Member: tag_detections
  apriltag_ros2::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.tag_detections);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_apriltag_ros2
get_serialized_size(
  const apriltag_ros2::srv::AnalyzeSingleImage_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: tag_detections

  current_alignment +=
    apriltag_ros2::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.tag_detections, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_apriltag_ros2
max_serialized_size_AnalyzeSingleImage_Response(
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


  // Member: tag_detections
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        apriltag_ros2::msg::typesupport_fastrtps_cpp::max_serialized_size_AprilTagDetectionArray(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _AnalyzeSingleImage_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const apriltag_ros2::srv::AnalyzeSingleImage_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _AnalyzeSingleImage_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<apriltag_ros2::srv::AnalyzeSingleImage_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _AnalyzeSingleImage_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const apriltag_ros2::srv::AnalyzeSingleImage_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _AnalyzeSingleImage_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_AnalyzeSingleImage_Response(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _AnalyzeSingleImage_Response__callbacks = {
  "apriltag_ros2::srv",
  "AnalyzeSingleImage_Response",
  _AnalyzeSingleImage_Response__cdr_serialize,
  _AnalyzeSingleImage_Response__cdr_deserialize,
  _AnalyzeSingleImage_Response__get_serialized_size,
  _AnalyzeSingleImage_Response__max_serialized_size
};

static rosidl_message_type_support_t _AnalyzeSingleImage_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_AnalyzeSingleImage_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace apriltag_ros2

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_apriltag_ros2
const rosidl_message_type_support_t *
get_message_type_support_handle<apriltag_ros2::srv::AnalyzeSingleImage_Response>()
{
  return &apriltag_ros2::srv::typesupport_fastrtps_cpp::_AnalyzeSingleImage_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, apriltag_ros2, srv, AnalyzeSingleImage_Response)() {
  return &apriltag_ros2::srv::typesupport_fastrtps_cpp::_AnalyzeSingleImage_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace apriltag_ros2
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _AnalyzeSingleImage__callbacks = {
  "apriltag_ros2::srv",
  "AnalyzeSingleImage",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, apriltag_ros2, srv, AnalyzeSingleImage_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, apriltag_ros2, srv, AnalyzeSingleImage_Response)(),
};

static rosidl_service_type_support_t _AnalyzeSingleImage__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_AnalyzeSingleImage__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace apriltag_ros2

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_apriltag_ros2
const rosidl_service_type_support_t *
get_service_type_support_handle<apriltag_ros2::srv::AnalyzeSingleImage>()
{
  return &apriltag_ros2::srv::typesupport_fastrtps_cpp::_AnalyzeSingleImage__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, apriltag_ros2, srv, AnalyzeSingleImage)() {
  return &apriltag_ros2::srv::typesupport_fastrtps_cpp::_AnalyzeSingleImage__handle;
}

#ifdef __cplusplus
}
#endif
