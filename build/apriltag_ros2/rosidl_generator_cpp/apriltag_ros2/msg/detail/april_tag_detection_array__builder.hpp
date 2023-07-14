// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from apriltag_ros2:msg/AprilTagDetectionArray.idl
// generated code does not contain a copyright notice

#ifndef APRILTAG_ROS2__MSG__DETAIL__APRIL_TAG_DETECTION_ARRAY__BUILDER_HPP_
#define APRILTAG_ROS2__MSG__DETAIL__APRIL_TAG_DETECTION_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "apriltag_ros2/msg/detail/april_tag_detection_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace apriltag_ros2
{

namespace msg
{

namespace builder
{

class Init_AprilTagDetectionArray_detections
{
public:
  explicit Init_AprilTagDetectionArray_detections(::apriltag_ros2::msg::AprilTagDetectionArray & msg)
  : msg_(msg)
  {}
  ::apriltag_ros2::msg::AprilTagDetectionArray detections(::apriltag_ros2::msg::AprilTagDetectionArray::_detections_type arg)
  {
    msg_.detections = std::move(arg);
    return std::move(msg_);
  }

private:
  ::apriltag_ros2::msg::AprilTagDetectionArray msg_;
};

class Init_AprilTagDetectionArray_header
{
public:
  Init_AprilTagDetectionArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AprilTagDetectionArray_detections header(::apriltag_ros2::msg::AprilTagDetectionArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_AprilTagDetectionArray_detections(msg_);
  }

private:
  ::apriltag_ros2::msg::AprilTagDetectionArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::apriltag_ros2::msg::AprilTagDetectionArray>()
{
  return apriltag_ros2::msg::builder::Init_AprilTagDetectionArray_header();
}

}  // namespace apriltag_ros2

#endif  // APRILTAG_ROS2__MSG__DETAIL__APRIL_TAG_DETECTION_ARRAY__BUILDER_HPP_
