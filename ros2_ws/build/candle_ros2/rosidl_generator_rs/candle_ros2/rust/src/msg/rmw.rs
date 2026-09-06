#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "candle_ros2__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__candle_ros2__msg__ImpedanceCommand() -> *const std::ffi::c_void;
}

#[link(name = "candle_ros2__rosidl_generator_c")]
extern "C" {
    fn candle_ros2__msg__ImpedanceCommand__init(msg: *mut ImpedanceCommand) -> bool;
    fn candle_ros2__msg__ImpedanceCommand__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ImpedanceCommand>, size: usize) -> bool;
    fn candle_ros2__msg__ImpedanceCommand__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ImpedanceCommand>);
    fn candle_ros2__msg__ImpedanceCommand__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ImpedanceCommand>, out_seq: *mut rosidl_runtime_rs::Sequence<ImpedanceCommand>) -> bool;
}

// Corresponds to candle_ros2__msg__ImpedanceCommand
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ImpedanceCommand {

    // This member is not documented.
    #[allow(missing_docs)]
    pub drive_ids: rosidl_runtime_rs::Sequence<u16>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub kp: rosidl_runtime_rs::Sequence<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub kd: rosidl_runtime_rs::Sequence<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub max_output: rosidl_runtime_rs::Sequence<f32>,

}



impl Default for ImpedanceCommand {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !candle_ros2__msg__ImpedanceCommand__init(&mut msg as *mut _) {
        panic!("Call to candle_ros2__msg__ImpedanceCommand__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ImpedanceCommand {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { candle_ros2__msg__ImpedanceCommand__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { candle_ros2__msg__ImpedanceCommand__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { candle_ros2__msg__ImpedanceCommand__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ImpedanceCommand {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ImpedanceCommand where Self: Sized {
  const TYPE_NAME: &'static str = "candle_ros2/msg/ImpedanceCommand";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__candle_ros2__msg__ImpedanceCommand() }
  }
}


#[link(name = "candle_ros2__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__candle_ros2__msg__MotionCommand() -> *const std::ffi::c_void;
}

#[link(name = "candle_ros2__rosidl_generator_c")]
extern "C" {
    fn candle_ros2__msg__MotionCommand__init(msg: *mut MotionCommand) -> bool;
    fn candle_ros2__msg__MotionCommand__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MotionCommand>, size: usize) -> bool;
    fn candle_ros2__msg__MotionCommand__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MotionCommand>);
    fn candle_ros2__msg__MotionCommand__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MotionCommand>, out_seq: *mut rosidl_runtime_rs::Sequence<MotionCommand>) -> bool;
}

// Corresponds to candle_ros2__msg__MotionCommand
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MotionCommand {

    // This member is not documented.
    #[allow(missing_docs)]
    pub drive_ids: rosidl_runtime_rs::Sequence<u32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub target_position: rosidl_runtime_rs::Sequence<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub target_velocity: rosidl_runtime_rs::Sequence<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub target_torque: rosidl_runtime_rs::Sequence<f32>,

}



impl Default for MotionCommand {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !candle_ros2__msg__MotionCommand__init(&mut msg as *mut _) {
        panic!("Call to candle_ros2__msg__MotionCommand__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MotionCommand {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { candle_ros2__msg__MotionCommand__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { candle_ros2__msg__MotionCommand__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { candle_ros2__msg__MotionCommand__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MotionCommand {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MotionCommand where Self: Sized {
  const TYPE_NAME: &'static str = "candle_ros2/msg/MotionCommand";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__candle_ros2__msg__MotionCommand() }
  }
}


#[link(name = "candle_ros2__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__candle_ros2__msg__Pid() -> *const std::ffi::c_void;
}

#[link(name = "candle_ros2__rosidl_generator_c")]
extern "C" {
    fn candle_ros2__msg__Pid__init(msg: *mut Pid) -> bool;
    fn candle_ros2__msg__Pid__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Pid>, size: usize) -> bool;
    fn candle_ros2__msg__Pid__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Pid>);
    fn candle_ros2__msg__Pid__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Pid>, out_seq: *mut rosidl_runtime_rs::Sequence<Pid>) -> bool;
}

