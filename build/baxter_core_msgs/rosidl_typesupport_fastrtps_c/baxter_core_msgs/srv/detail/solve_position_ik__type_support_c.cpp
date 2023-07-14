// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from baxter_core_msgs:srv/SolvePositionIK.idl
// generated code does not contain a copyright notice
#include "baxter_core_msgs/srv/detail/solve_position_ik__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "baxter_core_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "baxter_core_msgs/srv/detail/solve_position_ik__struct.h"
#include "baxter_core_msgs/srv/detail/solve_position_ik__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "geometry_msgs/msg/detail/pose_stamped__functions.h"  // pose_stamp
#include "sensor_msgs/msg/detail/joint_state__functions.h"  // seed_angles

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_baxter_core_msgs
size_t get_serialized_size_geometry_msgs__msg__PoseStamped(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_baxter_core_msgs
size_t max_serialized_size_geometry_msgs__msg__PoseStamped(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_baxter_core_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, PoseStamped)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_baxter_core_msgs
size_t get_serialized_size_sensor_msgs__msg__JointState(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_baxter_core_msgs
size_t max_serialized_size_sensor_msgs__msg__JointState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_baxter_core_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sensor_msgs, msg, JointState)();


using _SolvePositionIK_Request__ros_msg_type = baxter_core_msgs__srv__SolvePositionIK_Request;

static bool _SolvePositionIK_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SolvePositionIK_Request__ros_msg_type * ros_message = static_cast<const _SolvePositionIK_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: pose_stamp
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, PoseStamped
      )()->data);
    size_t size = ros_message->pose_stamp.size;
    auto array_ptr = ros_message->pose_stamp.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: seed_angles
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sensor_msgs, msg, JointState
      )()->data);
    size_t size = ros_message->seed_angles.size;
    auto array_ptr = ros_message->seed_angles.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: seed_mode
  {
    cdr << ros_message->seed_mode;
  }

  return true;
}

