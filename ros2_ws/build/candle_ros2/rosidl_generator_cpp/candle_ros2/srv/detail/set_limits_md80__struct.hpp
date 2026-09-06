// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from candle_ros2:srv/SetLimitsMd80.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "candle_ros2/srv/set_limits_md80.hpp"


#ifndef CANDLE_ROS2__SRV__DETAIL__SET_LIMITS_MD80__STRUCT_HPP_
#define CANDLE_ROS2__SRV__DETAIL__SET_LIMITS_MD80__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__candle_ros2__srv__SetLimitsMd80_Request __attribute__((deprecated))
#else
# define DEPRECATED__candle_ros2__srv__SetLimitsMd80_Request __declspec(deprecated)
#endif

namespace candle_ros2
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetLimitsMd80_Request_
{
  using Type = SetLimitsMd80_Request_<ContainerAllocator>;

  explicit SetLimitsMd80_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit SetLimitsMd80_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _drive_ids_type =
    std::vector<uint16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint16_t>>;
  _drive_ids_type drive_ids;
  using _velocity_limit_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _velocity_limit_type velocity_limit;
  using _torque_limit_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _torque_limit_type torque_limit;

  // setters for named parameter idiom
  Type & set__drive_ids(
    const std::vector<uint16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint16_t>> & _arg)
  {
    this->drive_ids = _arg;
    return *this;
  }
  Type & set__velocity_limit(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->velocity_limit = _arg;
    return *this;
  }
  Type & set__torque_limit(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->torque_limit = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    candle_ros2::srv::SetLimitsMd80_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const candle_ros2::srv::SetLimitsMd80_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<candle_ros2::srv::SetLimitsMd80_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<candle_ros2::srv::SetLimitsMd80_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      candle_ros2::srv::SetLimitsMd80_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<candle_ros2::srv::SetLimitsMd80_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      candle_ros2::srv::SetLimitsMd80_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<candle_ros2::srv::SetLimitsMd80_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<candle_ros2::srv::SetLimitsMd80_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<candle_ros2::srv::SetLimitsMd80_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__candle_ros2__srv__SetLimitsMd80_Request
    std::shared_ptr<candle_ros2::srv::SetLimitsMd80_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__candle_ros2__srv__SetLimitsMd80_Request
    std::shared_ptr<candle_ros2::srv::SetLimitsMd80_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetLimitsMd80_Request_ & other) const
  {
    if (this->drive_ids != other.drive_ids) {
      return false;
    }
    if (this->velocity_limit != other.velocity_limit) {
      return false;
    }
    if (this->torque_limit != other.torque_limit) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetLimitsMd80_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetLimitsMd80_Request_

// alias to use template instance with default allocator
using SetLimitsMd80_Request =
  candle_ros2::srv::SetLimitsMd80_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace candle_ros2


#ifndef _WIN32
# define DEPRECATED__candle_ros2__srv__SetLimitsMd80_Response __attribute__((deprecated))
#else
# define DEPRECATED__candle_ros2__srv__SetLimitsMd80_Response __declspec(deprecated)
#endif

namespace candle_ros2
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetLimitsMd80_Response_
{
  using Type = SetLimitsMd80_Response_<ContainerAllocator>;

  explicit SetLimitsMd80_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit SetLimitsMd80_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _drives_success_type =
    std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>>;
  _drives_success_type drives_success;

  // setters for named parameter idiom
  Type & set__drives_success(
    const std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>> & _arg)
  {
    this->drives_success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    candle_ros2::srv::SetLimitsMd80_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const candle_ros2::srv::SetLimitsMd80_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<candle_ros2::srv::SetLimitsMd80_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<candle_ros2::srv::SetLimitsMd80_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      candle_ros2::srv::SetLimitsMd80_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<candle_ros2::srv::SetLimitsMd80_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      candle_ros2::srv::SetLimitsMd80_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<candle_ros2::srv::SetLimitsMd80_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<candle_ros2::srv::SetLimitsMd80_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<candle_ros2::srv::SetLimitsMd80_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__candle_ros2__srv__SetLimitsMd80_Response
    std::shared_ptr<candle_ros2::srv::SetLimitsMd80_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__candle_ros2__srv__SetLimitsMd80_Response
    std::shared_ptr<candle_ros2::srv::SetLimitsMd80_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetLimitsMd80_Response_ & other) const
  {
    if (this->drives_success != other.drives_success) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetLimitsMd80_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetLimitsMd80_Response_

// alias to use template instance with default allocator
using SetLimitsMd80_Response =
  candle_ros2::srv::SetLimitsMd80_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace candle_ros2


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__candle_ros2__srv__SetLimitsMd80_Event __attribute__((deprecated))
#else
# define DEPRECATED__candle_ros2__srv__SetLimitsMd80_Event __declspec(deprecated)
#endif

namespace candle_ros2
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetLimitsMd80_Event_
{
  using Type = SetLimitsMd80_Event_<ContainerAllocator>;

  explicit SetLimitsMd80_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit SetLimitsMd80_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<candle_ros2::srv::SetLimitsMd80_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<candle_ros2::srv::SetLimitsMd80_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<candle_ros2::srv::SetLimitsMd80_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<candle_ros2::srv::SetLimitsMd80_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<candle_ros2::srv::SetLimitsMd80_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<candle_ros2::srv::SetLimitsMd80_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<candle_ros2::srv::SetLimitsMd80_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<candle_ros2::srv::SetLimitsMd80_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    candle_ros2::srv::SetLimitsMd80_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const candle_ros2::srv::SetLimitsMd80_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<candle_ros2::srv::SetLimitsMd80_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<candle_ros2::srv::SetLimitsMd80_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      candle_ros2::srv::SetLimitsMd80_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<candle_ros2::srv::SetLimitsMd80_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      candle_ros2::srv::SetLimitsMd80_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<candle_ros2::srv::SetLimitsMd80_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<candle_ros2::srv::SetLimitsMd80_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<candle_ros2::srv::SetLimitsMd80_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__candle_ros2__srv__SetLimitsMd80_Event
    std::shared_ptr<candle_ros2::srv::SetLimitsMd80_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__candle_ros2__srv__SetLimitsMd80_Event
    std::shared_ptr<candle_ros2::srv::SetLimitsMd80_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetLimitsMd80_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetLimitsMd80_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetLimitsMd80_Event_

// alias to use template instance with default allocator
using SetLimitsMd80_Event =
  candle_ros2::srv::SetLimitsMd80_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace candle_ros2

namespace candle_ros2
{

namespace srv
{

struct SetLimitsMd80
{
  using Request = candle_ros2::srv::SetLimitsMd80_Request;
  using Response = candle_ros2::srv::SetLimitsMd80_Response;
  using Event = candle_ros2::srv::SetLimitsMd80_Event;
};

}  // namespace srv

}  // namespace candle_ros2

#endif  // CANDLE_ROS2__SRV__DETAIL__SET_LIMITS_MD80__STRUCT_HPP_