// Corresponds to candle_ros2__msg__Pid
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !candle_ros2__msg__Pid__init(&mut msg as *mut _) {
        panic!("Call to candle_ros2__msg__Pid__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Pid {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { candle_ros2__msg__Pid__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { candle_ros2__msg__Pid__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { candle_ros2__msg__Pid__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Pid {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Pid where Self: Sized {
  const TYPE_NAME: &'static str = "candle_ros2/msg/Pid";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__candle_ros2__msg__Pid() }
  }
}


#[link(name = "candle_ros2__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__candle_ros2__msg__VelocityPidCommand() -> *const std::ffi::c_void;
}

#[link(name = "candle_ros2__rosidl_generator_c")]
extern "C" {
    fn candle_ros2__msg__VelocityPidCommand__init(msg: *mut VelocityPidCommand) -> bool;
    fn candle_ros2__msg__VelocityPidCommand__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<VelocityPidCommand>, size: usize) -> bool;
    fn candle_ros2__msg__VelocityPidCommand__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<VelocityPidCommand>);
    fn candle_ros2__msg__VelocityPidCommand__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<VelocityPidCommand>, out_seq: *mut rosidl_runtime_rs::Sequence<VelocityPidCommand>) -> bool;
}

// Corresponds to candle_ros2__msg__VelocityPidCommand
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VelocityPidCommand {

    // This member is not documented.
    #[allow(missing_docs)]
    pub drive_ids: rosidl_runtime_rs::Sequence<u16>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub velocity_pid: rosidl_runtime_rs::Sequence<super::super::msg::rmw::Pid>,

}



impl Default for VelocityPidCommand {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !candle_ros2__msg__VelocityPidCommand__init(&mut msg as *mut _) {
        panic!("Call to candle_ros2__msg__VelocityPidCommand__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for VelocityPidCommand {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { candle_ros2__msg__VelocityPidCommand__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { candle_ros2__msg__VelocityPidCommand__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { candle_ros2__msg__VelocityPidCommand__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for VelocityPidCommand {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for VelocityPidCommand where Self: Sized {
  const TYPE_NAME: &'static str = "candle_ros2/msg/VelocityPidCommand";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__candle_ros2__msg__VelocityPidCommand() }
  }
}


#[link(name = "candle_ros2__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__candle_ros2__msg__PositionPidCommand() -> *const std::ffi::c_void;
}

#[link(name = "candle_ros2__rosidl_generator_c")]
extern "C" {
    fn candle_ros2__msg__PositionPidCommand__init(msg: *mut PositionPidCommand) -> bool;
    fn candle_ros2__msg__PositionPidCommand__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PositionPidCommand>, size: usize) -> bool;
    fn candle_ros2__msg__PositionPidCommand__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PositionPidCommand>);
    fn candle_ros2__msg__PositionPidCommand__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PositionPidCommand>, out_seq: *mut rosidl_runtime_rs::Sequence<PositionPidCommand>) -> bool;
}

// Corresponds to candle_ros2__msg__PositionPidCommand
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PositionPidCommand {

    // This member is not documented.
    #[allow(missing_docs)]
    pub drive_ids: rosidl_runtime_rs::Sequence<u16>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub position_pid: rosidl_runtime_rs::Sequence<super::super::msg::rmw::Pid>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub velocity_pid: rosidl_runtime_rs::Sequence<super::super::msg::rmw::Pid>,

}



impl Default for PositionPidCommand {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !candle_ros2__msg__PositionPidCommand__init(&mut msg as *mut _) {
        panic!("Call to candle_ros2__msg__PositionPidCommand__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PositionPidCommand {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { candle_ros2__msg__PositionPidCommand__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { candle_ros2__msg__PositionPidCommand__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { candle_ros2__msg__PositionPidCommand__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PositionPidCommand {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PositionPidCommand where Self: Sized {
  const TYPE_NAME: &'static str = "candle_ros2/msg/PositionPidCommand";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__candle_ros2__msg__PositionPidCommand() }
  }
}


