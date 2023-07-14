// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from apriltag_ros2:srv/AnalyzeSingleImage.idl
// generated code does not contain a copyright notice

#ifndef APRILTAG_ROS2__SRV__DETAIL__ANALYZE_SINGLE_IMAGE__BUILDER_HPP_
#define APRILTAG_ROS2__SRV__DETAIL__ANALYZE_SINGLE_IMAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "apriltag_ros2/srv/detail/analyze_single_image__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace apriltag_ros2
{

namespace srv
{

namespace builder
{

class Init_AnalyzeSingleImage_Request_camera_info
{
public:
  explicit Init_AnalyzeSingleImage_Request_camera_info(::apriltag_ros2::srv::AnalyzeSingleImage_Request & msg)
  : msg_(msg)
  {}
  ::apriltag_ros2::srv::AnalyzeSingleImage_Request camera_info(::apriltag_ros2::srv::AnalyzeSingleImage_Request::_camera_info_type arg)
  {
    msg_.camera_info = std::move(arg);
    return std::move(msg_);
  }

private:
  ::apriltag_ros2::srv::AnalyzeSingleImage_Request msg_;
};

class Init_AnalyzeSingleImage_Request_full_path_where_to_save_image
{
public:
  explicit Init_AnalyzeSingleImage_Request_full_path_where_to_save_image(::apriltag_ros2::srv::AnalyzeSingleImage_Request & msg)
  : msg_(msg)
  {}
  Init_AnalyzeSingleImage_Request_camera_info full_path_where_to_save_image(::apriltag_ros2::srv::AnalyzeSingleImage_Request::_full_path_where_to_save_image_type arg)
  {
    msg_.full_path_where_to_save_image = std::move(arg);
    return Init_AnalyzeSingleImage_Request_camera_info(msg_);
  }

private:
  ::apriltag_ros2::srv::AnalyzeSingleImage_Request msg_;
};

class Init_AnalyzeSingleImage_Request_full_path_where_to_get_image
{
public:
  Init_AnalyzeSingleImage_Request_full_path_where_to_get_image()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AnalyzeSingleImage_Request_full_path_where_to_save_image full_path_where_to_get_image(::apriltag_ros2::srv::AnalyzeSingleImage_Request::_full_path_where_to_get_image_type arg)
  {
    msg_.full_path_where_to_get_image = std::move(arg);
    return Init_AnalyzeSingleImage_Request_full_path_where_to_save_image(msg_);
  }

private:
  ::apriltag_ros2::srv::AnalyzeSingleImage_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::apriltag_ros2::srv::AnalyzeSingleImage_Request>()
{
  return apriltag_ros2::srv::builder::Init_AnalyzeSingleImage_Request_full_path_where_to_get_image();
}

}  // namespace apriltag_ros2


namespace apriltag_ros2
{

namespace srv
{

namespace builder
{

class Init_AnalyzeSingleImage_Response_tag_detections
{
public:
  Init_AnalyzeSingleImage_Response_tag_detections()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::apriltag_ros2::srv::AnalyzeSingleImage_Response tag_detections(::apriltag_ros2::srv::AnalyzeSingleImage_Response::_tag_detections_type arg)
  {
    msg_.tag_detections = std::move(arg);
    return std::move(msg_);
  }

private:
  ::apriltag_ros2::srv::AnalyzeSingleImage_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::apriltag_ros2::srv::AnalyzeSingleImage_Response>()
{
  return apriltag_ros2::srv::builder::Init_AnalyzeSingleImage_Response_tag_detections();
}

}  // namespace apriltag_ros2

#endif  // APRILTAG_ROS2__SRV__DETAIL__ANALYZE_SINGLE_IMAGE__BUILDER_HPP_
