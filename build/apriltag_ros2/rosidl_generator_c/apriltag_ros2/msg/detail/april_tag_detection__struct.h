// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from apriltag_ros2:msg/AprilTagDetection.idl
// generated code does not contain a copyright notice

#ifndef APRILTAG_ROS2__MSG__DETAIL__APRIL_TAG_DETECTION__STRUCT_H_
#define APRILTAG_ROS2__MSG__DETAIL__APRIL_TAG_DETECTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'id'
// Member 'size'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_with_covariance_stamped__struct.h"

/// Struct defined in msg/AprilTagDetection in the package apriltag_ros2.
/**
  * Tag ID(s). If a standalone tag, this is a vector of size 1. If a tag bundle,
  * this is a vector containing the IDs of each tag in the bundle.
 */
typedef struct apriltag_ros2__msg__AprilTagDetection
{
  rosidl_runtime_c__int32__Sequence id;
  /// Tag size(s). If a standalone tag, this is a vector of size 1. If a tag bundle,
  /// this is a vector containing the sizes of each tag in the bundle, in the same
  /// order as the IDs above.
  rosidl_runtime_c__double__Sequence size;
  /// Pose in the camera frame, obtained from homography transform. If a standalone
  /// tag, the homography is from the four tag corners. If a tag bundle, the
  /// homography is from at least the four corners of one member tag and at most the
  /// four corners of all member tags.
  geometry_msgs__msg__PoseWithCovarianceStamped pose;
} apriltag_ros2__msg__AprilTagDetection;

// Struct for a sequence of apriltag_ros2__msg__AprilTagDetection.
typedef struct apriltag_ros2__msg__AprilTagDetection__Sequence
{
  apriltag_ros2__msg__AprilTagDetection * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} apriltag_ros2__msg__AprilTagDetection__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // APRILTAG_ROS2__MSG__DETAIL__APRIL_TAG_DETECTION__STRUCT_H_
