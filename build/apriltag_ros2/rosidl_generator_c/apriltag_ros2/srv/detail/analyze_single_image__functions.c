// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from apriltag_ros2:srv/AnalyzeSingleImage.idl
// generated code does not contain a copyright notice
#include "apriltag_ros2/srv/detail/analyze_single_image__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `full_path_where_to_get_image`
// Member `full_path_where_to_save_image`
#include "rosidl_runtime_c/string_functions.h"
// Member `camera_info`
#include "sensor_msgs/msg/detail/camera_info__functions.h"

bool
apriltag_ros2__srv__AnalyzeSingleImage_Request__init(apriltag_ros2__srv__AnalyzeSingleImage_Request * msg)
{
  if (!msg) {
    return false;
  }
  // full_path_where_to_get_image
  if (!rosidl_runtime_c__String__init(&msg->full_path_where_to_get_image)) {
    apriltag_ros2__srv__AnalyzeSingleImage_Request__fini(msg);
    return false;
  }
  // full_path_where_to_save_image
  if (!rosidl_runtime_c__String__init(&msg->full_path_where_to_save_image)) {
    apriltag_ros2__srv__AnalyzeSingleImage_Request__fini(msg);
    return false;
  }
  // camera_info
  if (!sensor_msgs__msg__CameraInfo__init(&msg->camera_info)) {
    apriltag_ros2__srv__AnalyzeSingleImage_Request__fini(msg);
    return false;
  }
  return true;
}

void
apriltag_ros2__srv__AnalyzeSingleImage_Request__fini(apriltag_ros2__srv__AnalyzeSingleImage_Request * msg)
{
  if (!msg) {
    return;
  }
  // full_path_where_to_get_image
  rosidl_runtime_c__String__fini(&msg->full_path_where_to_get_image);
  // full_path_where_to_save_image
  rosidl_runtime_c__String__fini(&msg->full_path_where_to_save_image);
  // camera_info
  sensor_msgs__msg__CameraInfo__fini(&msg->camera_info);
}

bool
apriltag_ros2__srv__AnalyzeSingleImage_Request__are_equal(const apriltag_ros2__srv__AnalyzeSingleImage_Request * lhs, const apriltag_ros2__srv__AnalyzeSingleImage_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // full_path_where_to_get_image
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->full_path_where_to_get_image), &(rhs->full_path_where_to_get_image)))
  {
    return false;
  }
  // full_path_where_to_save_image
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->full_path_where_to_save_image), &(rhs->full_path_where_to_save_image)))
  {
    return false;
  }
  // camera_info
  if (!sensor_msgs__msg__CameraInfo__are_equal(
      &(lhs->camera_info), &(rhs->camera_info)))
  {
    return false;
  }
  return true;
}

bool
apriltag_ros2__srv__AnalyzeSingleImage_Request__copy(
  const apriltag_ros2__srv__AnalyzeSingleImage_Request * input,
  apriltag_ros2__srv__AnalyzeSingleImage_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // full_path_where_to_get_image
  if (!rosidl_runtime_c__String__copy(
      &(input->full_path_where_to_get_image), &(output->full_path_where_to_get_image)))
  {
    return false;
  }
  // full_path_where_to_save_image
  if (!rosidl_runtime_c__String__copy(
      &(input->full_path_where_to_save_image), &(output->full_path_where_to_save_image)))
  {
    return false;
  }
  // camera_info
  if (!sensor_msgs__msg__CameraInfo__copy(
      &(input->camera_info), &(output->camera_info)))
  {
    return false;
  }
  return true;
}

