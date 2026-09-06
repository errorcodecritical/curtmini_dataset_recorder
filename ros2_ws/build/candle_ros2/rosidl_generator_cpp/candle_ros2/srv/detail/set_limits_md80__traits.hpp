// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from candle_ros2:srv/SetLimitsMd80.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "candle_ros2/srv/set_limits_md80.hpp"


#ifndef CANDLE_ROS2__SRV__DETAIL__SET_LIMITS_MD80__TRAITS_HPP_
#define CANDLE_ROS2__SRV__DETAIL__SET_LIMITS_MD80__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "candle_ros2/srv/detail/set_limits_md80__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace candle_ros2
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetLimitsMd80_Request & msg,
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

  // member: velocity_limit
  {
    if (msg.velocity_limit.size() == 0) {
      out << "velocity_limit: []";
    } else {
      out << "velocity_limit: [";
      size_t pending_items = msg.velocity_limit.size();
      for (auto item : msg.velocity_limit) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: torque_limit
  {
    if (msg.torque_limit.size() == 0) {
      out << "torque_limit: []";
    } else {
      out << "torque_limit: [";
      size_t pending_items = msg.torque_limit.size();
      for (auto item : msg.torque_limit) {
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
  const SetLimitsMd80_Request & msg,
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

  // member: velocity_limit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.velocity_limit.size() == 0) {
      out << "velocity_limit: []\n";
    } else {
      out << "velocity_limit:\n";
      for (auto item : msg.velocity_limit) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: torque_limit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.torque_limit.size() == 0) {
      out << "torque_limit: []\n";
    } else {
      out << "torque_limit:\n";
      for (auto item : msg.torque_limit) {
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

inline std::string to_yaml(const SetLimitsMd80_Request & msg, bool use_flow_style = false)
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

}  // namespace candle_ros2

namespace rosidl_generator_traits
{

[[deprecated("use candle_ros2::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const candle_ros2::srv::SetLimitsMd80_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  candle_ros2::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use candle_ros2::srv::to_yaml() instead")]]
inline std::string to_yaml(const candle_ros2::srv::SetLimitsMd80_Request & msg)
{
  return candle_ros2::srv::to_yaml(msg);
}

template<>
inline const char * data_type<candle_ros2::srv::SetLimitsMd80_Request>()
{
  return "candle_ros2::srv::SetLimitsMd80_Request";
}

template<>
inline const char * name<candle_ros2::srv::SetLimitsMd80_Request>()
{
  return "candle_ros2/srv/SetLimitsMd80_Request";
}

template<>
struct has_fixed_size<candle_ros2::srv::SetLimitsMd80_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<candle_ros2::srv::SetLimitsMd80_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<candle_ros2::srv::SetLimitsMd80_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace candle_ros2
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetLimitsMd80_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: drives_success
  {
    if (msg.drives_success.size() == 0) {
      out << "drives_success: []";
    } else {
      out << "drives_success: [";
      size_t pending_items = msg.drives_success.size();
      for (auto item : msg.drives_success) {
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
  const SetLimitsMd80_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: drives_success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.drives_success.size() == 0) {
      out << "drives_success: []\n";
    } else {
      out << "drives_success:\n";
      for (auto item : msg.drives_success) {
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

inline std::string to_yaml(const SetLimitsMd80_Response & msg, bool use_flow_style = false)
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

}  // namespace candle_ros2

namespace rosidl_generator_traits
{

[[deprecated("use candle_ros2::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const candle_ros2::srv::SetLimitsMd80_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  candle_ros2::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use candle_ros2::srv::to_yaml() instead")]]
inline std::string to_yaml(const candle_ros2::srv::SetLimitsMd80_Response & msg)
{
  return candle_ros2::srv::to_yaml(msg);
}

template<>
inline const char * data_type<candle_ros2::srv::SetLimitsMd80_Response>()
{
  return "candle_ros2::srv::SetLimitsMd80_Response";
}

template<>
inline const char * name<candle_ros2::srv::SetLimitsMd80_Response>()
{
  return "candle_ros2/srv/SetLimitsMd80_Response";
}

template<>
struct has_fixed_size<candle_ros2::srv::SetLimitsMd80_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<candle_ros2::srv::SetLimitsMd80_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<candle_ros2::srv::SetLimitsMd80_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace candle_ros2
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetLimitsMd80_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
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
  const SetLimitsMd80_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetLimitsMd80_Event & msg, bool use_flow_style = false)
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

}  // namespace candle_ros2

namespace rosidl_generator_traits
{

[[deprecated("use candle_ros2::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const candle_ros2::srv::SetLimitsMd80_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  candle_ros2::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use candle_ros2::srv::to_yaml() instead")]]
inline std::string to_yaml(const candle_ros2::srv::SetLimitsMd80_Event & msg)
{
  return candle_ros2::srv::to_yaml(msg);
}

template<>
inline const char * data_type<candle_ros2::srv::SetLimitsMd80_Event>()
{
  return "candle_ros2::srv::SetLimitsMd80_Event";
}

template<>
inline const char * name<candle_ros2::srv::SetLimitsMd80_Event>()
{
  return "candle_ros2/srv/SetLimitsMd80_Event";
}

template<>
struct has_fixed_size<candle_ros2::srv::SetLimitsMd80_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<candle_ros2::srv::SetLimitsMd80_Event>
  : std::integral_constant<bool, has_bounded_size<candle_ros2::srv::SetLimitsMd80_Request>::value && has_bounded_size<candle_ros2::srv::SetLimitsMd80_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<candle_ros2::srv::SetLimitsMd80_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<candle_ros2::srv::SetLimitsMd80>()
{
  return "candle_ros2::srv::SetLimitsMd80";
}

template<>
inline const char * name<candle_ros2::srv::SetLimitsMd80>()
{
  return "candle_ros2/srv/SetLimitsMd80";
}

template<>
struct has_fixed_size<candle_ros2::srv::SetLimitsMd80>
  : std::integral_constant<
    bool,
    has_fixed_size<candle_ros2::srv::SetLimitsMd80_Request>::value &&
    has_fixed_size<candle_ros2::srv::SetLimitsMd80_Response>::value
  >
{
};

template<>
struct has_bounded_size<candle_ros2::srv::SetLimitsMd80>
  : std::integral_constant<
    bool,
    has_bounded_size<candle_ros2::srv::SetLimitsMd80_Request>::value &&
    has_bounded_size<candle_ros2::srv::SetLimitsMd80_Response>::value
  >
{
};

template<>
struct is_service<candle_ros2::srv::SetLimitsMd80>
  : std::true_type
{
};

template<>
struct is_service_request<candle_ros2::srv::SetLimitsMd80_Request>
  : std::true_type
{
};

template<>
struct is_service_response<candle_ros2::srv::SetLimitsMd80_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CANDLE_ROS2__SRV__DETAIL__SET_LIMITS_MD80__TRAITS_HPP_
