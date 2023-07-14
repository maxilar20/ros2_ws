// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from apriltag_ros2:srv/AnalyzeSingleImage.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "apriltag_ros2/srv/detail/analyze_single_image__struct.h"
#include "apriltag_ros2/srv/detail/analyze_single_image__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool sensor_msgs__msg__camera_info__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * sensor_msgs__msg__camera_info__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool apriltag_ros2__srv__analyze_single_image__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[67];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("apriltag_ros2.srv._analyze_single_image.AnalyzeSingleImage_Request", full_classname_dest, 66) == 0);
  }
  apriltag_ros2__srv__AnalyzeSingleImage_Request * ros_message = _ros_message;
  {  // full_path_where_to_get_image
    PyObject * field = PyObject_GetAttrString(_pymsg, "full_path_where_to_get_image");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->full_path_where_to_get_image, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // full_path_where_to_save_image
    PyObject * field = PyObject_GetAttrString(_pymsg, "full_path_where_to_save_image");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->full_path_where_to_save_image, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // camera_info
    PyObject * field = PyObject_GetAttrString(_pymsg, "camera_info");
    if (!field) {
      return false;
    }
    if (!sensor_msgs__msg__camera_info__convert_from_py(field, &ros_message->camera_info)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * apriltag_ros2__srv__analyze_single_image__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of AnalyzeSingleImage_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("apriltag_ros2.srv._analyze_single_image");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "AnalyzeSingleImage_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  apriltag_ros2__srv__AnalyzeSingleImage_Request * ros_message = (apriltag_ros2__srv__AnalyzeSingleImage_Request *)raw_ros_message;
  {  // full_path_where_to_get_image
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->full_path_where_to_get_image.data,
      strlen(ros_message->full_path_where_to_get_image.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "full_path_where_to_get_image", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // full_path_where_to_save_image
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->full_path_where_to_save_image.data,
      strlen(ros_message->full_path_where_to_save_image.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "full_path_where_to_save_image", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // camera_info
    PyObject * field = NULL;
    field = sensor_msgs__msg__camera_info__convert_to_py(&ros_message->camera_info);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "camera_info", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "apriltag_ros2/srv/detail/analyze_single_image__struct.h"
// already included above
// #include "apriltag_ros2/srv/detail/analyze_single_image__functions.h"

bool apriltag_ros2__msg__april_tag_detection_array__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * apriltag_ros2__msg__april_tag_detection_array__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool apriltag_ros2__srv__analyze_single_image__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[68];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("apriltag_ros2.srv._analyze_single_image.AnalyzeSingleImage_Response", full_classname_dest, 67) == 0);
  }
  apriltag_ros2__srv__AnalyzeSingleImage_Response * ros_message = _ros_message;
  {  // tag_detections
    PyObject * field = PyObject_GetAttrString(_pymsg, "tag_detections");
    if (!field) {
      return false;
    }
    if (!apriltag_ros2__msg__april_tag_detection_array__convert_from_py(field, &ros_message->tag_detections)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * apriltag_ros2__srv__analyze_single_image__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of AnalyzeSingleImage_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("apriltag_ros2.srv._analyze_single_image");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "AnalyzeSingleImage_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  apriltag_ros2__srv__AnalyzeSingleImage_Response * ros_message = (apriltag_ros2__srv__AnalyzeSingleImage_Response *)raw_ros_message;
  {  // tag_detections
    PyObject * field = NULL;
    field = apriltag_ros2__msg__april_tag_detection_array__convert_to_py(&ros_message->tag_detections);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "tag_detections", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
