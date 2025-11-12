// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from rm_ros_interfaces:msg/Armsoftversion.idl
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
#include "rm_ros_interfaces/msg/detail/armsoftversion__struct.h"
#include "rm_ros_interfaces/msg/detail/armsoftversion__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

bool rm_ros_interfaces__msg__softwarebuildinfo__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * rm_ros_interfaces__msg__softwarebuildinfo__convert_to_py(void * raw_ros_message);
bool rm_ros_interfaces__msg__softwarebuildinfo__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * rm_ros_interfaces__msg__softwarebuildinfo__convert_to_py(void * raw_ros_message);
bool rm_ros_interfaces__msg__softwarebuildinfo__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * rm_ros_interfaces__msg__softwarebuildinfo__convert_to_py(void * raw_ros_message);
bool rm_ros_interfaces__msg__softwarebuildinfo__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * rm_ros_interfaces__msg__softwarebuildinfo__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool rm_ros_interfaces__msg__armsoftversion__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[53];
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
    assert(strncmp("rm_ros_interfaces.msg._armsoftversion.Armsoftversion", full_classname_dest, 52) == 0);
  }
  rm_ros_interfaces__msg__Armsoftversion * ros_message = _ros_message;
  {  // product_version
    PyObject * field = PyObject_GetAttrString(_pymsg, "product_version");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->product_version, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // controller_version
    PyObject * field = PyObject_GetAttrString(_pymsg, "controller_version");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->controller_version, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // algorithm_info
    PyObject * field = PyObject_GetAttrString(_pymsg, "algorithm_info");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->algorithm_info, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // ctrl_info
    PyObject * field = PyObject_GetAttrString(_pymsg, "ctrl_info");
    if (!field) {
      return false;
    }
    if (!rm_ros_interfaces__msg__softwarebuildinfo__convert_from_py(field, &ros_message->ctrl_info)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // dynamic_info
    PyObject * field = PyObject_GetAttrString(_pymsg, "dynamic_info");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->dynamic_info, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // plan_info
    PyObject * field = PyObject_GetAttrString(_pymsg, "plan_info");
    if (!field) {
      return false;
    }
    if (!rm_ros_interfaces__msg__softwarebuildinfo__convert_from_py(field, &ros_message->plan_info)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // com_info
    PyObject * field = PyObject_GetAttrString(_pymsg, "com_info");
    if (!field) {
      return false;
    }
    if (!rm_ros_interfaces__msg__softwarebuildinfo__convert_from_py(field, &ros_message->com_info)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // program_info
    PyObject * field = PyObject_GetAttrString(_pymsg, "program_info");
    if (!field) {
      return false;
    }
    if (!rm_ros_interfaces__msg__softwarebuildinfo__convert_from_py(field, &ros_message->program_info)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // state
    PyObject * field = PyObject_GetAttrString(_pymsg, "state");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->state = (Py_True == field);
    Py_DECREF(field);
  }
  {  // planversion
    PyObject * field = PyObject_GetAttrString(_pymsg, "planversion");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->planversion, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // ctrlversion
    PyObject * field = PyObject_GetAttrString(_pymsg, "ctrlversion");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->ctrlversion, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // kernal1
    PyObject * field = PyObject_GetAttrString(_pymsg, "kernal1");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->kernal1, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // kernal2
    PyObject * field = PyObject_GetAttrString(_pymsg, "kernal2");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->kernal2, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // productversion
    PyObject * field = PyObject_GetAttrString(_pymsg, "productversion");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->productversion, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * rm_ros_interfaces__msg__armsoftversion__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Armsoftversion */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("rm_ros_interfaces.msg._armsoftversion");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Armsoftversion");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  rm_ros_interfaces__msg__Armsoftversion * ros_message = (rm_ros_interfaces__msg__Armsoftversion *)raw_ros_message;
  {  // product_version
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->product_version.data,
      strlen(ros_message->product_version.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "product_version", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // controller_version
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->controller_version.data,
      strlen(ros_message->controller_version.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "controller_version", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // algorithm_info
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->algorithm_info.data,
      strlen(ros_message->algorithm_info.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "algorithm_info", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ctrl_info
    PyObject * field = NULL;
    field = rm_ros_interfaces__msg__softwarebuildinfo__convert_to_py(&ros_message->ctrl_info);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "ctrl_info", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dynamic_info
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->dynamic_info.data,
      strlen(ros_message->dynamic_info.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "dynamic_info", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // plan_info
    PyObject * field = NULL;
    field = rm_ros_interfaces__msg__softwarebuildinfo__convert_to_py(&ros_message->plan_info);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "plan_info", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // com_info
    PyObject * field = NULL;
    field = rm_ros_interfaces__msg__softwarebuildinfo__convert_to_py(&ros_message->com_info);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "com_info", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // program_info
    PyObject * field = NULL;
    field = rm_ros_interfaces__msg__softwarebuildinfo__convert_to_py(&ros_message->program_info);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "program_info", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // state
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->state ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // planversion
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->planversion.data,
      strlen(ros_message->planversion.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "planversion", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ctrlversion
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->ctrlversion.data,
      strlen(ros_message->ctrlversion.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "ctrlversion", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // kernal1
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->kernal1.data,
      strlen(ros_message->kernal1.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "kernal1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // kernal2
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->kernal2.data,
      strlen(ros_message->kernal2.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "kernal2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // productversion
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->productversion.data,
      strlen(ros_message->productversion.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "productversion", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
