#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to candle_ros2__srv__AddMd80s_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AddMd80s_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub drive_ids: Vec<u16>,

}



impl Default for AddMd80s_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::AddMd80s_Request::default())
  }
}

impl rosidl_runtime_rs::Message for AddMd80s_Request {
  type RmwMsg = super::srv::rmw::AddMd80s_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        drive_ids: msg.drive_ids.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        drive_ids: msg.drive_ids.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      drive_ids: msg.drive_ids
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to candle_ros2__srv__AddMd80s_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AddMd80s_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub drives_success: Vec<bool>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub total_number_of_drives: u16,

}



impl Default for AddMd80s_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::AddMd80s_Response::default())
  }
}

impl rosidl_runtime_rs::Message for AddMd80s_Response {
  type RmwMsg = super::srv::rmw::AddMd80s_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        drives_success: msg.drives_success.into(),
        total_number_of_drives: msg.total_number_of_drives,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        drives_success: msg.drives_success.as_slice().into(),
      total_number_of_drives: msg.total_number_of_drives,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      drives_success: msg.drives_success
          .into_iter()
          .collect(),
      total_number_of_drives: msg.total_number_of_drives,
    }
  }
}


// Corresponds to candle_ros2__srv__GenericMd80Msg_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GenericMd80Msg_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub drive_ids: Vec<u16>,

}



impl Default for GenericMd80Msg_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GenericMd80Msg_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GenericMd80Msg_Request {
  type RmwMsg = super::srv::rmw::GenericMd80Msg_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        drive_ids: msg.drive_ids.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        drive_ids: msg.drive_ids.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      drive_ids: msg.drive_ids
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to candle_ros2__srv__GenericMd80Msg_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GenericMd80Msg_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub drives_success: Vec<bool>,

}



impl Default for GenericMd80Msg_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GenericMd80Msg_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GenericMd80Msg_Response {
  type RmwMsg = super::srv::rmw::GenericMd80Msg_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        drives_success: msg.drives_success.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        drives_success: msg.drives_success.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      drives_success: msg.drives_success
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to candle_ros2__srv__SetModeMd80s_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetModeMd80s_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub drive_ids: Vec<u16>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mode: Vec<std::string::String>,

}



impl Default for SetModeMd80s_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetModeMd80s_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetModeMd80s_Request {
  type RmwMsg = super::srv::rmw::SetModeMd80s_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        drive_ids: msg.drive_ids.into(),
        mode: msg.mode
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        drive_ids: msg.drive_ids.as_slice().into(),
        mode: msg.mode
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      drive_ids: msg.drive_ids
          .into_iter()
          .collect(),
      mode: msg.mode
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
    }
  }
}


// Corresponds to candle_ros2__srv__SetModeMd80s_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetModeMd80s_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub drives_success: Vec<bool>,

}



impl Default for SetModeMd80s_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetModeMd80s_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetModeMd80s_Response {
  type RmwMsg = super::srv::rmw::SetModeMd80s_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        drives_success: msg.drives_success.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        drives_success: msg.drives_success.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      drives_success: msg.drives_success
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to candle_ros2__srv__SetLimitsMd80_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetLimitsMd80_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub drive_ids: Vec<u16>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub velocity_limit: Vec<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub torque_limit: Vec<f32>,

}



impl Default for SetLimitsMd80_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetLimitsMd80_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetLimitsMd80_Request {
  type RmwMsg = super::srv::rmw::SetLimitsMd80_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        drive_ids: msg.drive_ids.into(),
        velocity_limit: msg.velocity_limit.into(),
        torque_limit: msg.torque_limit.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        drive_ids: msg.drive_ids.as_slice().into(),
        velocity_limit: msg.velocity_limit.as_slice().into(),
        torque_limit: msg.torque_limit.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      drive_ids: msg.drive_ids
          .into_iter()
          .collect(),
      velocity_limit: msg.velocity_limit
          .into_iter()
          .collect(),
      torque_limit: msg.torque_limit
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to candle_ros2__srv__SetLimitsMd80_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetLimitsMd80_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub drives_success: Vec<bool>,

}



impl Default for SetLimitsMd80_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetLimitsMd80_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetLimitsMd80_Response {
  type RmwMsg = super::srv::rmw::SetLimitsMd80_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        drives_success: msg.drives_success.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        drives_success: msg.drives_success.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      drives_success: msg.drives_success
          .into_iter()
          .collect(),
    }
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