apriltag_ros2__srv__AnalyzeSingleImage_Request *
apriltag_ros2__srv__AnalyzeSingleImage_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  apriltag_ros2__srv__AnalyzeSingleImage_Request * msg = (apriltag_ros2__srv__AnalyzeSingleImage_Request *)allocator.allocate(sizeof(apriltag_ros2__srv__AnalyzeSingleImage_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(apriltag_ros2__srv__AnalyzeSingleImage_Request));
  bool success = apriltag_ros2__srv__AnalyzeSingleImage_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
apriltag_ros2__srv__AnalyzeSingleImage_Request__destroy(apriltag_ros2__srv__AnalyzeSingleImage_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    apriltag_ros2__srv__AnalyzeSingleImage_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
apriltag_ros2__srv__AnalyzeSingleImage_Request__Sequence__init(apriltag_ros2__srv__AnalyzeSingleImage_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  apriltag_ros2__srv__AnalyzeSingleImage_Request * data = NULL;

  if (size) {
    data = (apriltag_ros2__srv__AnalyzeSingleImage_Request *)allocator.zero_allocate(size, sizeof(apriltag_ros2__srv__AnalyzeSingleImage_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = apriltag_ros2__srv__AnalyzeSingleImage_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        apriltag_ros2__srv__AnalyzeSingleImage_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
apriltag_ros2__srv__AnalyzeSingleImage_Request__Sequence__fini(apriltag_ros2__srv__AnalyzeSingleImage_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      apriltag_ros2__srv__AnalyzeSingleImage_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

apriltag_ros2__srv__AnalyzeSingleImage_Request__Sequence *
apriltag_ros2__srv__AnalyzeSingleImage_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  apriltag_ros2__srv__AnalyzeSingleImage_Request__Sequence * array = (apriltag_ros2__srv__AnalyzeSingleImage_Request__Sequence *)allocator.allocate(sizeof(apriltag_ros2__srv__AnalyzeSingleImage_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = apriltag_ros2__srv__AnalyzeSingleImage_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
apriltag_ros2__srv__AnalyzeSingleImage_Request__Sequence__destroy(apriltag_ros2__srv__AnalyzeSingleImage_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    apriltag_ros2__srv__AnalyzeSingleImage_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
apriltag_ros2__srv__AnalyzeSingleImage_Request__Sequence__are_equal(const apriltag_ros2__srv__AnalyzeSingleImage_Request__Sequence * lhs, const apriltag_ros2__srv__AnalyzeSingleImage_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!apriltag_ros2__srv__AnalyzeSingleImage_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
apriltag_ros2__srv__AnalyzeSingleImage_Request__Sequence__copy(
  const apriltag_ros2__srv__AnalyzeSingleImage_Request__Sequence * input,
  apriltag_ros2__srv__AnalyzeSingleImage_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(apriltag_ros2__srv__AnalyzeSingleImage_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    apriltag_ros2__srv__AnalyzeSingleImage_Request * data =
      (apriltag_ros2__srv__AnalyzeSingleImage_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!apriltag_ros2__srv__AnalyzeSingleImage_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          apriltag_ros2__srv__AnalyzeSingleImage_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!apriltag_ros2__srv__AnalyzeSingleImage_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `tag_detections`
#include "apriltag_ros2/msg/detail/april_tag_detection_array__functions.h"

bool
apriltag_ros2__srv__AnalyzeSingleImage_Response__init(apriltag_ros2__srv__AnalyzeSingleImage_Response * msg)
{
  if (!msg) {
    return false;
  }
  // tag_detections
  if (!apriltag_ros2__msg__AprilTagDetectionArray__init(&msg->tag_detections)) {
    apriltag_ros2__srv__AnalyzeSingleImage_Response__fini(msg);
    return false;
  }
  return true;
}

void
apriltag_ros2__srv__AnalyzeSingleImage_Response__fini(apriltag_ros2__srv__AnalyzeSingleImage_Response * msg)
{
  if (!msg) {
    return;
  }
  // tag_detections
  apriltag_ros2__msg__AprilTagDetectionArray__fini(&msg->tag_detections);
}

bool
apriltag_ros2__srv__AnalyzeSingleImage_Response__are_equal(const apriltag_ros2__srv__AnalyzeSingleImage_Response * lhs, const apriltag_ros2__srv__AnalyzeSingleImage_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // tag_detections
  if (!apriltag_ros2__msg__AprilTagDetectionArray__are_equal(
      &(lhs->tag_detections), &(rhs->tag_detections)))
  {
    return false;
  }
  return true;
}

bool
apriltag_ros2__srv__AnalyzeSingleImage_Response__copy(
  const apriltag_ros2__srv__AnalyzeSingleImage_Response * input,
  apriltag_ros2__srv__AnalyzeSingleImage_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // tag_detections
  if (!apriltag_ros2__msg__AprilTagDetectionArray__copy(
      &(input->tag_detections), &(output->tag_detections)))
  {
    return false;
  }
  return true;
}

apriltag_ros2__srv__AnalyzeSingleImage_Response *
apriltag_ros2__srv__AnalyzeSingleImage_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  apriltag_ros2__srv__AnalyzeSingleImage_Response * msg = (apriltag_ros2__srv__AnalyzeSingleImage_Response *)allocator.allocate(sizeof(apriltag_ros2__srv__AnalyzeSingleImage_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(apriltag_ros2__srv__AnalyzeSingleImage_Response));
  bool success = apriltag_ros2__srv__AnalyzeSingleImage_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
apriltag_ros2__srv__AnalyzeSingleImage_Response__destroy(apriltag_ros2__srv__AnalyzeSingleImage_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    apriltag_ros2__srv__AnalyzeSingleImage_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
apriltag_ros2__srv__AnalyzeSingleImage_Response__Sequence__init(apriltag_ros2__srv__AnalyzeSingleImage_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  apriltag_ros2__srv__AnalyzeSingleImage_Response * data = NULL;

  if (size) {
    data = (apriltag_ros2__srv__AnalyzeSingleImage_Response *)allocator.zero_allocate(size, sizeof(apriltag_ros2__srv__AnalyzeSingleImage_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = apriltag_ros2__srv__AnalyzeSingleImage_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        apriltag_ros2__srv__AnalyzeSingleImage_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
apriltag_ros2__srv__AnalyzeSingleImage_Response__Sequence__fini(apriltag_ros2__srv__AnalyzeSingleImage_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      apriltag_ros2__srv__AnalyzeSingleImage_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

apriltag_ros2__srv__AnalyzeSingleImage_Response__Sequence *
apriltag_ros2__srv__AnalyzeSingleImage_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  apriltag_ros2__srv__AnalyzeSingleImage_Response__Sequence * array = (apriltag_ros2__srv__AnalyzeSingleImage_Response__Sequence *)allocator.allocate(sizeof(apriltag_ros2__srv__AnalyzeSingleImage_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = apriltag_ros2__srv__AnalyzeSingleImage_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
apriltag_ros2__srv__AnalyzeSingleImage_Response__Sequence__destroy(apriltag_ros2__srv__AnalyzeSingleImage_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    apriltag_ros2__srv__AnalyzeSingleImage_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
apriltag_ros2__srv__AnalyzeSingleImage_Response__Sequence__are_equal(const apriltag_ros2__srv__AnalyzeSingleImage_Response__Sequence * lhs, const apriltag_ros2__srv__AnalyzeSingleImage_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!apriltag_ros2__srv__AnalyzeSingleImage_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
apriltag_ros2__srv__AnalyzeSingleImage_Response__Sequence__copy(
  const apriltag_ros2__srv__AnalyzeSingleImage_Response__Sequence * input,
  apriltag_ros2__srv__AnalyzeSingleImage_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(apriltag_ros2__srv__AnalyzeSingleImage_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    apriltag_ros2__srv__AnalyzeSingleImage_Response * data =
      (apriltag_ros2__srv__AnalyzeSingleImage_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!apriltag_ros2__srv__AnalyzeSingleImage_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          apriltag_ros2__srv__AnalyzeSingleImage_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!apriltag_ros2__srv__AnalyzeSingleImage_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
