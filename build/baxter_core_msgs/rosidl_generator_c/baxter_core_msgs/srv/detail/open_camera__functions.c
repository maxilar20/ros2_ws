// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from baxter_core_msgs:srv/OpenCamera.idl
// generated code does not contain a copyright notice
#include "baxter_core_msgs/srv/detail/open_camera__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `settings`
#include "baxter_core_msgs/msg/detail/camera_settings__functions.h"

bool
baxter_core_msgs__srv__OpenCamera_Request__init(baxter_core_msgs__srv__OpenCamera_Request * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    baxter_core_msgs__srv__OpenCamera_Request__fini(msg);
    return false;
  }
  // settings
  if (!baxter_core_msgs__msg__CameraSettings__init(&msg->settings)) {
    baxter_core_msgs__srv__OpenCamera_Request__fini(msg);
    return false;
  }
  return true;
}

void
baxter_core_msgs__srv__OpenCamera_Request__fini(baxter_core_msgs__srv__OpenCamera_Request * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // settings
  baxter_core_msgs__msg__CameraSettings__fini(&msg->settings);
}

bool
baxter_core_msgs__srv__OpenCamera_Request__are_equal(const baxter_core_msgs__srv__OpenCamera_Request * lhs, const baxter_core_msgs__srv__OpenCamera_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // settings
  if (!baxter_core_msgs__msg__CameraSettings__are_equal(
      &(lhs->settings), &(rhs->settings)))
  {
    return false;
  }
  return true;
}

bool
baxter_core_msgs__srv__OpenCamera_Request__copy(
  const baxter_core_msgs__srv__OpenCamera_Request * input,
  baxter_core_msgs__srv__OpenCamera_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // settings
  if (!baxter_core_msgs__msg__CameraSettings__copy(
      &(input->settings), &(output->settings)))
  {
    return false;
  }
  return true;
}

