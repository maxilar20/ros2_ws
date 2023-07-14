// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from baxter_maintenance_msgs:msg/UpdateSource.idl
// generated code does not contain a copyright notice
#include "baxter_maintenance_msgs/msg/detail/update_source__rosidl_typesupport_fastrtps_cpp.hpp"
#include "baxter_maintenance_msgs/msg/detail/update_source__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace baxter_maintenance_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_baxter_maintenance_msgs
cdr_serialize(
  const baxter_maintenance_msgs::msg::UpdateSource & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: devname
  cdr << ros_message.devname;
  // Member: filename
  cdr << ros_message.filename;
  // Member: version
  cdr << ros_message.version;
  // Member: uuid
  cdr << ros_message.uuid;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_baxter_maintenance_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  baxter_maintenance_msgs::msg::UpdateSource & ros_message)
{
  // Member: devname
  cdr >> ros_message.devname;

  // Member: filename
  cdr >> ros_message.filename;

  // Member: version
  cdr >> ros_message.version;

  // Member: uuid
  cdr >> ros_message.uuid;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_baxter_maintenance_msgs
get_serialized_size(
  const baxter_maintenance_msgs::msg::UpdateSource & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: devname
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.devname.size() + 1);
  // Member: filename
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.filename.size() + 1);
  // Member: version
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.version.size() + 1);
  // Member: uuid
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.uuid.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_baxter_maintenance_msgs
max_serialized_size_UpdateSource(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: devname
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: filename
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: version
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: uuid
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _UpdateSource__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const baxter_maintenance_msgs::msg::UpdateSource *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _UpdateSource__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<baxter_maintenance_msgs::msg::UpdateSource *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _UpdateSource__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const baxter_maintenance_msgs::msg::UpdateSource *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _UpdateSource__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_UpdateSource(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _UpdateSource__callbacks = {
  "baxter_maintenance_msgs::msg",
  "UpdateSource",
  _UpdateSource__cdr_serialize,
  _UpdateSource__cdr_deserialize,
  _UpdateSource__get_serialized_size,
  _UpdateSource__max_serialized_size
};

static rosidl_message_type_support_t _UpdateSource__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_UpdateSource__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace baxter_maintenance_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_baxter_maintenance_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<baxter_maintenance_msgs::msg::UpdateSource>()
{
  return &baxter_maintenance_msgs::msg::typesupport_fastrtps_cpp::_UpdateSource__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, baxter_maintenance_msgs, msg, UpdateSource)() {
  return &baxter_maintenance_msgs::msg::typesupport_fastrtps_cpp::_UpdateSource__handle;
}

#ifdef __cplusplus
}
#endif
