// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from apriltag_ros2:srv/AnalyzeSingleImage.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "apriltag_ros2/srv/detail/analyze_single_image__rosidl_typesupport_introspection_c.h"
#include "apriltag_ros2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "apriltag_ros2/srv/detail/analyze_single_image__functions.h"
#include "apriltag_ros2/srv/detail/analyze_single_image__struct.h"


// Include directives for member types
// Member `full_path_where_to_get_image`
// Member `full_path_where_to_save_image`
#include "rosidl_runtime_c/string_functions.h"
// Member `camera_info`
#include "sensor_msgs/msg/camera_info.h"
// Member `camera_info`
#include "sensor_msgs/msg/detail/camera_info__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void apriltag_ros2__srv__AnalyzeSingleImage_Request__rosidl_typesupport_introspection_c__AnalyzeSingleImage_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  apriltag_ros2__srv__AnalyzeSingleImage_Request__init(message_memory);
}

void apriltag_ros2__srv__AnalyzeSingleImage_Request__rosidl_typesupport_introspection_c__AnalyzeSingleImage_Request_fini_function(void * message_memory)
{
  apriltag_ros2__srv__AnalyzeSingleImage_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember apriltag_ros2__srv__AnalyzeSingleImage_Request__rosidl_typesupport_introspection_c__AnalyzeSingleImage_Request_message_member_array[3] = {
  {
    "full_path_where_to_get_image",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(apriltag_ros2__srv__AnalyzeSingleImage_Request, full_path_where_to_get_image),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "full_path_where_to_save_image",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(apriltag_ros2__srv__AnalyzeSingleImage_Request, full_path_where_to_save_image),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "camera_info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(apriltag_ros2__srv__AnalyzeSingleImage_Request, camera_info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers apriltag_ros2__srv__AnalyzeSingleImage_Request__rosidl_typesupport_introspection_c__AnalyzeSingleImage_Request_message_members = {
  "apriltag_ros2__srv",  // message namespace
  "AnalyzeSingleImage_Request",  // message name
  3,  // number of fields
  sizeof(apriltag_ros2__srv__AnalyzeSingleImage_Request),
  apriltag_ros2__srv__AnalyzeSingleImage_Request__rosidl_typesupport_introspection_c__AnalyzeSingleImage_Request_message_member_array,  // message members
  apriltag_ros2__srv__AnalyzeSingleImage_Request__rosidl_typesupport_introspection_c__AnalyzeSingleImage_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  apriltag_ros2__srv__AnalyzeSingleImage_Request__rosidl_typesupport_introspection_c__AnalyzeSingleImage_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t apriltag_ros2__srv__AnalyzeSingleImage_Request__rosidl_typesupport_introspection_c__AnalyzeSingleImage_Request_message_type_support_handle = {
  0,
  &apriltag_ros2__srv__AnalyzeSingleImage_Request__rosidl_typesupport_introspection_c__AnalyzeSingleImage_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_apriltag_ros2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, apriltag_ros2, srv, AnalyzeSingleImage_Request)() {
  apriltag_ros2__srv__AnalyzeSingleImage_Request__rosidl_typesupport_introspection_c__AnalyzeSingleImage_Request_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, CameraInfo)();
  if (!apriltag_ros2__srv__AnalyzeSingleImage_Request__rosidl_typesupport_introspection_c__AnalyzeSingleImage_Request_message_type_support_handle.typesupport_identifier) {
    apriltag_ros2__srv__AnalyzeSingleImage_Request__rosidl_typesupport_introspection_c__AnalyzeSingleImage_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &apriltag_ros2__srv__AnalyzeSingleImage_Request__rosidl_typesupport_introspection_c__AnalyzeSingleImage_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "apriltag_ros2/srv/detail/analyze_single_image__rosidl_typesupport_introspection_c.h"
// already included above
// #include "apriltag_ros2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "apriltag_ros2/srv/detail/analyze_single_image__functions.h"
// already included above
// #include "apriltag_ros2/srv/detail/analyze_single_image__struct.h"


// Include directives for member types
// Member `tag_detections`
#include "apriltag_ros2/msg/april_tag_detection_array.h"
// Member `tag_detections`
#include "apriltag_ros2/msg/detail/april_tag_detection_array__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void apriltag_ros2__srv__AnalyzeSingleImage_Response__rosidl_typesupport_introspection_c__AnalyzeSingleImage_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  apriltag_ros2__srv__AnalyzeSingleImage_Response__init(message_memory);
}

void apriltag_ros2__srv__AnalyzeSingleImage_Response__rosidl_typesupport_introspection_c__AnalyzeSingleImage_Response_fini_function(void * message_memory)
{
  apriltag_ros2__srv__AnalyzeSingleImage_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember apriltag_ros2__srv__AnalyzeSingleImage_Response__rosidl_typesupport_introspection_c__AnalyzeSingleImage_Response_message_member_array[1] = {
  {
    "tag_detections",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(apriltag_ros2__srv__AnalyzeSingleImage_Response, tag_detections),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers apriltag_ros2__srv__AnalyzeSingleImage_Response__rosidl_typesupport_introspection_c__AnalyzeSingleImage_Response_message_members = {
  "apriltag_ros2__srv",  // message namespace
  "AnalyzeSingleImage_Response",  // message name
  1,  // number of fields
  sizeof(apriltag_ros2__srv__AnalyzeSingleImage_Response),
  apriltag_ros2__srv__AnalyzeSingleImage_Response__rosidl_typesupport_introspection_c__AnalyzeSingleImage_Response_message_member_array,  // message members
  apriltag_ros2__srv__AnalyzeSingleImage_Response__rosidl_typesupport_introspection_c__AnalyzeSingleImage_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  apriltag_ros2__srv__AnalyzeSingleImage_Response__rosidl_typesupport_introspection_c__AnalyzeSingleImage_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t apriltag_ros2__srv__AnalyzeSingleImage_Response__rosidl_typesupport_introspection_c__AnalyzeSingleImage_Response_message_type_support_handle = {
  0,
  &apriltag_ros2__srv__AnalyzeSingleImage_Response__rosidl_typesupport_introspection_c__AnalyzeSingleImage_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_apriltag_ros2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, apriltag_ros2, srv, AnalyzeSingleImage_Response)() {
  apriltag_ros2__srv__AnalyzeSingleImage_Response__rosidl_typesupport_introspection_c__AnalyzeSingleImage_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, apriltag_ros2, msg, AprilTagDetectionArray)();
  if (!apriltag_ros2__srv__AnalyzeSingleImage_Response__rosidl_typesupport_introspection_c__AnalyzeSingleImage_Response_message_type_support_handle.typesupport_identifier) {
    apriltag_ros2__srv__AnalyzeSingleImage_Response__rosidl_typesupport_introspection_c__AnalyzeSingleImage_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &apriltag_ros2__srv__AnalyzeSingleImage_Response__rosidl_typesupport_introspection_c__AnalyzeSingleImage_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "apriltag_ros2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "apriltag_ros2/srv/detail/analyze_single_image__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers apriltag_ros2__srv__detail__analyze_single_image__rosidl_typesupport_introspection_c__AnalyzeSingleImage_service_members = {
  "apriltag_ros2__srv",  // service namespace
  "AnalyzeSingleImage",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // apriltag_ros2__srv__detail__analyze_single_image__rosidl_typesupport_introspection_c__AnalyzeSingleImage_Request_message_type_support_handle,
  NULL  // response message
  // apriltag_ros2__srv__detail__analyze_single_image__rosidl_typesupport_introspection_c__AnalyzeSingleImage_Response_message_type_support_handle
};

static rosidl_service_type_support_t apriltag_ros2__srv__detail__analyze_single_image__rosidl_typesupport_introspection_c__AnalyzeSingleImage_service_type_support_handle = {
  0,
  &apriltag_ros2__srv__detail__analyze_single_image__rosidl_typesupport_introspection_c__AnalyzeSingleImage_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, apriltag_ros2, srv, AnalyzeSingleImage_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, apriltag_ros2, srv, AnalyzeSingleImage_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_apriltag_ros2
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, apriltag_ros2, srv, AnalyzeSingleImage)() {
  if (!apriltag_ros2__srv__detail__analyze_single_image__rosidl_typesupport_introspection_c__AnalyzeSingleImage_service_type_support_handle.typesupport_identifier) {
    apriltag_ros2__srv__detail__analyze_single_image__rosidl_typesupport_introspection_c__AnalyzeSingleImage_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)apriltag_ros2__srv__detail__analyze_single_image__rosidl_typesupport_introspection_c__AnalyzeSingleImage_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, apriltag_ros2, srv, AnalyzeSingleImage_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, apriltag_ros2, srv, AnalyzeSingleImage_Response)()->data;
  }

  return &apriltag_ros2__srv__detail__analyze_single_image__rosidl_typesupport_introspection_c__AnalyzeSingleImage_service_type_support_handle;
}
