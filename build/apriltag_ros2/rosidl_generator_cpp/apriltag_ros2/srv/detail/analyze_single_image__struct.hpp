// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from apriltag_ros2:srv/AnalyzeSingleImage.idl
// generated code does not contain a copyright notice

#ifndef APRILTAG_ROS2__SRV__DETAIL__ANALYZE_SINGLE_IMAGE__STRUCT_HPP_
#define APRILTAG_ROS2__SRV__DETAIL__ANALYZE_SINGLE_IMAGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'camera_info'
#include "sensor_msgs/msg/detail/camera_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__apriltag_ros2__srv__AnalyzeSingleImage_Request __attribute__((deprecated))
#else
# define DEPRECATED__apriltag_ros2__srv__AnalyzeSingleImage_Request __declspec(deprecated)
#endif

namespace apriltag_ros2
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AnalyzeSingleImage_Request_
{
  using Type = AnalyzeSingleImage_Request_<ContainerAllocator>;

  explicit AnalyzeSingleImage_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : camera_info(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->full_path_where_to_get_image = "";
      this->full_path_where_to_save_image = "";
    }
  }

  explicit AnalyzeSingleImage_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : full_path_where_to_get_image(_alloc),
    full_path_where_to_save_image(_alloc),
    camera_info(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->full_path_where_to_get_image = "";
      this->full_path_where_to_save_image = "";
    }
  }

  // field types and members
  using _full_path_where_to_get_image_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _full_path_where_to_get_image_type full_path_where_to_get_image;
  using _full_path_where_to_save_image_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _full_path_where_to_save_image_type full_path_where_to_save_image;
  using _camera_info_type =
    sensor_msgs::msg::CameraInfo_<ContainerAllocator>;
  _camera_info_type camera_info;

  // setters for named parameter idiom
  Type & set__full_path_where_to_get_image(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->full_path_where_to_get_image = _arg;
    return *this;
  }
  Type & set__full_path_where_to_save_image(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->full_path_where_to_save_image = _arg;
    return *this;
  }
  Type & set__camera_info(
    const sensor_msgs::msg::CameraInfo_<ContainerAllocator> & _arg)
  {
    this->camera_info = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    apriltag_ros2::srv::AnalyzeSingleImage_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const apriltag_ros2::srv::AnalyzeSingleImage_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<apriltag_ros2::srv::AnalyzeSingleImage_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<apriltag_ros2::srv::AnalyzeSingleImage_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      apriltag_ros2::srv::AnalyzeSingleImage_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<apriltag_ros2::srv::AnalyzeSingleImage_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      apriltag_ros2::srv::AnalyzeSingleImage_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<apriltag_ros2::srv::AnalyzeSingleImage_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<apriltag_ros2::srv::AnalyzeSingleImage_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<apriltag_ros2::srv::AnalyzeSingleImage_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__apriltag_ros2__srv__AnalyzeSingleImage_Request
    std::shared_ptr<apriltag_ros2::srv::AnalyzeSingleImage_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__apriltag_ros2__srv__AnalyzeSingleImage_Request
    std::shared_ptr<apriltag_ros2::srv::AnalyzeSingleImage_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AnalyzeSingleImage_Request_ & other) const
  {
    if (this->full_path_where_to_get_image != other.full_path_where_to_get_image) {
      return false;
    }
    if (this->full_path_where_to_save_image != other.full_path_where_to_save_image) {
      return false;
    }
    if (this->camera_info != other.camera_info) {
      return false;
    }
    return true;
  }
  bool operator!=(const AnalyzeSingleImage_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AnalyzeSingleImage_Request_

// alias to use template instance with default allocator
using AnalyzeSingleImage_Request =
  apriltag_ros2::srv::AnalyzeSingleImage_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace apriltag_ros2


// Include directives for member types
// Member 'tag_detections'
#include "apriltag_ros2/msg/detail/april_tag_detection_array__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__apriltag_ros2__srv__AnalyzeSingleImage_Response __attribute__((deprecated))
#else
# define DEPRECATED__apriltag_ros2__srv__AnalyzeSingleImage_Response __declspec(deprecated)
#endif

namespace apriltag_ros2
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AnalyzeSingleImage_Response_
{
  using Type = AnalyzeSingleImage_Response_<ContainerAllocator>;

  explicit AnalyzeSingleImage_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : tag_detections(_init)
  {
    (void)_init;
  }

  explicit AnalyzeSingleImage_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : tag_detections(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _tag_detections_type =
    apriltag_ros2::msg::AprilTagDetectionArray_<ContainerAllocator>;
  _tag_detections_type tag_detections;

  // setters for named parameter idiom
  Type & set__tag_detections(
    const apriltag_ros2::msg::AprilTagDetectionArray_<ContainerAllocator> & _arg)
  {
    this->tag_detections = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    apriltag_ros2::srv::AnalyzeSingleImage_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const apriltag_ros2::srv::AnalyzeSingleImage_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<apriltag_ros2::srv::AnalyzeSingleImage_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<apriltag_ros2::srv::AnalyzeSingleImage_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      apriltag_ros2::srv::AnalyzeSingleImage_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<apriltag_ros2::srv::AnalyzeSingleImage_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      apriltag_ros2::srv::AnalyzeSingleImage_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<apriltag_ros2::srv::AnalyzeSingleImage_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<apriltag_ros2::srv::AnalyzeSingleImage_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<apriltag_ros2::srv::AnalyzeSingleImage_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__apriltag_ros2__srv__AnalyzeSingleImage_Response
    std::shared_ptr<apriltag_ros2::srv::AnalyzeSingleImage_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__apriltag_ros2__srv__AnalyzeSingleImage_Response
    std::shared_ptr<apriltag_ros2::srv::AnalyzeSingleImage_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AnalyzeSingleImage_Response_ & other) const
  {
    if (this->tag_detections != other.tag_detections) {
      return false;
    }
    return true;
  }
  bool operator!=(const AnalyzeSingleImage_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AnalyzeSingleImage_Response_

// alias to use template instance with default allocator
using AnalyzeSingleImage_Response =
  apriltag_ros2::srv::AnalyzeSingleImage_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace apriltag_ros2

namespace apriltag_ros2
{

namespace srv
{

struct AnalyzeSingleImage
{
  using Request = apriltag_ros2::srv::AnalyzeSingleImage_Request;
  using Response = apriltag_ros2::srv::AnalyzeSingleImage_Response;
};

}  // namespace srv

}  // namespace apriltag_ros2

#endif  // APRILTAG_ROS2__SRV__DETAIL__ANALYZE_SINGLE_IMAGE__STRUCT_HPP_
