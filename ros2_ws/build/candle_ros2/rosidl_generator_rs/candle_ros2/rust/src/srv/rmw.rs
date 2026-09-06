#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "candle_ros2__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__candle_ros2__srv__AddMd80s_Request() -> *const std::ffi::c_void;
}

#[link(name = "candle_ros2__rosidl_generator_c")]
extern "C" {
    fn candle_ros2__srv__AddMd80s_Request__init(msg: *mut AddMd80s_Request) -> bool;
    fn candle_ros2__srv__AddMd80s_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<AddMd80s_Request>, size: usize) -> bool;
    fn candle_ros2__srv__AddMd80s_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<AddMd80s_Request>);
    fn candle_ros2__srv__AddMd80s_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<AddMd80s_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<AddMd80s_Request>) -> bool;
}

// Corresponds to candle_ros2__srv__AddMd80s_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AddMd80s_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub drive_ids: rosidl_runtime_rs::Sequence<u16>,

}



impl Default for AddMd80s_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !candle_ros2__srv__AddMd80s_Request__init(&mut msg as *mut _) {
        panic!("Call to candle_ros2__srv__AddMd80s_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for AddMd80s_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { candle_ros2__srv__AddMd80s_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { candle_ros2__srv__AddMd80s_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { candle_ros2__srv__AddMd80s_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for AddMd80s_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for AddMd80s_Request where Self: Sized {
  const TYPE_NAME: &'static str = "candle_ros2/srv/AddMd80s_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__candle_ros2__srv__AddMd80s_Request() }
  }
}


#[link(name = "candle_ros2__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__candle_ros2__srv__AddMd80s_Response() -> *const std::ffi::c_void;
}

#[link(name = "candle_ros2__rosidl_generator_c")]
extern "C" {
    fn candle_ros2__srv__AddMd80s_Response__init(msg: *mut AddMd80s_Response) -> bool;
    fn candle_ros2__srv__AddMd80s_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<AddMd80s_Response>, size: usize) -> bool;
    fn candle_ros2__srv__AddMd80s_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<AddMd80s_Response>);
    fn candle_ros2__srv__AddMd80s_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<AddMd80s_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<AddMd80s_Response>) -> bool;
}

// Corresponds to candle_ros2__srv__AddMd80s_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AddMd80s_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub drives_success: rosidl_runtime_rs::Sequence<bool>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub total_number_of_drives: u16,

}



impl Default for AddMd80s_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !candle_ros2__srv__AddMd80s_Response__init(&mut msg as *mut _) {
        panic!("Call to candle_ros2__srv__AddMd80s_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for AddMd80s_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { candle_ros2__srv__AddMd80s_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { candle_ros2__srv__AddMd80s_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { candle_ros2__srv__AddMd80s_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for AddMd80s_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for AddMd80s_Response where Self: Sized {
  const TYPE_NAME: &'static str = "candle_ros2/srv/AddMd80s_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__candle_ros2__srv__AddMd80s_Response() }
  }
}


#[link(name = "candle_ros2__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__candle_ros2__srv__GenericMd80Msg_Request() -> *const std::ffi::c_void;
}

#[link(name = "candle_ros2__rosidl_generator_c")]
extern "C" {
    fn candle_ros2__srv__GenericMd80Msg_Request__init(msg: *mut GenericMd80Msg_Request) -> bool;
    fn candle_ros2__srv__GenericMd80Msg_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GenericMd80Msg_Request>, size: usize) -> bool;
    fn candle_ros2__srv__GenericMd80Msg_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GenericMd80Msg_Request>);
    fn candle_ros2__srv__GenericMd80Msg_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GenericMd80Msg_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GenericMd80Msg_Request>) -> bool;
}

// Corresponds to candle_ros2__srv__GenericMd80Msg_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GenericMd80Msg_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub drive_ids: rosidl_runtime_rs::Sequence<u16>,

}



impl Default for GenericMd80Msg_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !candle_ros2__srv__GenericMd80Msg_Request__init(&mut msg as *mut _) {
        panic!("Call to candle_ros2__srv__GenericMd80Msg_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GenericMd80Msg_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { candle_ros2__srv__GenericMd80Msg_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { candle_ros2__srv__GenericMd80Msg_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { candle_ros2__srv__GenericMd80Msg_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GenericMd80Msg_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GenericMd80Msg_Request where Self: Sized {
  const TYPE_NAME: &'static str = "candle_ros2/srv/GenericMd80Msg_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__candle_ros2__srv__GenericMd80Msg_Request() }
  }
}


#[link(name = "candle_ros2__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__candle_ros2__srv__GenericMd80Msg_Response() -> *const std::ffi::c_void;
}

