// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from apriltag_ros2:srv/AnalyzeSingleImage.idl
// generated code does not contain a copyright notice

#ifndef APRILTAG_ROS2__SRV__DETAIL__ANALYZE_SINGLE_IMAGE__STRUCT_H_
#define APRILTAG_ROS2__SRV__DETAIL__ANALYZE_SINGLE_IMAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'full_path_where_to_get_image'
// Member 'full_path_where_to_save_image'
#include "rosidl_runtime_c/string.h"
// Member 'camera_info'
#include "sensor_msgs/msg/detail/camera_info__struct.h"

/// Struct defined in srv/AnalyzeSingleImage in the package apriltag_ros2.
typedef struct apriltag_ros2__srv__AnalyzeSingleImage_Request
{
  rosidl_runtime_c__String full_path_where_to_get_image;
  rosidl_runtime_c__String full_path_where_to_save_image;
  sensor_msgs__msg__CameraInfo camera_info;
} apriltag_ros2__srv__AnalyzeSingleImage_Request;

// Struct for a sequence of apriltag_ros2__srv__AnalyzeSingleImage_Request.
typedef struct apriltag_ros2__srv__AnalyzeSingleImage_Request__Sequence
{
  apriltag_ros2__srv__AnalyzeSingleImage_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} apriltag_ros2__srv__AnalyzeSingleImage_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'tag_detections'
#include "apriltag_ros2/msg/detail/april_tag_detection_array__struct.h"

/// Struct defined in srv/AnalyzeSingleImage in the package apriltag_ros2.
typedef struct apriltag_ros2__srv__AnalyzeSingleImage_Response
{
  apriltag_ros2__msg__AprilTagDetectionArray tag_detections;
} apriltag_ros2__srv__AnalyzeSingleImage_Response;

// Struct for a sequence of apriltag_ros2__srv__AnalyzeSingleImage_Response.
typedef struct apriltag_ros2__srv__AnalyzeSingleImage_Response__Sequence
{
  apriltag_ros2__srv__AnalyzeSingleImage_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} apriltag_ros2__srv__AnalyzeSingleImage_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // APRILTAG_ROS2__SRV__DETAIL__ANALYZE_SINGLE_IMAGE__STRUCT_H_