baxter_core_msgs__srv__OpenCamera_Request *
baxter_core_msgs__srv__OpenCamera_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  baxter_core_msgs__srv__OpenCamera_Request * msg = (baxter_core_msgs__srv__OpenCamera_Request *)allocator.allocate(sizeof(baxter_core_msgs__srv__OpenCamera_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(baxter_core_msgs__srv__OpenCamera_Request));
  bool success = baxter_core_msgs__srv__OpenCamera_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
baxter_core_msgs__srv__OpenCamera_Request__destroy(baxter_core_msgs__srv__OpenCamera_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    baxter_core_msgs__srv__OpenCamera_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
baxter_core_msgs__srv__OpenCamera_Request__Sequence__init(baxter_core_msgs__srv__OpenCamera_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  baxter_core_msgs__srv__OpenCamera_Request * data = NULL;

  if (size) {
    data = (baxter_core_msgs__srv__OpenCamera_Request *)allocator.zero_allocate(size, sizeof(baxter_core_msgs__srv__OpenCamera_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = baxter_core_msgs__srv__OpenCamera_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        baxter_core_msgs__srv__OpenCamera_Request__fini(&data[i - 1]);
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
baxter_core_msgs__srv__OpenCamera_Request__Sequence__fini(baxter_core_msgs__srv__OpenCamera_Request__Sequence * array)
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
      baxter_core_msgs__srv__OpenCamera_Request__fini(&array->data[i]);
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

baxter_core_msgs__srv__OpenCamera_Request__Sequence *
baxter_core_msgs__srv__OpenCamera_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  baxter_core_msgs__srv__OpenCamera_Request__Sequence * array = (baxter_core_msgs__srv__OpenCamera_Request__Sequence *)allocator.allocate(sizeof(baxter_core_msgs__srv__OpenCamera_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = baxter_core_msgs__srv__OpenCamera_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
baxter_core_msgs__srv__OpenCamera_Request__Sequence__destroy(baxter_core_msgs__srv__OpenCamera_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    baxter_core_msgs__srv__OpenCamera_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
baxter_core_msgs__srv__OpenCamera_Request__Sequence__are_equal(const baxter_core_msgs__srv__OpenCamera_Request__Sequence * lhs, const baxter_core_msgs__srv__OpenCamera_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!baxter_core_msgs__srv__OpenCamera_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
baxter_core_msgs__srv__OpenCamera_Request__Sequence__copy(
  const baxter_core_msgs__srv__OpenCamera_Request__Sequence * input,
  baxter_core_msgs__srv__OpenCamera_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(baxter_core_msgs__srv__OpenCamera_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    baxter_core_msgs__srv__OpenCamera_Request * data =
      (baxter_core_msgs__srv__OpenCamera_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!baxter_core_msgs__srv__OpenCamera_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          baxter_core_msgs__srv__OpenCamera_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!baxter_core_msgs__srv__OpenCamera_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
baxter_core_msgs__srv__OpenCamera_Response__init(baxter_core_msgs__srv__OpenCamera_Response * msg)
{
  if (!msg) {
    return false;
  }
  // err
  return true;
}

void
baxter_core_msgs__srv__OpenCamera_Response__fini(baxter_core_msgs__srv__OpenCamera_Response * msg)
{
  if (!msg) {
    return;
  }
  // err
}

bool
baxter_core_msgs__srv__OpenCamera_Response__are_equal(const baxter_core_msgs__srv__OpenCamera_Response * lhs, const baxter_core_msgs__srv__OpenCamera_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // err
  if (lhs->err != rhs->err) {
    return false;
  }
  return true;
}

bool
baxter_core_msgs__srv__OpenCamera_Response__copy(
  const baxter_core_msgs__srv__OpenCamera_Response * input,
  baxter_core_msgs__srv__OpenCamera_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // err
  output->err = input->err;
  return true;
}

baxter_core_msgs__srv__OpenCamera_Response *
baxter_core_msgs__srv__OpenCamera_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  baxter_core_msgs__srv__OpenCamera_Response * msg = (baxter_core_msgs__srv__OpenCamera_Response *)allocator.allocate(sizeof(baxter_core_msgs__srv__OpenCamera_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(baxter_core_msgs__srv__OpenCamera_Response));
  bool success = baxter_core_msgs__srv__OpenCamera_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
baxter_core_msgs__srv__OpenCamera_Response__destroy(baxter_core_msgs__srv__OpenCamera_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    baxter_core_msgs__srv__OpenCamera_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
baxter_core_msgs__srv__OpenCamera_Response__Sequence__init(baxter_core_msgs__srv__OpenCamera_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  baxter_core_msgs__srv__OpenCamera_Response * data = NULL;

  if (size) {
    data = (baxter_core_msgs__srv__OpenCamera_Response *)allocator.zero_allocate(size, sizeof(baxter_core_msgs__srv__OpenCamera_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = baxter_core_msgs__srv__OpenCamera_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        baxter_core_msgs__srv__OpenCamera_Response__fini(&data[i - 1]);
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
baxter_core_msgs__srv__OpenCamera_Response__Sequence__fini(baxter_core_msgs__srv__OpenCamera_Response__Sequence * array)
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
      baxter_core_msgs__srv__OpenCamera_Response__fini(&array->data[i]);
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

baxter_core_msgs__srv__OpenCamera_Response__Sequence *
baxter_core_msgs__srv__OpenCamera_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  baxter_core_msgs__srv__OpenCamera_Response__Sequence * array = (baxter_core_msgs__srv__OpenCamera_Response__Sequence *)allocator.allocate(sizeof(baxter_core_msgs__srv__OpenCamera_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = baxter_core_msgs__srv__OpenCamera_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
baxter_core_msgs__srv__OpenCamera_Response__Sequence__destroy(baxter_core_msgs__srv__OpenCamera_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    baxter_core_msgs__srv__OpenCamera_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
baxter_core_msgs__srv__OpenCamera_Response__Sequence__are_equal(const baxter_core_msgs__srv__OpenCamera_Response__Sequence * lhs, const baxter_core_msgs__srv__OpenCamera_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!baxter_core_msgs__srv__OpenCamera_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
baxter_core_msgs__srv__OpenCamera_Response__Sequence__copy(
  const baxter_core_msgs__srv__OpenCamera_Response__Sequence * input,
  baxter_core_msgs__srv__OpenCamera_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(baxter_core_msgs__srv__OpenCamera_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    baxter_core_msgs__srv__OpenCamera_Response * data =
      (baxter_core_msgs__srv__OpenCamera_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!baxter_core_msgs__srv__OpenCamera_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          baxter_core_msgs__srv__OpenCamera_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!baxter_core_msgs__srv__OpenCamera_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
