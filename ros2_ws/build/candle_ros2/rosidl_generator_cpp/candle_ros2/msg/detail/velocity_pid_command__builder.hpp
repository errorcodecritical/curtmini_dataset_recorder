// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from candle_ros2:msg/VelocityPidCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "candle_ros2/msg/velocity_pid_command.hpp"


#ifndef CANDLE_ROS2__MSG__DETAIL__VELOCITY_PID_COMMAND__BUILDER_HPP_
#define CANDLE_ROS2__MSG__DETAIL__VELOCITY_PID_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "candle_ros2/msg/detail/velocity_pid_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace candle_ros2
{

namespace msg
{

namespace builder
{

class Init_VelocityPidCommand_velocity_pid
{
public:
  explicit Init_VelocityPidCommand_velocity_pid(::candle_ros2::msg::VelocityPidCommand & msg)
  : msg_(msg)
  {}
  ::candle_ros2::msg::VelocityPidCommand velocity_pid(::candle_ros2::msg::VelocityPidCommand::_velocity_pid_type arg)
  {
    msg_.velocity_pid = std::move(arg);
    return std::move(msg_);
  }

private:
  ::candle_ros2::msg::VelocityPidCommand msg_;
};

class Init_VelocityPidCommand_drive_ids
{
public:
  Init_VelocityPidCommand_drive_ids()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VelocityPidCommand_velocity_pid drive_ids(::candle_ros2::msg::VelocityPidCommand::_drive_ids_type arg)
  {
    msg_.drive_ids = std::move(arg);
    return Init_VelocityPidCommand_velocity_pid(msg_);
  }

private:
  ::candle_ros2::msg::VelocityPidCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::candle_ros2::msg::VelocityPidCommand>()
{
  return candle_ros2::msg::builder::Init_VelocityPidCommand_drive_ids();
}

}  // namespace candle_ros2

#endif  // CANDLE_ROS2__MSG__DETAIL__VELOCITY_PID_COMMAND__BUILDER_HPP_
