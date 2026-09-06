// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from candle_ros2:msg/ImpedanceCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "candle_ros2/msg/impedance_command.hpp"


#ifndef CANDLE_ROS2__MSG__DETAIL__IMPEDANCE_COMMAND__TRAITS_HPP_
#define CANDLE_ROS2__MSG__DETAIL__IMPEDANCE_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "candle_ros2/msg/detail/impedance_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace candle_ros2
{

namespace msg
{

inline void to_flow_style_yaml(
  const ImpedanceCommand & msg,
  std::ostream & out)
{
  out << "{";
  // member: drive_ids
  {
    if (msg.drive_ids.size() == 0) {
      out << "drive_ids: []";
    } else {
      out << "drive_ids: [";
      size_t pending_items = msg.drive_ids.size();
      for (auto item : msg.drive_ids) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: kp
  {
    if (msg.kp.size() == 0) {
      out << "kp: []";
    } else {
      out << "kp: [";
      size_t pending_items = msg.kp.size();
      for (auto item : msg.kp) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: kd
  {
    if (msg.kd.size() == 0) {
      out << "kd: []";
    } else {
      out << "kd: [";
      size_t pending_items = msg.kd.size();
      for (auto item : msg.kd) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: max_output
  {
    if (msg.max_output.size() == 0) {
      out << "max_output: []";
    } else {
      out << "max_output: [";
      size_t pending_items = msg.max_output.size();
      for (auto item : msg.max_output) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ImpedanceCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: drive_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.drive_ids.size() == 0) {
      out << "drive_ids: []\n";
    } else {
      out << "drive_ids:\n";
      for (auto item : msg.drive_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: kp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.kp.size() == 0) {
      out << "kp: []\n";
    } else {
      out << "kp:\n";
      for (auto item : msg.kp) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: kd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.kd.size() == 0) {
      out << "kd: []\n";
    } else {
      out << "kd:\n";
      for (auto item : msg.kd) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: max_output
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.max_output.size() == 0) {
      out << "max_output: []\n";
    } else {
      out << "max_output:\n";
      for (auto item : msg.max_output) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ImpedanceCommand & msg, bool use_flow_style = false)
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

}  // namespace candle_ros2

namespace rosidl_generator_traits
{

[[deprecated("use candle_ros2::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const candle_ros2::msg::ImpedanceCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  candle_ros2::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use candle_ros2::msg::to_yaml() instead")]]
inline std::string to_yaml(const candle_ros2::msg::ImpedanceCommand & msg)
{
  return candle_ros2::msg::to_yaml(msg);
}

template<>
inline const char * data_type<candle_ros2::msg::ImpedanceCommand>()
{
  return "candle_ros2::msg::ImpedanceCommand";
}

template<>
inline const char * name<candle_ros2::msg::ImpedanceCommand>()
{
  return "candle_ros2/msg/ImpedanceCommand";
}

template<>
struct has_fixed_size<candle_ros2::msg::ImpedanceCommand>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<candle_ros2::msg::ImpedanceCommand>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<candle_ros2::msg::ImpedanceCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CANDLE_ROS2__MSG__DETAIL__IMPEDANCE_COMMAND__TRAITS_HPP_
