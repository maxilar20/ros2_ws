// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from baxter_core_msgs:msg/HeadState.idl
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
#include "baxter_core_msgs/msg/detail/head_state__struct.h"
#include "baxter_core_msgs/msg/detail/head_state__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool baxter_core_msgs__msg__head_state__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[43];
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
    assert(strncmp("baxter_core_msgs.msg._head_state.HeadState", full_classname_dest, 42) == 0);
  }
  baxter_core_msgs__msg__HeadState * ros_message = _ros_message;
  {  // pan
    PyObject * field = PyObject_GetAttrString(_pymsg, "pan");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pan = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // is_turning
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_turning");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_turning = (Py_True == field);
    Py_DECREF(field);
  }
  {  // is_nodding
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_nodding");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_nodding = (Py_True == field);
    Py_DECREF(field);
  }
  {  // is_pan_enabled
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_pan_enabled");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_pan_enabled = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * baxter_core_msgs__msg__head_state__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of HeadState */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("baxter_core_msgs.msg._head_state");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "HeadState");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  baxter_core_msgs__msg__HeadState * ros_message = (baxter_core_msgs__msg__HeadState *)raw_ros_message;
  {  // pan
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pan);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pan", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_turning
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_turning ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_turning", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_nodding
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_nodding ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_nodding", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_pan_enabled
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_pan_enabled ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_pan_enabled", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
