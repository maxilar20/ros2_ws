// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from baxter_core_msgs:srv/CloseCamera.idl
// generated code does not contain a copyright notice

#ifndef BAXTER_CORE_MSGS__SRV__DETAIL__CLOSE_CAMERA__TRAITS_HPP_
#define BAXTER_CORE_MSGS__SRV__DETAIL__CLOSE_CAMERA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "baxter_core_msgs/srv/detail/close_camera__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace baxter_core_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const CloseCamera_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CloseCamera_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CloseCamera_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace baxter_core_msgs

namespace rosidl_generator_traits
{

[[deprecated("use baxter_core_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const baxter_core_msgs::srv::CloseCamera_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  baxter_core_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use baxter_core_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const baxter_core_msgs::srv::CloseCamera_Request & msg)
{
  return baxter_core_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<baxter_core_msgs::srv::CloseCamera_Request>()
{
  return "baxter_core_msgs::srv::CloseCamera_Request";
}

template<>
inline const char * name<baxter_core_msgs::srv::CloseCamera_Request>()
{
  return "baxter_core_msgs/srv/CloseCamera_Request";
}

template<>
struct has_fixed_size<baxter_core_msgs::srv::CloseCamera_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<baxter_core_msgs::srv::CloseCamera_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<baxter_core_msgs::srv::CloseCamera_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace baxter_core_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const CloseCamera_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: err
  {
    out << "err: ";
    rosidl_generator_traits::value_to_yaml(msg.err, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CloseCamera_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: err
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "err: ";
    rosidl_generator_traits::value_to_yaml(msg.err, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CloseCamera_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace baxter_core_msgs

namespace rosidl_generator_traits
{

[[deprecated("use baxter_core_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const baxter_core_msgs::srv::CloseCamera_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  baxter_core_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use baxter_core_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const baxter_core_msgs::srv::CloseCamera_Response & msg)
{
  return baxter_core_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<baxter_core_msgs::srv::CloseCamera_Response>()
{
  return "baxter_core_msgs::srv::CloseCamera_Response";
}

template<>
inline const char * name<baxter_core_msgs::srv::CloseCamera_Response>()
{
  return "baxter_core_msgs/srv/CloseCamera_Response";
}

template<>
struct has_fixed_size<baxter_core_msgs::srv::CloseCamera_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<baxter_core_msgs::srv::CloseCamera_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<baxter_core_msgs::srv::CloseCamera_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<baxter_core_msgs::srv::CloseCamera>()
{
  return "baxter_core_msgs::srv::CloseCamera";
}

template<>
inline const char * name<baxter_core_msgs::srv::CloseCamera>()
{
  return "baxter_core_msgs/srv/CloseCamera";
}

template<>
struct has_fixed_size<baxter_core_msgs::srv::CloseCamera>
  : std::integral_constant<
    bool,
    has_fixed_size<baxter_core_msgs::srv::CloseCamera_Request>::value &&
    has_fixed_size<baxter_core_msgs::srv::CloseCamera_Response>::value
  >
{
};

template<>
struct has_bounded_size<baxter_core_msgs::srv::CloseCamera>
  : std::integral_constant<
    bool,
    has_bounded_size<baxter_core_msgs::srv::CloseCamera_Request>::value &&
    has_bounded_size<baxter_core_msgs::srv::CloseCamera_Response>::value
  >
{
};

template<>
struct is_service<baxter_core_msgs::srv::CloseCamera>
  : std::true_type
{
};

template<>
struct is_service_request<baxter_core_msgs::srv::CloseCamera_Request>
  : std::true_type
{
};

template<>
struct is_service_response<baxter_core_msgs::srv::CloseCamera_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // BAXTER_CORE_MSGS__SRV__DETAIL__CLOSE_CAMERA__TRAITS_HPP_