#[link(name = "candle_ros2__rosidl_generator_c")]
extern "C" {
    fn candle_ros2__srv__GenericMd80Msg_Response__init(msg: *mut GenericMd80Msg_Response) -> bool;
    fn candle_ros2__srv__GenericMd80Msg_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GenericMd80Msg_Response>, size: usize) -> bool;
    fn candle_ros2__srv__GenericMd80Msg_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GenericMd80Msg_Response>);
    fn candle_ros2__srv__GenericMd80Msg_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GenericMd80Msg_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GenericMd80Msg_Response>) -> bool;
}

// Corresponds to candle_ros2__srv__GenericMd80Msg_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GenericMd80Msg_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub drives_success: rosidl_runtime_rs::Sequence<bool>,

}



impl Default for GenericMd80Msg_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !candle_ros2__srv__GenericMd80Msg_Response__init(&mut msg as *mut _) {
        panic!("Call to candle_ros2__srv__GenericMd80Msg_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GenericMd80Msg_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { candle_ros2__srv__GenericMd80Msg_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { candle_ros2__srv__GenericMd80Msg_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { candle_ros2__srv__GenericMd80Msg_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GenericMd80Msg_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GenericMd80Msg_Response where Self: Sized {
  const TYPE_NAME: &'static str = "candle_ros2/srv/GenericMd80Msg_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__candle_ros2__srv__GenericMd80Msg_Response() }
  }
}


#[link(name = "candle_ros2__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__candle_ros2__srv__SetModeMd80s_Request() -> *const std::ffi::c_void;
}

#[link(name = "candle_ros2__rosidl_generator_c")]
extern "C" {
    fn candle_ros2__srv__SetModeMd80s_Request__init(msg: *mut SetModeMd80s_Request) -> bool;
    fn candle_ros2__srv__SetModeMd80s_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetModeMd80s_Request>, size: usize) -> bool;
    fn candle_ros2__srv__SetModeMd80s_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetModeMd80s_Request>);
    fn candle_ros2__srv__SetModeMd80s_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetModeMd80s_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetModeMd80s_Request>) -> bool;
}

// Corresponds to candle_ros2__srv__SetModeMd80s_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetModeMd80s_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub drive_ids: rosidl_runtime_rs::Sequence<u16>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mode: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,

}



impl Default for SetModeMd80s_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !candle_ros2__srv__SetModeMd80s_Request__init(&mut msg as *mut _) {
        panic!("Call to candle_ros2__srv__SetModeMd80s_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetModeMd80s_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { candle_ros2__srv__SetModeMd80s_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { candle_ros2__srv__SetModeMd80s_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { candle_ros2__srv__SetModeMd80s_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetModeMd80s_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetModeMd80s_Request where Self: Sized {
  const TYPE_NAME: &'static str = "candle_ros2/srv/SetModeMd80s_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__candle_ros2__srv__SetModeMd80s_Request() }
  }
}


#[link(name = "candle_ros2__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__candle_ros2__srv__SetModeMd80s_Response() -> *const std::ffi::c_void;
}

#[link(name = "candle_ros2__rosidl_generator_c")]
extern "C" {
    fn candle_ros2__srv__SetModeMd80s_Response__init(msg: *mut SetModeMd80s_Response) -> bool;
    fn candle_ros2__srv__SetModeMd80s_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetModeMd80s_Response>, size: usize) -> bool;
    fn candle_ros2__srv__SetModeMd80s_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetModeMd80s_Response>);
    fn candle_ros2__srv__SetModeMd80s_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetModeMd80s_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetModeMd80s_Response>) -> bool;
}

// Corresponds to candle_ros2__srv__SetModeMd80s_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetModeMd80s_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub drives_success: rosidl_runtime_rs::Sequence<bool>,

}



impl Default for SetModeMd80s_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !candle_ros2__srv__SetModeMd80s_Response__init(&mut msg as *mut _) {
        panic!("Call to candle_ros2__srv__SetModeMd80s_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetModeMd80s_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { candle_ros2__srv__SetModeMd80s_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { candle_ros2__srv__SetModeMd80s_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { candle_ros2__srv__SetModeMd80s_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetModeMd80s_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetModeMd80s_Response where Self: Sized {
  const TYPE_NAME: &'static str = "candle_ros2/srv/SetModeMd80s_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__candle_ros2__srv__SetModeMd80s_Response() }
  }
}


#[link(name = "candle_ros2__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__candle_ros2__srv__SetLimitsMd80_Request() -> *const std::ffi::c_void;
}

#[link(name = "candle_ros2__rosidl_generator_c")]
extern "C" {
    fn candle_ros2__srv__SetLimitsMd80_Request__init(msg: *mut SetLimitsMd80_Request) -> bool;
    fn candle_ros2__srv__SetLimitsMd80_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetLimitsMd80_Request>, size: usize) -> bool;
    fn candle_ros2__srv__SetLimitsMd80_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetLimitsMd80_Request>);
    fn candle_ros2__srv__SetLimitsMd80_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetLimitsMd80_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetLimitsMd80_Request>) -> bool;
}

