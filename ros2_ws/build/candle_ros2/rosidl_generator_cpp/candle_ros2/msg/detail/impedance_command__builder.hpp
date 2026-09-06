// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from candle_ros2:msg/ImpedanceCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "candle_ros2/msg/impedance_command.hpp"


#ifndef CANDLE_ROS2__MSG__DETAIL__IMPEDANCE_COMMAND__BUILDER_HPP_
#define CANDLE_ROS2__MSG__DETAIL__IMPEDANCE_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "candle_ros2/msg/detail/impedance_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace candle_ros2
{

namespace msg
{

namespace builder
{

class Init_ImpedanceCommand_max_output
{
public:
  explicit Init_ImpedanceCommand_max_output(::candle_ros2::msg::ImpedanceCommand & msg)
  : msg_(msg)
  {}
  ::candle_ros2::msg::ImpedanceCommand max_output(::candle_ros2::msg::ImpedanceCommand::_max_output_type arg)
  {
    msg_.max_output = std::move(arg);
    return std::move(msg_);
  }

private:
  ::candle_ros2::msg::ImpedanceCommand msg_;
};

class Init_ImpedanceCommand_kd
{
public:
  explicit Init_ImpedanceCommand_kd(::candle_ros2::msg::ImpedanceCommand & msg)
  : msg_(msg)
  {}
  Init_ImpedanceCommand_max_output kd(::candle_ros2::msg::ImpedanceCommand::_kd_type arg)
  {
    msg_.kd = std::move(arg);
    return Init_ImpedanceCommand_max_output(msg_);
  }

private:
  ::candle_ros2::msg::ImpedanceCommand msg_;
};

class Init_ImpedanceCommand_kp
{
public:
  explicit Init_ImpedanceCommand_kp(::candle_ros2::msg::ImpedanceCommand & msg)
  : msg_(msg)
  {}
  Init_ImpedanceCommand_kd kp(::candle_ros2::msg::ImpedanceCommand::_kp_type arg)
  {
    msg_.kp = std::move(arg);
    return Init_ImpedanceCommand_kd(msg_);
  }

private:
  ::candle_ros2::msg::ImpedanceCommand msg_;
};

class Init_ImpedanceCommand_drive_ids
{
public:
  Init_ImpedanceCommand_drive_ids()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ImpedanceCommand_kp drive_ids(::candle_ros2::msg::ImpedanceCommand::_drive_ids_type arg)
  {
    msg_.drive_ids = std::move(arg);
    return Init_ImpedanceCommand_kp(msg_);
  }

private:
  ::candle_ros2::msg::ImpedanceCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::candle_ros2::msg::ImpedanceCommand>()
{
  return candle_ros2::msg::builder::Init_ImpedanceCommand_drive_ids();
}

}  // namespace candle_ros2

#endif  // CANDLE_ROS2__MSG__DETAIL__IMPEDANCE_COMMAND__BUILDER_HPP_