static bool _SolvePositionIK_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SolvePositionIK_Request__ros_msg_type * ros_message = static_cast<_SolvePositionIK_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: pose_stamp
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, PoseStamped
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->pose_stamp.data) {
      geometry_msgs__msg__PoseStamped__Sequence__fini(&ros_message->pose_stamp);
    }
    if (!geometry_msgs__msg__PoseStamped__Sequence__init(&ros_message->pose_stamp, size)) {
      fprintf(stderr, "failed to create array for field 'pose_stamp'");
      return false;
    }
    auto array_ptr = ros_message->pose_stamp.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: seed_angles
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sensor_msgs, msg, JointState
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->seed_angles.data) {
      sensor_msgs__msg__JointState__Sequence__fini(&ros_message->seed_angles);
    }
    if (!sensor_msgs__msg__JointState__Sequence__init(&ros_message->seed_angles, size)) {
      fprintf(stderr, "failed to create array for field 'seed_angles'");
      return false;
    }
    auto array_ptr = ros_message->seed_angles.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: seed_mode
  {
    cdr >> ros_message->seed_mode;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_baxter_core_msgs
size_t get_serialized_size_baxter_core_msgs__srv__SolvePositionIK_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SolvePositionIK_Request__ros_msg_type * ros_message = static_cast<const _SolvePositionIK_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name pose_stamp
  {
    size_t array_size = ros_message->pose_stamp.size;
    auto array_ptr = ros_message->pose_stamp.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_geometry_msgs__msg__PoseStamped(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name seed_angles
  {
    size_t array_size = ros_message->seed_angles.size;
    auto array_ptr = ros_message->seed_angles.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_sensor_msgs__msg__JointState(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name seed_mode
  {
    size_t item_size = sizeof(ros_message->seed_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SolvePositionIK_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_baxter_core_msgs__srv__SolvePositionIK_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_baxter_core_msgs
size_t max_serialized_size_baxter_core_msgs__srv__SolvePositionIK_Request(
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

  // member: pose_stamp
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__PoseStamped(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: seed_angles
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_sensor_msgs__msg__JointState(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: seed_mode
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _SolvePositionIK_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_baxter_core_msgs__srv__SolvePositionIK_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SolvePositionIK_Request = {
  "baxter_core_msgs::srv",
  "SolvePositionIK_Request",
  _SolvePositionIK_Request__cdr_serialize,
  _SolvePositionIK_Request__cdr_deserialize,
  _SolvePositionIK_Request__get_serialized_size,
  _SolvePositionIK_Request__max_serialized_size
};

static rosidl_message_type_support_t _SolvePositionIK_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SolvePositionIK_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, baxter_core_msgs, srv, SolvePositionIK_Request)() {
  return &_SolvePositionIK_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "baxter_core_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "baxter_core_msgs/srv/detail/solve_position_ik__struct.h"
// already included above
// #include "baxter_core_msgs/srv/detail/solve_position_ik__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/primitives_sequence.h"  // is_valid, result_type
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // is_valid, result_type
// already included above
// #include "sensor_msgs/msg/detail/joint_state__functions.h"  // joints

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_baxter_core_msgs
size_t get_serialized_size_sensor_msgs__msg__JointState(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_baxter_core_msgs
size_t max_serialized_size_sensor_msgs__msg__JointState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_baxter_core_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sensor_msgs, msg, JointState)();


using _SolvePositionIK_Response__ros_msg_type = baxter_core_msgs__srv__SolvePositionIK_Response;

static bool _SolvePositionIK_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SolvePositionIK_Response__ros_msg_type * ros_message = static_cast<const _SolvePositionIK_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: joints
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sensor_msgs, msg, JointState
      )()->data);
    size_t size = ros_message->joints.size;
    auto array_ptr = ros_message->joints.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: is_valid
  {
    size_t size = ros_message->is_valid.size;
    auto array_ptr = ros_message->is_valid.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: result_type
  {
    size_t size = ros_message->result_type.size;
    auto array_ptr = ros_message->result_type.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _SolvePositionIK_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SolvePositionIK_Response__ros_msg_type * ros_message = static_cast<_SolvePositionIK_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: joints
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sensor_msgs, msg, JointState
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->joints.data) {
      sensor_msgs__msg__JointState__Sequence__fini(&ros_message->joints);
    }
    if (!sensor_msgs__msg__JointState__Sequence__init(&ros_message->joints, size)) {
      fprintf(stderr, "failed to create array for field 'joints'");
      return false;
    }
    auto array_ptr = ros_message->joints.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: is_valid
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->is_valid.data) {
      rosidl_runtime_c__boolean__Sequence__fini(&ros_message->is_valid);
    }
    if (!rosidl_runtime_c__boolean__Sequence__init(&ros_message->is_valid, size)) {
      fprintf(stderr, "failed to create array for field 'is_valid'");
      return false;
    }
    auto array_ptr = ros_message->is_valid.data;
    for (size_t i = 0; i < size; ++i) {
      uint8_t tmp;
      cdr >> tmp;
      array_ptr[i] = tmp ? true : false;
    }
  }

  // Field name: result_type
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->result_type.data) {
      rosidl_runtime_c__uint8__Sequence__fini(&ros_message->result_type);
    }
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->result_type, size)) {
      fprintf(stderr, "failed to create array for field 'result_type'");
      return false;
    }
    auto array_ptr = ros_message->result_type.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_baxter_core_msgs
size_t get_serialized_size_baxter_core_msgs__srv__SolvePositionIK_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SolvePositionIK_Response__ros_msg_type * ros_message = static_cast<const _SolvePositionIK_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name joints
  {
    size_t array_size = ros_message->joints.size;
    auto array_ptr = ros_message->joints.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_sensor_msgs__msg__JointState(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name is_valid
  {
    size_t array_size = ros_message->is_valid.size;
    auto array_ptr = ros_message->is_valid.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name result_type
  {
    size_t array_size = ros_message->result_type.size;
    auto array_ptr = ros_message->result_type.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SolvePositionIK_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_baxter_core_msgs__srv__SolvePositionIK_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_baxter_core_msgs
size_t max_serialized_size_baxter_core_msgs__srv__SolvePositionIK_Response(
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

  // member: joints
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_sensor_msgs__msg__JointState(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: is_valid
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: result_type
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _SolvePositionIK_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_baxter_core_msgs__srv__SolvePositionIK_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SolvePositionIK_Response = {
  "baxter_core_msgs::srv",
  "SolvePositionIK_Response",
  _SolvePositionIK_Response__cdr_serialize,
  _SolvePositionIK_Response__cdr_deserialize,
  _SolvePositionIK_Response__get_serialized_size,
  _SolvePositionIK_Response__max_serialized_size
};

static rosidl_message_type_support_t _SolvePositionIK_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SolvePositionIK_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, baxter_core_msgs, srv, SolvePositionIK_Response)() {
  return &_SolvePositionIK_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "baxter_core_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "baxter_core_msgs/srv/solve_position_ik.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t SolvePositionIK__callbacks = {
  "baxter_core_msgs::srv",
  "SolvePositionIK",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, baxter_core_msgs, srv, SolvePositionIK_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, baxter_core_msgs, srv, SolvePositionIK_Response)(),
};

static rosidl_service_type_support_t SolvePositionIK__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &SolvePositionIK__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, baxter_core_msgs, srv, SolvePositionIK)() {
  return &SolvePositionIK__handle;
}

#if defined(__cplusplus)
}
#endif
