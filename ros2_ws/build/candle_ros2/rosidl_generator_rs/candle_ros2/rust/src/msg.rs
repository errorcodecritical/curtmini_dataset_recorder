#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to candle_ros2__msg__ImpedanceCommand

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ImpedanceCommand {

    // This member is not documented.
    #[allow(missing_docs)]
    pub drive_ids: Vec<u16>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub kp: Vec<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub kd: Vec<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub max_output: Vec<f32>,

}



impl Default for ImpedanceCommand {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ImpedanceCommand::default())
  }
}

impl rosidl_runtime_rs::Message for ImpedanceCommand {
  type RmwMsg = super::msg::rmw::ImpedanceCommand;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        drive_ids: msg.drive_ids.into(),
        kp: msg.kp.into(),
        kd: msg.kd.into(),
        max_output: msg.max_output.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        drive_ids: msg.drive_ids.as_slice().into(),
        kp: msg.kp.as_slice().into(),
        kd: msg.kd.as_slice().into(),
        max_output: msg.max_output.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      drive_ids: msg.drive_ids
          .into_iter()
          .collect(),
      kp: msg.kp
          .into_iter()
          .collect(),
      kd: msg.kd
          .into_iter()
          .collect(),
      max_output: msg.max_output
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to candle_ros2__msg__MotionCommand

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MotionCommand {

    // This member is not documented.
    #[allow(missing_docs)]
    pub drive_ids: Vec<u32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub target_position: Vec<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub target_velocity: Vec<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub target_torque: Vec<f32>,

}



impl Default for MotionCommand {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MotionCommand::default())
  }
}

impl rosidl_runtime_rs::Message for MotionCommand {
  type RmwMsg = super::msg::rmw::MotionCommand;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        drive_ids: msg.drive_ids.into(),
        target_position: msg.target_position.into(),
        target_velocity: msg.target_velocity.into(),
        target_torque: msg.target_torque.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        drive_ids: msg.drive_ids.as_slice().into(),
        target_position: msg.target_position.as_slice().into(),
        target_velocity: msg.target_velocity.as_slice().into(),
        target_torque: msg.target_torque.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      drive_ids: msg.drive_ids
          .into_iter()
          .collect(),
      target_position: msg.target_position
          .into_iter()
          .collect(),
      target_velocity: msg.target_velocity
          .into_iter()
          .collect(),
      target_torque: msg.target_torque
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to candle_ros2__msg__Pid

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Pid {

    // This member is not documented.
    #[allow(missing_docs)]
    pub kp: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ki: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub kd: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub i_windup: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub max_output: f32,

}



impl Default for Pid {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Pid::default())
  }
}

impl rosidl_runtime_rs::Message for Pid {
  type RmwMsg = super::msg::rmw::Pid;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        kp: msg.kp,
        ki: msg.ki,
        kd: msg.kd,
        i_windup: msg.i_windup,
        max_output: msg.max_output,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      kp: msg.kp,
      ki: msg.ki,
      kd: msg.kd,
      i_windup: msg.i_windup,
      max_output: msg.max_output,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      kp: msg.kp,
      ki: msg.ki,
      kd: msg.kd,
      i_windup: msg.i_windup,
      max_output: msg.max_output,
    }
  }
}


// Corresponds to candle_ros2__msg__VelocityPidCommand

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VelocityPidCommand {

    // This member is not documented.
    #[allow(missing_docs)]
    pub drive_ids: Vec<u16>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub velocity_pid: Vec<super::msg::Pid>,

}



impl Default for VelocityPidCommand {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::VelocityPidCommand::default())
  }
}

impl rosidl_runtime_rs::Message for VelocityPidCommand {
  type RmwMsg = super::msg::rmw::VelocityPidCommand;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        drive_ids: msg.drive_ids.into(),
        velocity_pid: msg.velocity_pid
          .into_iter()
          .map(|elem| super::msg::Pid::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        drive_ids: msg.drive_ids.as_slice().into(),
        velocity_pid: msg.velocity_pid
          .iter()
          .map(|elem| super::msg::Pid::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      drive_ids: msg.drive_ids
          .into_iter()
          .collect(),
      velocity_pid: msg.velocity_pid
          .into_iter()
          .map(super::msg::Pid::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to candle_ros2__msg__PositionPidCommand

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PositionPidCommand {

    // This member is not documented.
    #[allow(missing_docs)]
    pub drive_ids: Vec<u16>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub position_pid: Vec<super::msg::Pid>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub velocity_pid: Vec<super::msg::Pid>,

}



impl Default for PositionPidCommand {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::PositionPidCommand::default())
  }
}

impl rosidl_runtime_rs::Message for PositionPidCommand {
  type RmwMsg = super::msg::rmw::PositionPidCommand;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        drive_ids: msg.drive_ids.into(),
        position_pid: msg.position_pid
          .into_iter()
          .map(|elem| super::msg::Pid::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        velocity_pid: msg.velocity_pid
          .into_iter()
          .map(|elem| super::msg::Pid::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        drive_ids: msg.drive_ids.as_slice().into(),
        position_pid: msg.position_pid
          .iter()
          .map(|elem| super::msg::Pid::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        velocity_pid: msg.velocity_pid
          .iter()
          .map(|elem| super::msg::Pid::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      drive_ids: msg.drive_ids
          .into_iter()
          .collect(),
      position_pid: msg.position_pid
          .into_iter()
          .map(super::msg::Pid::from_rmw_message)
          .collect(),
      velocity_pid: msg.velocity_pid
          .into_iter()
          .map(super::msg::Pid::from_rmw_message)
          .collect(),
    }
  }
}


