// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from origincar_msg:msg/Sign.idl
// generated code does not contain a copyright notice

#ifndef ORIGINCAR_MSG__MSG__DETAIL__SIGN__TRAITS_HPP_
#define ORIGINCAR_MSG__MSG__DETAIL__SIGN__TRAITS_HPP_

#include "origincar_msg/msg/detail/sign__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<origincar_msg::msg::Sign>()
{
  return "origincar_msg::msg::Sign";
}

template<>
inline const char * name<origincar_msg::msg::Sign>()
{
  return "origincar_msg/msg/Sign";
}

template<>
struct has_fixed_size<origincar_msg::msg::Sign>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<origincar_msg::msg::Sign>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<origincar_msg::msg::Sign>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ORIGINCAR_MSG__MSG__DETAIL__SIGN__TRAITS_HPP_
