// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from baxter_maintenance_msgs:msg/CalibrateArmEnable.idl
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
#include "baxter_maintenance_msgs/msg/detail/calibrate_arm_enable__struct.h"
#include "baxter_maintenance_msgs/msg/detail/calibrate_arm_enable__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

bool baxter_maintenance_msgs__msg__calibrate_arm_data__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * baxter_maintenance_msgs__msg__calibrate_arm_data__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool baxter_maintenance_msgs__msg__calibrate_arm_enable__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[69];
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
    assert(strncmp("baxter_maintenance_msgs.msg._calibrate_arm_enable.CalibrateArmEnable", full_classname_dest, 68) == 0);
  }
  baxter_maintenance_msgs__msg__CalibrateArmEnable * ros_message = _ros_message;
  {  // is_enabled
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_enabled");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_enabled = (Py_True == field);
    Py_DECREF(field);
  }
  {  // uid
    PyObject * field = PyObject_GetAttrString(_pymsg, "uid");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->uid, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // data
    PyObject * field = PyObject_GetAttrString(_pymsg, "data");
    if (!field) {
      return false;
    }
    if (!baxter_maintenance_msgs__msg__calibrate_arm_data__convert_from_py(field, &ros_message->data)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * baxter_maintenance_msgs__msg__calibrate_arm_enable__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of CalibrateArmEnable */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("baxter_maintenance_msgs.msg._calibrate_arm_enable");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "CalibrateArmEnable");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  baxter_maintenance_msgs__msg__CalibrateArmEnable * ros_message = (baxter_maintenance_msgs__msg__CalibrateArmEnable *)raw_ros_message;
  {  // is_enabled
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_enabled ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_enabled", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // uid
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->uid.data,
      strlen(ros_message->uid.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "uid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // data
    PyObject * field = NULL;
    field = baxter_maintenance_msgs__msg__calibrate_arm_data__convert_to_py(&ros_message->data);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "data", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
