// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from apriltag_ros2:srv/AnalyzeSingleImage.idl
// generated code does not contain a copyright notice

#ifndef APRILTAG_ROS2__SRV__DETAIL__ANALYZE_SINGLE_IMAGE__TRAITS_HPP_
#define APRILTAG_ROS2__SRV__DETAIL__ANALYZE_SINGLE_IMAGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "apriltag_ros2/srv/detail/analyze_single_image__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'camera_info'
#include "sensor_msgs/msg/detail/camera_info__traits.hpp"

namespace apriltag_ros2
{

namespace srv
{

inline void to_flow_style_yaml(
  const AnalyzeSingleImage_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: full_path_where_to_get_image
  {
    out << "full_path_where_to_get_image: ";
    rosidl_generator_traits::value_to_yaml(msg.full_path_where_to_get_image, out);
    out << ", ";
  }

  // member: full_path_where_to_save_image
  {
    out << "full_path_where_to_save_image: ";
    rosidl_generator_traits::value_to_yaml(msg.full_path_where_to_save_image, out);
    out << ", ";
  }

  // member: camera_info
  {
    out << "camera_info: ";
    to_flow_style_yaml(msg.camera_info, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AnalyzeSingleImage_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: full_path_where_to_get_image
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "full_path_where_to_get_image: ";
    rosidl_generator_traits::value_to_yaml(msg.full_path_where_to_get_image, out);
    out << "\n";
  }

  // member: full_path_where_to_save_image
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "full_path_where_to_save_image: ";
    rosidl_generator_traits::value_to_yaml(msg.full_path_where_to_save_image, out);
    out << "\n";
  }

  // member: camera_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "camera_info:\n";
    to_block_style_yaml(msg.camera_info, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AnalyzeSingleImage_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace apriltag_ros2

namespace rosidl_generator_traits
{

[[deprecated("use apriltag_ros2::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const apriltag_ros2::srv::AnalyzeSingleImage_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  apriltag_ros2::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use apriltag_ros2::srv::to_yaml() instead")]]
inline std::string to_yaml(const apriltag_ros2::srv::AnalyzeSingleImage_Request & msg)
{
  return apriltag_ros2::srv::to_yaml(msg);
}

template<>
inline const char * data_type<apriltag_ros2::srv::AnalyzeSingleImage_Request>()
{
  return "apriltag_ros2::srv::AnalyzeSingleImage_Request";
}

template<>
inline const char * name<apriltag_ros2::srv::AnalyzeSingleImage_Request>()
{
  return "apriltag_ros2/srv/AnalyzeSingleImage_Request";
}

template<>
struct has_fixed_size<apriltag_ros2::srv::AnalyzeSingleImage_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<apriltag_ros2::srv::AnalyzeSingleImage_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<apriltag_ros2::srv::AnalyzeSingleImage_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'tag_detections'
#include "apriltag_ros2/msg/detail/april_tag_detection_array__traits.hpp"

namespace apriltag_ros2
{

namespace srv
{

inline void to_flow_style_yaml(
  const AnalyzeSingleImage_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: tag_detections
  {
    out << "tag_detections: ";
    to_flow_style_yaml(msg.tag_detections, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AnalyzeSingleImage_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: tag_detections
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tag_detections:\n";
    to_block_style_yaml(msg.tag_detections, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AnalyzeSingleImage_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace apriltag_ros2

namespace rosidl_generator_traits
{

[[deprecated("use apriltag_ros2::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const apriltag_ros2::srv::AnalyzeSingleImage_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  apriltag_ros2::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use apriltag_ros2::srv::to_yaml() instead")]]
inline std::string to_yaml(const apriltag_ros2::srv::AnalyzeSingleImage_Response & msg)
{
  return apriltag_ros2::srv::to_yaml(msg);
}

template<>
inline const char * data_type<apriltag_ros2::srv::AnalyzeSingleImage_Response>()
{
  return "apriltag_ros2::srv::AnalyzeSingleImage_Response";
}

template<>
inline const char * name<apriltag_ros2::srv::AnalyzeSingleImage_Response>()
{
  return "apriltag_ros2/srv/AnalyzeSingleImage_Response";
}

template<>
struct has_fixed_size<apriltag_ros2::srv::AnalyzeSingleImage_Response>
  : std::integral_constant<bool, has_fixed_size<apriltag_ros2::msg::AprilTagDetectionArray>::value> {};

template<>
struct has_bounded_size<apriltag_ros2::srv::AnalyzeSingleImage_Response>
  : std::integral_constant<bool, has_bounded_size<apriltag_ros2::msg::AprilTagDetectionArray>::value> {};

template<>
struct is_message<apriltag_ros2::srv::AnalyzeSingleImage_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<apriltag_ros2::srv::AnalyzeSingleImage>()
{
  return "apriltag_ros2::srv::AnalyzeSingleImage";
}

template<>
inline const char * name<apriltag_ros2::srv::AnalyzeSingleImage>()
{
  return "apriltag_ros2/srv/AnalyzeSingleImage";
}

template<>
struct has_fixed_size<apriltag_ros2::srv::AnalyzeSingleImage>
  : std::integral_constant<
    bool,
    has_fixed_size<apriltag_ros2::srv::AnalyzeSingleImage_Request>::value &&
    has_fixed_size<apriltag_ros2::srv::AnalyzeSingleImage_Response>::value
  >
{
};

template<>
struct has_bounded_size<apriltag_ros2::srv::AnalyzeSingleImage>
  : std::integral_constant<
    bool,
    has_bounded_size<apriltag_ros2::srv::AnalyzeSingleImage_Request>::value &&
    has_bounded_size<apriltag_ros2::srv::AnalyzeSingleImage_Response>::value
  >
{
};

template<>
struct is_service<apriltag_ros2::srv::AnalyzeSingleImage>
  : std::true_type
{
};

template<>
struct is_service_request<apriltag_ros2::srv::AnalyzeSingleImage_Request>
  : std::true_type
{
};

template<>
struct is_service_response<apriltag_ros2::srv::AnalyzeSingleImage_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // APRILTAG_ROS2__SRV__DETAIL__ANALYZE_SINGLE_IMAGE__TRAITS_HPP_
