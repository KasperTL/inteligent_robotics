#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to intelligent_robotics_msgs__msg__VacuumCleanerStatus

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VacuumCleanerStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub room_id: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub room_name: std::string::String,

    /// 0-100
    pub battery_percent: f32,

}



impl Default for VacuumCleanerStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::VacuumCleanerStatus::default())
  }
}

impl rosidl_runtime_rs::Message for VacuumCleanerStatus {
  type RmwMsg = super::msg::rmw::VacuumCleanerStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        room_id: msg.room_id,
        room_name: msg.room_name.as_str().into(),
        battery_percent: msg.battery_percent,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      room_id: msg.room_id,
        room_name: msg.room_name.as_str().into(),
      battery_percent: msg.battery_percent,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      room_id: msg.room_id,
      room_name: msg.room_name.to_string(),
      battery_percent: msg.battery_percent,
    }
  }
}


