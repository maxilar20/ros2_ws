// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from baxter_core_msgs:msg/CameraControl.idl
// generated code does not contain a copyright notice

#ifndef BAXTER_CORE_MSGS__MSG__DETAIL__CAMERA_CONTROL__FUNCTIONS_H_
#define BAXTER_CORE_MSGS__MSG__DETAIL__CAMERA_CONTROL__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "baxter_core_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "baxter_core_msgs/msg/detail/camera_control__struct.h"

/// Initialize msg/CameraControl message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * baxter_core_msgs__msg__CameraControl
 * )) before or use
 * baxter_core_msgs__msg__CameraControl__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_baxter_core_msgs
bool
baxter_core_msgs__msg__CameraControl__init(baxter_core_msgs__msg__CameraControl * msg);

/// Finalize msg/CameraControl message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_baxter_core_msgs
void
baxter_core_msgs__msg__CameraControl__fini(baxter_core_msgs__msg__CameraControl * msg);

/// Create msg/CameraControl message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * baxter_core_msgs__msg__CameraControl__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_baxter_core_msgs
baxter_core_msgs__msg__CameraControl *
baxter_core_msgs__msg__CameraControl__create();

/// Destroy msg/CameraControl message.
/**
 * It calls
 * baxter_core_msgs__msg__CameraControl__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_baxter_core_msgs
void
baxter_core_msgs__msg__CameraControl__destroy(baxter_core_msgs__msg__CameraControl * msg);

/// Check for msg/CameraControl message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_baxter_core_msgs
bool
baxter_core_msgs__msg__CameraControl__are_equal(const baxter_core_msgs__msg__CameraControl * lhs, const baxter_core_msgs__msg__CameraControl * rhs);

/// Copy a msg/CameraControl message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_baxter_core_msgs
bool
baxter_core_msgs__msg__CameraControl__copy(
  const baxter_core_msgs__msg__CameraControl * input,
  baxter_core_msgs__msg__CameraControl * output);

/// Initialize array of msg/CameraControl messages.
/**
 * It allocates the memory for the number of elements and calls
 * baxter_core_msgs__msg__CameraControl__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_baxter_core_msgs
bool
baxter_core_msgs__msg__CameraControl__Sequence__init(baxter_core_msgs__msg__CameraControl__Sequence * array, size_t size);

/// Finalize array of msg/CameraControl messages.
/**
 * It calls
 * baxter_core_msgs__msg__CameraControl__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_baxter_core_msgs
void
baxter_core_msgs__msg__CameraControl__Sequence__fini(baxter_core_msgs__msg__CameraControl__Sequence * array);

/// Create array of msg/CameraControl messages.
/**
 * It allocates the memory for the array and calls
 * baxter_core_msgs__msg__CameraControl__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_baxter_core_msgs
baxter_core_msgs__msg__CameraControl__Sequence *
baxter_core_msgs__msg__CameraControl__Sequence__create(size_t size);

/// Destroy array of msg/CameraControl messages.
/**
 * It calls
 * baxter_core_msgs__msg__CameraControl__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_baxter_core_msgs
void
baxter_core_msgs__msg__CameraControl__Sequence__destroy(baxter_core_msgs__msg__CameraControl__Sequence * array);

/// Check for msg/CameraControl message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_baxter_core_msgs
bool
baxter_core_msgs__msg__CameraControl__Sequence__are_equal(const baxter_core_msgs__msg__CameraControl__Sequence * lhs, const baxter_core_msgs__msg__CameraControl__Sequence * rhs);

/// Copy an array of msg/CameraControl messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_baxter_core_msgs
bool
baxter_core_msgs__msg__CameraControl__Sequence__copy(
  const baxter_core_msgs__msg__CameraControl__Sequence * input,
  baxter_core_msgs__msg__CameraControl__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // BAXTER_CORE_MSGS__MSG__DETAIL__CAMERA_CONTROL__FUNCTIONS_H_
