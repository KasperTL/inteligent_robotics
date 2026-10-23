#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "intelligent_robotics_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__intelligent_robotics_msgs__msg__VacuumCleanerStatus() -> *const std::ffi::c_void;
}

#[link(name = "intelligent_robotics_msgs__rosidl_generator_c")]
extern "C" {
    fn intelligent_robotics_msgs__msg__VacuumCleanerStatus__init(msg: *mut VacuumCleanerStatus) -> bool;
    fn intelligent_robotics_msgs__msg__VacuumCleanerStatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<VacuumCleanerStatus>, size: usize) -> bool;
    fn intelligent_robotics_msgs__msg__VacuumCleanerStatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<VacuumCleanerStatus>);
    fn intelligent_robotics_msgs__msg__VacuumCleanerStatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<VacuumCleanerStatus>, out_seq: *mut rosidl_runtime_rs::Sequence<VacuumCleanerStatus>) -> bool;
}

// Corresponds to intelligent_robotics_msgs__msg__VacuumCleanerStatus
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VacuumCleanerStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub room_id: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub room_name: rosidl_runtime_rs::String,

    /// 0-100
    pub battery_percent: f32,

}



impl Default for VacuumCleanerStatus {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !intelligent_robotics_msgs__msg__VacuumCleanerStatus__init(&mut msg as *mut _) {
        panic!("Call to intelligent_robotics_msgs__msg__VacuumCleanerStatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for VacuumCleanerStatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { intelligent_robotics_msgs__msg__VacuumCleanerStatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { intelligent_robotics_msgs__msg__VacuumCleanerStatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { intelligent_robotics_msgs__msg__VacuumCleanerStatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for VacuumCleanerStatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for VacuumCleanerStatus where Self: Sized {
  const TYPE_NAME: &'static str = "intelligent_robotics_msgs/msg/VacuumCleanerStatus";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__intelligent_robotics_msgs__msg__VacuumCleanerStatus() }
  }
}


