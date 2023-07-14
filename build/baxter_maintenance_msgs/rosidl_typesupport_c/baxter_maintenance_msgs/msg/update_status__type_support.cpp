// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from baxter_maintenance_msgs:msg/UpdateStatus.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "baxter_maintenance_msgs/msg/detail/update_status__struct.h"
#include "baxter_maintenance_msgs/msg/detail/update_status__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace baxter_maintenance_msgs
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _UpdateStatus_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _UpdateStatus_type_support_ids_t;

static const _UpdateStatus_type_support_ids_t _UpdateStatus_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _UpdateStatus_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _UpdateStatus_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _UpdateStatus_type_support_symbol_names_t _UpdateStatus_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, baxter_maintenance_msgs, msg, UpdateStatus)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, baxter_maintenance_msgs, msg, UpdateStatus)),
  }
};

typedef struct _UpdateStatus_type_support_data_t
{
  void * data[2];
} _UpdateStatus_type_support_data_t;

static _UpdateStatus_type_support_data_t _UpdateStatus_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _UpdateStatus_message_typesupport_map = {
  2,
  "baxter_maintenance_msgs",
  &_UpdateStatus_message_typesupport_ids.typesupport_identifier[0],
  &_UpdateStatus_message_typesupport_symbol_names.symbol_name[0],
  &_UpdateStatus_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t UpdateStatus_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_UpdateStatus_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace baxter_maintenance_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, baxter_maintenance_msgs, msg, UpdateStatus)() {
  return &::baxter_maintenance_msgs::msg::rosidl_typesupport_c::UpdateStatus_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
