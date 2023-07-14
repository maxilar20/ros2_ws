// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from baxter_core_msgs:srv/ListCameras.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "baxter_core_msgs/srv/detail/list_cameras__rosidl_typesupport_introspection_c.h"
#include "baxter_core_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "baxter_core_msgs/srv/detail/list_cameras__functions.h"
#include "baxter_core_msgs/srv/detail/list_cameras__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void baxter_core_msgs__srv__ListCameras_Request__rosidl_typesupport_introspection_c__ListCameras_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  baxter_core_msgs__srv__ListCameras_Request__init(message_memory);
}

void baxter_core_msgs__srv__ListCameras_Request__rosidl_typesupport_introspection_c__ListCameras_Request_fini_function(void * message_memory)
{
  baxter_core_msgs__srv__ListCameras_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember baxter_core_msgs__srv__ListCameras_Request__rosidl_typesupport_introspection_c__ListCameras_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(baxter_core_msgs__srv__ListCameras_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers baxter_core_msgs__srv__ListCameras_Request__rosidl_typesupport_introspection_c__ListCameras_Request_message_members = {
  "baxter_core_msgs__srv",  // message namespace
  "ListCameras_Request",  // message name
  1,  // number of fields
  sizeof(baxter_core_msgs__srv__ListCameras_Request),
  baxter_core_msgs__srv__ListCameras_Request__rosidl_typesupport_introspection_c__ListCameras_Request_message_member_array,  // message members
  baxter_core_msgs__srv__ListCameras_Request__rosidl_typesupport_introspection_c__ListCameras_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  baxter_core_msgs__srv__ListCameras_Request__rosidl_typesupport_introspection_c__ListCameras_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t baxter_core_msgs__srv__ListCameras_Request__rosidl_typesupport_introspection_c__ListCameras_Request_message_type_support_handle = {
  0,
  &baxter_core_msgs__srv__ListCameras_Request__rosidl_typesupport_introspection_c__ListCameras_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_baxter_core_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, baxter_core_msgs, srv, ListCameras_Request)() {
  if (!baxter_core_msgs__srv__ListCameras_Request__rosidl_typesupport_introspection_c__ListCameras_Request_message_type_support_handle.typesupport_identifier) {
    baxter_core_msgs__srv__ListCameras_Request__rosidl_typesupport_introspection_c__ListCameras_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &baxter_core_msgs__srv__ListCameras_Request__rosidl_typesupport_introspection_c__ListCameras_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "baxter_core_msgs/srv/detail/list_cameras__rosidl_typesupport_introspection_c.h"
// already included above
// #include "baxter_core_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "baxter_core_msgs/srv/detail/list_cameras__functions.h"
// already included above
// #include "baxter_core_msgs/srv/detail/list_cameras__struct.h"


// Include directives for member types
// Member `cameras`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void baxter_core_msgs__srv__ListCameras_Response__rosidl_typesupport_introspection_c__ListCameras_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  baxter_core_msgs__srv__ListCameras_Response__init(message_memory);
}

void baxter_core_msgs__srv__ListCameras_Response__rosidl_typesupport_introspection_c__ListCameras_Response_fini_function(void * message_memory)
{
  baxter_core_msgs__srv__ListCameras_Response__fini(message_memory);
}

size_t baxter_core_msgs__srv__ListCameras_Response__rosidl_typesupport_introspection_c__size_function__ListCameras_Response__cameras(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * baxter_core_msgs__srv__ListCameras_Response__rosidl_typesupport_introspection_c__get_const_function__ListCameras_Response__cameras(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * baxter_core_msgs__srv__ListCameras_Response__rosidl_typesupport_introspection_c__get_function__ListCameras_Response__cameras(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void baxter_core_msgs__srv__ListCameras_Response__rosidl_typesupport_introspection_c__fetch_function__ListCameras_Response__cameras(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    baxter_core_msgs__srv__ListCameras_Response__rosidl_typesupport_introspection_c__get_const_function__ListCameras_Response__cameras(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void baxter_core_msgs__srv__ListCameras_Response__rosidl_typesupport_introspection_c__assign_function__ListCameras_Response__cameras(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    baxter_core_msgs__srv__ListCameras_Response__rosidl_typesupport_introspection_c__get_function__ListCameras_Response__cameras(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool baxter_core_msgs__srv__ListCameras_Response__rosidl_typesupport_introspection_c__resize_function__ListCameras_Response__cameras(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember baxter_core_msgs__srv__ListCameras_Response__rosidl_typesupport_introspection_c__ListCameras_Response_message_member_array[1] = {
  {
    "cameras",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(baxter_core_msgs__srv__ListCameras_Response, cameras),  // bytes offset in struct
    NULL,  // default value
    baxter_core_msgs__srv__ListCameras_Response__rosidl_typesupport_introspection_c__size_function__ListCameras_Response__cameras,  // size() function pointer
    baxter_core_msgs__srv__ListCameras_Response__rosidl_typesupport_introspection_c__get_const_function__ListCameras_Response__cameras,  // get_const(index) function pointer
    baxter_core_msgs__srv__ListCameras_Response__rosidl_typesupport_introspection_c__get_function__ListCameras_Response__cameras,  // get(index) function pointer
    baxter_core_msgs__srv__ListCameras_Response__rosidl_typesupport_introspection_c__fetch_function__ListCameras_Response__cameras,  // fetch(index, &value) function pointer
    baxter_core_msgs__srv__ListCameras_Response__rosidl_typesupport_introspection_c__assign_function__ListCameras_Response__cameras,  // assign(index, value) function pointer
    baxter_core_msgs__srv__ListCameras_Response__rosidl_typesupport_introspection_c__resize_function__ListCameras_Response__cameras  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers baxter_core_msgs__srv__ListCameras_Response__rosidl_typesupport_introspection_c__ListCameras_Response_message_members = {
  "baxter_core_msgs__srv",  // message namespace
  "ListCameras_Response",  // message name
  1,  // number of fields
  sizeof(baxter_core_msgs__srv__ListCameras_Response),
  baxter_core_msgs__srv__ListCameras_Response__rosidl_typesupport_introspection_c__ListCameras_Response_message_member_array,  // message members
  baxter_core_msgs__srv__ListCameras_Response__rosidl_typesupport_introspection_c__ListCameras_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  baxter_core_msgs__srv__ListCameras_Response__rosidl_typesupport_introspection_c__ListCameras_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t baxter_core_msgs__srv__ListCameras_Response__rosidl_typesupport_introspection_c__ListCameras_Response_message_type_support_handle = {
  0,
  &baxter_core_msgs__srv__ListCameras_Response__rosidl_typesupport_introspection_c__ListCameras_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_baxter_core_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, baxter_core_msgs, srv, ListCameras_Response)() {
  if (!baxter_core_msgs__srv__ListCameras_Response__rosidl_typesupport_introspection_c__ListCameras_Response_message_type_support_handle.typesupport_identifier) {
    baxter_core_msgs__srv__ListCameras_Response__rosidl_typesupport_introspection_c__ListCameras_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &baxter_core_msgs__srv__ListCameras_Response__rosidl_typesupport_introspection_c__ListCameras_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "baxter_core_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "baxter_core_msgs/srv/detail/list_cameras__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers baxter_core_msgs__srv__detail__list_cameras__rosidl_typesupport_introspection_c__ListCameras_service_members = {
  "baxter_core_msgs__srv",  // service namespace
  "ListCameras",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // baxter_core_msgs__srv__detail__list_cameras__rosidl_typesupport_introspection_c__ListCameras_Request_message_type_support_handle,
  NULL  // response message
  // baxter_core_msgs__srv__detail__list_cameras__rosidl_typesupport_introspection_c__ListCameras_Response_message_type_support_handle
};

static rosidl_service_type_support_t baxter_core_msgs__srv__detail__list_cameras__rosidl_typesupport_introspection_c__ListCameras_service_type_support_handle = {
  0,
  &baxter_core_msgs__srv__detail__list_cameras__rosidl_typesupport_introspection_c__ListCameras_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, baxter_core_msgs, srv, ListCameras_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, baxter_core_msgs, srv, ListCameras_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_baxter_core_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, baxter_core_msgs, srv, ListCameras)() {
  if (!baxter_core_msgs__srv__detail__list_cameras__rosidl_typesupport_introspection_c__ListCameras_service_type_support_handle.typesupport_identifier) {
    baxter_core_msgs__srv__detail__list_cameras__rosidl_typesupport_introspection_c__ListCameras_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)baxter_core_msgs__srv__detail__list_cameras__rosidl_typesupport_introspection_c__ListCameras_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, baxter_core_msgs, srv, ListCameras_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, baxter_core_msgs, srv, ListCameras_Response)()->data;
  }

  return &baxter_core_msgs__srv__detail__list_cameras__rosidl_typesupport_introspection_c__ListCameras_service_type_support_handle;
}