// Corresponds to candle_ros2__srv__SetLimitsMd80_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetLimitsMd80_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub drive_ids: rosidl_runtime_rs::Sequence<u16>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub velocity_limit: rosidl_runtime_rs::Sequence<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub torque_limit: rosidl_runtime_rs::Sequence<f32>,

}



impl Default for SetLimitsMd80_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !candle_ros2__srv__SetLimitsMd80_Request__init(&mut msg as *mut _) {
        panic!("Call to candle_ros2__srv__SetLimitsMd80_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetLimitsMd80_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { candle_ros2__srv__SetLimitsMd80_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { candle_ros2__srv__SetLimitsMd80_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { candle_ros2__srv__SetLimitsMd80_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetLimitsMd80_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetLimitsMd80_Request where Self: Sized {
  const TYPE_NAME: &'static str = "candle_ros2/srv/SetLimitsMd80_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__candle_ros2__srv__SetLimitsMd80_Request() }
  }
}


#[link(name = "candle_ros2__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__candle_ros2__srv__SetLimitsMd80_Response() -> *const std::ffi::c_void;
}

#[link(name = "candle_ros2__rosidl_generator_c")]
extern "C" {
    fn candle_ros2__srv__SetLimitsMd80_Response__init(msg: *mut SetLimitsMd80_Response) -> bool;
    fn candle_ros2__srv__SetLimitsMd80_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetLimitsMd80_Response>, size: usize) -> bool;
    fn candle_ros2__srv__SetLimitsMd80_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetLimitsMd80_Response>);
    fn candle_ros2__srv__SetLimitsMd80_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetLimitsMd80_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetLimitsMd80_Response>) -> bool;
}

// Corresponds to candle_ros2__srv__SetLimitsMd80_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetLimitsMd80_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub drives_success: rosidl_runtime_rs::Sequence<bool>,

}



impl Default for SetLimitsMd80_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !candle_ros2__srv__SetLimitsMd80_Response__init(&mut msg as *mut _) {
        panic!("Call to candle_ros2__srv__SetLimitsMd80_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetLimitsMd80_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { candle_ros2__srv__SetLimitsMd80_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { candle_ros2__srv__SetLimitsMd80_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { candle_ros2__srv__SetLimitsMd80_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetLimitsMd80_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetLimitsMd80_Response where Self: Sized {
  const TYPE_NAME: &'static str = "candle_ros2/srv/SetLimitsMd80_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__candle_ros2__srv__SetLimitsMd80_Response() }
  }
}






#[link(name = "candle_ros2__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__candle_ros2__srv__AddMd80s() -> *const std::ffi::c_void;
}

// Corresponds to candle_ros2__srv__AddMd80s
#[allow(missing_docs, non_camel_case_types)]
pub struct AddMd80s;

impl rosidl_runtime_rs::Service for AddMd80s {
    type Request = AddMd80s_Request;
    type Response = AddMd80s_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__candle_ros2__srv__AddMd80s() }
    }
}




#[link(name = "candle_ros2__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__candle_ros2__srv__GenericMd80Msg() -> *const std::ffi::c_void;
}

// Corresponds to candle_ros2__srv__GenericMd80Msg
#[allow(missing_docs, non_camel_case_types)]
pub struct GenericMd80Msg;

impl rosidl_runtime_rs::Service for GenericMd80Msg {
    type Request = GenericMd80Msg_Request;
    type Response = GenericMd80Msg_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__candle_ros2__srv__GenericMd80Msg() }
    }
}




#[link(name = "candle_ros2__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__candle_ros2__srv__SetModeMd80s() -> *const std::ffi::c_void;
}

// Corresponds to candle_ros2__srv__SetModeMd80s
#[allow(missing_docs, non_camel_case_types)]
pub struct SetModeMd80s;

impl rosidl_runtime_rs::Service for SetModeMd80s {
    type Request = SetModeMd80s_Request;
    type Response = SetModeMd80s_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__candle_ros2__srv__SetModeMd80s() }
    }
}




#[link(name = "candle_ros2__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__candle_ros2__srv__SetLimitsMd80() -> *const std::ffi::c_void;
}

// Corresponds to candle_ros2__srv__SetLimitsMd80
#[allow(missing_docs, non_camel_case_types)]
pub struct SetLimitsMd80;

impl rosidl_runtime_rs::Service for SetLimitsMd80 {
    type Request = SetLimitsMd80_Request;
    type Response = SetLimitsMd80_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__candle_ros2__srv__SetLimitsMd80() }
    }
}


