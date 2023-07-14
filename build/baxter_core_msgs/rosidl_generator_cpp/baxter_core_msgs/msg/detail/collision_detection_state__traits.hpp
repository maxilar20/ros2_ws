// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from baxter_core_msgs:msg/CollisionDetectionState.idl
// generated code does not contain a copyright notice

#ifndef BAXTER_CORE_MSGS__MSG__DETAIL__COLLISION_DETECTION_STATE__TRAITS_HPP_
#define BAXTER_CORE_MSGS__MSG__DETAIL__COLLISION_DETECTION_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "baxter_core_msgs/msg/detail/collision_detection_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace baxter_core_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CollisionDetectionState & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: collision_state
  {
    out << "collision_state: ";
    rosidl_generator_traits::value_to_yaml(msg.collision_state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CollisionDetectionState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: collision_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "collision_state: ";
    rosidl_generator_traits::value_to_yaml(msg.collision_state, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CollisionDetectionState & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace baxter_core_msgs

namespace rosidl_generator_traits
{

[[deprecated("use baxter_core_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const baxter_core_msgs::msg::CollisionDetectionState & msg,
  std::ostream & out, size_t indentation = 0)
{
  baxter_core_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use baxter_core_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const baxter_core_msgs::msg::CollisionDetectionState & msg)
{
  return baxter_core_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<baxter_core_msgs::msg::CollisionDetectionState>()
{
  return "baxter_core_msgs::msg::CollisionDetectionState";
}

template<>
inline const char * name<baxter_core_msgs::msg::CollisionDetectionState>()
{
  return "baxter_core_msgs/msg/CollisionDetectionState";
}

template<>
struct has_fixed_size<baxter_core_msgs::msg::CollisionDetectionState>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<baxter_core_msgs::msg::CollisionDetectionState>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<baxter_core_msgs::msg::CollisionDetectionState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BAXTER_CORE_MSGS__MSG__DETAIL__COLLISION_DETECTION_STATE__TRAITS_HPP_
