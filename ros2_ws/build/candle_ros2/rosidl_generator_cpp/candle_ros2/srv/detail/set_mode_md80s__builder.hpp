// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from candle_ros2:srv/SetModeMd80s.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "candle_ros2/srv/set_mode_md80s.hpp"


#ifndef CANDLE_ROS2__SRV__DETAIL__SET_MODE_MD80S__BUILDER_HPP_
#define CANDLE_ROS2__SRV__DETAIL__SET_MODE_MD80S__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "candle_ros2/srv/detail/set_mode_md80s__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace candle_ros2
{

namespace srv
{

namespace builder
{

class Init_SetModeMd80s_Request_mode
{
public:
  explicit Init_SetModeMd80s_Request_mode(::candle_ros2::srv::SetModeMd80s_Request & msg)
  : msg_(msg)
  {}
  ::candle_ros2::srv::SetModeMd80s_Request mode(::candle_ros2::srv::SetModeMd80s_Request::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::candle_ros2::srv::SetModeMd80s_Request msg_;
};

class Init_SetModeMd80s_Request_drive_ids
{
public:
  Init_SetModeMd80s_Request_drive_ids()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetModeMd80s_Request_mode drive_ids(::candle_ros2::srv::SetModeMd80s_Request::_drive_ids_type arg)
  {
    msg_.drive_ids = std::move(arg);
    return Init_SetModeMd80s_Request_mode(msg_);
  }

private:
  ::candle_ros2::srv::SetModeMd80s_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::candle_ros2::srv::SetModeMd80s_Request>()
{
  return candle_ros2::srv::builder::Init_SetModeMd80s_Request_drive_ids();
}

}  // namespace candle_ros2


namespace candle_ros2
{

namespace srv
{

namespace builder
{

class Init_SetModeMd80s_Response_drives_success
{
public:
  Init_SetModeMd80s_Response_drives_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::candle_ros2::srv::SetModeMd80s_Response drives_success(::candle_ros2::srv::SetModeMd80s_Response::_drives_success_type arg)
  {
    msg_.drives_success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::candle_ros2::srv::SetModeMd80s_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::candle_ros2::srv::SetModeMd80s_Response>()
{
  return candle_ros2::srv::builder::Init_SetModeMd80s_Response_drives_success();
}

}  // namespace candle_ros2


namespace candle_ros2
{

namespace srv
{

namespace builder
{

class Init_SetModeMd80s_Event_response
{
public:
  explicit Init_SetModeMd80s_Event_response(::candle_ros2::srv::SetModeMd80s_Event & msg)
  : msg_(msg)
  {}
  ::candle_ros2::srv::SetModeMd80s_Event response(::candle_ros2::srv::SetModeMd80s_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::candle_ros2::srv::SetModeMd80s_Event msg_;
};

class Init_SetModeMd80s_Event_request
{
public:
  explicit Init_SetModeMd80s_Event_request(::candle_ros2::srv::SetModeMd80s_Event & msg)
  : msg_(msg)
  {}
  Init_SetModeMd80s_Event_response request(::candle_ros2::srv::SetModeMd80s_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetModeMd80s_Event_response(msg_);
  }

private:
  ::candle_ros2::srv::SetModeMd80s_Event msg_;
};

class Init_SetModeMd80s_Event_info
{
public:
  Init_SetModeMd80s_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetModeMd80s_Event_request info(::candle_ros2::srv::SetModeMd80s_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SetModeMd80s_Event_request(msg_);
  }

private:
  ::candle_ros2::srv::SetModeMd80s_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::candle_ros2::srv::SetModeMd80s_Event>()
{
  return candle_ros2::srv::builder::Init_SetModeMd80s_Event_info();
}

}  // namespace candle_ros2

#endif  // CANDLE_ROS2__SRV__DETAIL__SET_MODE_MD80S__BUILDER_HPP_
