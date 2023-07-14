// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from baxter_maintenance_msgs:msg/CalibrateArmData.idl
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
#include "baxter_maintenance_msgs/msg/detail/calibrate_arm_data__struct.h"
#include "baxter_maintenance_msgs/msg/detail/calibrate_arm_data__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool baxter_maintenance_msgs__msg__calibrate_arm_data__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[65];
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
    assert(strncmp("baxter_maintenance_msgs.msg._calibrate_arm_data.CalibrateArmData", full_classname_dest, 64) == 0);
  }
  baxter_maintenance_msgs__msg__CalibrateArmData * ros_message = _ros_message;
  {  // suppress_write_to_file
    PyObject * field = PyObject_GetAttrString(_pymsg, "suppress_write_to_file");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->suppress_write_to_file = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * baxter_maintenance_msgs__msg__calibrate_arm_data__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of CalibrateArmData */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("baxter_maintenance_msgs.msg._calibrate_arm_data");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "CalibrateArmData");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  baxter_maintenance_msgs__msg__CalibrateArmData * ros_message = (baxter_maintenance_msgs__msg__CalibrateArmData *)raw_ros_message;
  {  // suppress_write_to_file
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->suppress_write_to_file ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "suppress_write_to_file", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
