// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from candle_ros2:msg/MotionCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "candle_ros2/msg/motion_command.hpp"


#ifndef CANDLE_ROS2__MSG__DETAIL__MOTION_COMMAND__BUILDER_HPP_
#define CANDLE_ROS2__MSG__DETAIL__MOTION_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "candle_ros2/msg/detail/motion_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace candle_ros2
{

namespace msg
{

namespace builder
{

class Init_MotionCommand_target_torque
{
public:
  explicit Init_MotionCommand_target_torque(::candle_ros2::msg::MotionCommand & msg)
  : msg_(msg)
  {}
  ::candle_ros2::msg::MotionCommand target_torque(::candle_ros2::msg::MotionCommand::_target_torque_type arg)
  {
    msg_.target_torque = std::move(arg);
    return std::move(msg_);
  }

private:
  ::candle_ros2::msg::MotionCommand msg_;
};

class Init_MotionCommand_target_velocity
{
public:
  explicit Init_MotionCommand_target_velocity(::candle_ros2::msg::MotionCommand & msg)
  : msg_(msg)
  {}
  Init_MotionCommand_target_torque target_velocity(::candle_ros2::msg::MotionCommand::_target_velocity_type arg)
  {
    msg_.target_velocity = std::move(arg);
    return Init_MotionCommand_target_torque(msg_);
  }

private:
  ::candle_ros2::msg::MotionCommand msg_;
};

class Init_MotionCommand_target_position
{
public:
  explicit Init_MotionCommand_target_position(::candle_ros2::msg::MotionCommand & msg)
  : msg_(msg)
  {}
  Init_MotionCommand_target_velocity target_position(::candle_ros2::msg::MotionCommand::_target_position_type arg)
  {
    msg_.target_position = std::move(arg);
    return Init_MotionCommand_target_velocity(msg_);
  }

private:
  ::candle_ros2::msg::MotionCommand msg_;
};

class Init_MotionCommand_drive_ids
{
public:
  Init_MotionCommand_drive_ids()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotionCommand_target_position drive_ids(::candle_ros2::msg::MotionCommand::_drive_ids_type arg)
  {
    msg_.drive_ids = std::move(arg);
    return Init_MotionCommand_target_position(msg_);
  }

private:
  ::candle_ros2::msg::MotionCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::candle_ros2::msg::MotionCommand>()
{
  return candle_ros2::msg::builder::Init_MotionCommand_drive_ids();
}

}  // namespace candle_ros2

#endif  // CANDLE_ROS2__MSG__DETAIL__MOTION_COMMAND__BUILDER_HPP_
