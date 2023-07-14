// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from baxter_maintenance_msgs:msg/TareData.idl
// generated code does not contain a copyright notice

#ifndef BAXTER_MAINTENANCE_MSGS__MSG__DETAIL__TARE_DATA__FUNCTIONS_H_
#define BAXTER_MAINTENANCE_MSGS__MSG__DETAIL__TARE_DATA__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "baxter_maintenance_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "baxter_maintenance_msgs/msg/detail/tare_data__struct.h"

/// Initialize msg/TareData message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * baxter_maintenance_msgs__msg__TareData
 * )) before or use
 * baxter_maintenance_msgs__msg__TareData__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_baxter_maintenance_msgs
bool
baxter_maintenance_msgs__msg__TareData__init(baxter_maintenance_msgs__msg__TareData * msg);

/// Finalize msg/TareData message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_baxter_maintenance_msgs
void
baxter_maintenance_msgs__msg__TareData__fini(baxter_maintenance_msgs__msg__TareData * msg);

/// Create msg/TareData message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * baxter_maintenance_msgs__msg__TareData__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_baxter_maintenance_msgs
baxter_maintenance_msgs__msg__TareData *
baxter_maintenance_msgs__msg__TareData__create();

/// Destroy msg/TareData message.
/**
 * It calls
 * baxter_maintenance_msgs__msg__TareData__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_baxter_maintenance_msgs
void
baxter_maintenance_msgs__msg__TareData__destroy(baxter_maintenance_msgs__msg__TareData * msg);

/// Check for msg/TareData message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_baxter_maintenance_msgs
bool
baxter_maintenance_msgs__msg__TareData__are_equal(const baxter_maintenance_msgs__msg__TareData * lhs, const baxter_maintenance_msgs__msg__TareData * rhs);

/// Copy a msg/TareData message.
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
ROSIDL_GENERATOR_C_PUBLIC_baxter_maintenance_msgs
bool
baxter_maintenance_msgs__msg__TareData__copy(
  const baxter_maintenance_msgs__msg__TareData * input,
  baxter_maintenance_msgs__msg__TareData * output);

/// Initialize array of msg/TareData messages.
/**
 * It allocates the memory for the number of elements and calls
 * baxter_maintenance_msgs__msg__TareData__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_baxter_maintenance_msgs
bool
baxter_maintenance_msgs__msg__TareData__Sequence__init(baxter_maintenance_msgs__msg__TareData__Sequence * array, size_t size);

/// Finalize array of msg/TareData messages.
/**
 * It calls
 * baxter_maintenance_msgs__msg__TareData__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_baxter_maintenance_msgs
void
baxter_maintenance_msgs__msg__TareData__Sequence__fini(baxter_maintenance_msgs__msg__TareData__Sequence * array);

/// Create array of msg/TareData messages.
/**
 * It allocates the memory for the array and calls
 * baxter_maintenance_msgs__msg__TareData__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_baxter_maintenance_msgs
baxter_maintenance_msgs__msg__TareData__Sequence *
baxter_maintenance_msgs__msg__TareData__Sequence__create(size_t size);

/// Destroy array of msg/TareData messages.
/**
 * It calls
 * baxter_maintenance_msgs__msg__TareData__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_baxter_maintenance_msgs
void
baxter_maintenance_msgs__msg__TareData__Sequence__destroy(baxter_maintenance_msgs__msg__TareData__Sequence * array);

/// Check for msg/TareData message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_baxter_maintenance_msgs
bool
baxter_maintenance_msgs__msg__TareData__Sequence__are_equal(const baxter_maintenance_msgs__msg__TareData__Sequence * lhs, const baxter_maintenance_msgs__msg__TareData__Sequence * rhs);

/// Copy an array of msg/TareData messages.
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
ROSIDL_GENERATOR_C_PUBLIC_baxter_maintenance_msgs
bool
baxter_maintenance_msgs__msg__TareData__Sequence__copy(
  const baxter_maintenance_msgs__msg__TareData__Sequence * input,
  baxter_maintenance_msgs__msg__TareData__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // BAXTER_MAINTENANCE_MSGS__MSG__DETAIL__TARE_DATA__FUNCTIONS_H_
