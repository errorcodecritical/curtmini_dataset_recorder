// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from candle_ros2:msg/PositionPidCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "candle_ros2/msg/position_pid_command.hpp"


#ifndef CANDLE_ROS2__MSG__DETAIL__POSITION_PID_COMMAND__BUILDER_HPP_
#define CANDLE_ROS2__MSG__DETAIL__POSITION_PID_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "candle_ros2/msg/detail/position_pid_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace candle_ros2
{

namespace msg
{

namespace builder
{

class Init_PositionPidCommand_velocity_pid
{
public:
  explicit Init_PositionPidCommand_velocity_pid(::candle_ros2::msg::PositionPidCommand & msg)
  : msg_(msg)
  {}
  ::candle_ros2::msg::PositionPidCommand velocity_pid(::candle_ros2::msg::PositionPidCommand::_velocity_pid_type arg)
  {
    msg_.velocity_pid = std::move(arg);
    return std::move(msg_);
  }

private:
  ::candle_ros2::msg::PositionPidCommand msg_;
};

class Init_PositionPidCommand_position_pid
{
public:
  explicit Init_PositionPidCommand_position_pid(::candle_ros2::msg::PositionPidCommand & msg)
  : msg_(msg)
  {}
  Init_PositionPidCommand_velocity_pid position_pid(::candle_ros2::msg::PositionPidCommand::_position_pid_type arg)
  {
    msg_.position_pid = std::move(arg);
    return Init_PositionPidCommand_velocity_pid(msg_);
  }

private:
  ::candle_ros2::msg::PositionPidCommand msg_;
};

class Init_PositionPidCommand_drive_ids
{
public:
  Init_PositionPidCommand_drive_ids()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PositionPidCommand_position_pid drive_ids(::candle_ros2::msg::PositionPidCommand::_drive_ids_type arg)
  {
    msg_.drive_ids = std::move(arg);
    return Init_PositionPidCommand_position_pid(msg_);
  }

private:
  ::candle_ros2::msg::PositionPidCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::candle_ros2::msg::PositionPidCommand>()
{
  return candle_ros2::msg::builder::Init_PositionPidCommand_drive_ids();
}

}  // namespace candle_ros2

#endif  // CANDLE_ROS2__MSG__DETAIL__POSITION_PID_COMMAND__BUILDER_HPP_
