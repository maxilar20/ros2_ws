// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from baxter_core_msgs:msg/EndEffectorCommand.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "baxter_core_msgs/msg/detail/end_effector_command__rosidl_typesupport_introspection_c.h"
#include "baxter_core_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "baxter_core_msgs/msg/detail/end_effector_command__functions.h"
#include "baxter_core_msgs/msg/detail/end_effector_command__struct.h"


// Include directives for member types
// Member `command`
// Member `args`
// Member `sender`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void baxter_core_msgs__msg__EndEffectorCommand__rosidl_typesupport_introspection_c__EndEffectorCommand_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  baxter_core_msgs__msg__EndEffectorCommand__init(message_memory);
}

void baxter_core_msgs__msg__EndEffectorCommand__rosidl_typesupport_introspection_c__EndEffectorCommand_fini_function(void * message_memory)
{
  baxter_core_msgs__msg__EndEffectorCommand__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember baxter_core_msgs__msg__EndEffectorCommand__rosidl_typesupport_introspection_c__EndEffectorCommand_message_member_array[5] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(baxter_core_msgs__msg__EndEffectorCommand, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "command",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(baxter_core_msgs__msg__EndEffectorCommand, command),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "args",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(baxter_core_msgs__msg__EndEffectorCommand, args),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sender",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(baxter_core_msgs__msg__EndEffectorCommand, sender),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sequence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(baxter_core_msgs__msg__EndEffectorCommand, sequence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers baxter_core_msgs__msg__EndEffectorCommand__rosidl_typesupport_introspection_c__EndEffectorCommand_message_members = {
  "baxter_core_msgs__msg",  // message namespace
  "EndEffectorCommand",  // message name
  5,  // number of fields
  sizeof(baxter_core_msgs__msg__EndEffectorCommand),
  baxter_core_msgs__msg__EndEffectorCommand__rosidl_typesupport_introspection_c__EndEffectorCommand_message_member_array,  // message members
  baxter_core_msgs__msg__EndEffectorCommand__rosidl_typesupport_introspection_c__EndEffectorCommand_init_function,  // function to initialize message memory (memory has to be allocated)
  baxter_core_msgs__msg__EndEffectorCommand__rosidl_typesupport_introspection_c__EndEffectorCommand_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t baxter_core_msgs__msg__EndEffectorCommand__rosidl_typesupport_introspection_c__EndEffectorCommand_message_type_support_handle = {
  0,
  &baxter_core_msgs__msg__EndEffectorCommand__rosidl_typesupport_introspection_c__EndEffectorCommand_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_baxter_core_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, baxter_core_msgs, msg, EndEffectorCommand)() {
  if (!baxter_core_msgs__msg__EndEffectorCommand__rosidl_typesupport_introspection_c__EndEffectorCommand_message_type_support_handle.typesupport_identifier) {
    baxter_core_msgs__msg__EndEffectorCommand__rosidl_typesupport_introspection_c__EndEffectorCommand_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &baxter_core_msgs__msg__EndEffectorCommand__rosidl_typesupport_introspection_c__EndEffectorCommand_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
