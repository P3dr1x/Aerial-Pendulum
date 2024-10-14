// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aerobalance_interfaces:action/TrajectoryFilePosition.idl
// generated code does not contain a copyright notice

#ifndef AEROBALANCE_INTERFACES__ACTION__DETAIL__TRAJECTORY_FILE_POSITION__BUILDER_HPP_
#define AEROBALANCE_INTERFACES__ACTION__DETAIL__TRAJECTORY_FILE_POSITION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aerobalance_interfaces/action/detail/trajectory_file_position__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aerobalance_interfaces
{

namespace action
{

namespace builder
{

class Init_TrajectoryFilePosition_Goal_joint
{
public:
  explicit Init_TrajectoryFilePosition_Goal_joint(::aerobalance_interfaces::action::TrajectoryFilePosition_Goal & msg)
  : msg_(msg)
  {}
  ::aerobalance_interfaces::action::TrajectoryFilePosition_Goal joint(::aerobalance_interfaces::action::TrajectoryFilePosition_Goal::_joint_type arg)
  {
    msg_.joint = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aerobalance_interfaces::action::TrajectoryFilePosition_Goal msg_;
};

class Init_TrajectoryFilePosition_Goal_timestep
{
public:
  explicit Init_TrajectoryFilePosition_Goal_timestep(::aerobalance_interfaces::action::TrajectoryFilePosition_Goal & msg)
  : msg_(msg)
  {}
  Init_TrajectoryFilePosition_Goal_joint timestep(::aerobalance_interfaces::action::TrajectoryFilePosition_Goal::_timestep_type arg)
  {
    msg_.timestep = std::move(arg);
    return Init_TrajectoryFilePosition_Goal_joint(msg_);
  }

private:
  ::aerobalance_interfaces::action::TrajectoryFilePosition_Goal msg_;
};

class Init_TrajectoryFilePosition_Goal_filepath
{
public:
  Init_TrajectoryFilePosition_Goal_filepath()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrajectoryFilePosition_Goal_timestep filepath(::aerobalance_interfaces::action::TrajectoryFilePosition_Goal::_filepath_type arg)
  {
    msg_.filepath = std::move(arg);
    return Init_TrajectoryFilePosition_Goal_timestep(msg_);
  }

private:
  ::aerobalance_interfaces::action::TrajectoryFilePosition_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::aerobalance_interfaces::action::TrajectoryFilePosition_Goal>()
{
  return aerobalance_interfaces::action::builder::Init_TrajectoryFilePosition_Goal_filepath();
}

}  // namespace aerobalance_interfaces


namespace aerobalance_interfaces
{

namespace action
{

namespace builder
{

class Init_TrajectoryFilePosition_Result_error_code
{
public:
  Init_TrajectoryFilePosition_Result_error_code()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::aerobalance_interfaces::action::TrajectoryFilePosition_Result error_code(::aerobalance_interfaces::action::TrajectoryFilePosition_Result::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aerobalance_interfaces::action::TrajectoryFilePosition_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::aerobalance_interfaces::action::TrajectoryFilePosition_Result>()
{
  return aerobalance_interfaces::action::builder::Init_TrajectoryFilePosition_Result_error_code();
}

}  // namespace aerobalance_interfaces


namespace aerobalance_interfaces
{

namespace action
{

namespace builder
{

class Init_TrajectoryFilePosition_Feedback_desired
{
public:
  explicit Init_TrajectoryFilePosition_Feedback_desired(::aerobalance_interfaces::action::TrajectoryFilePosition_Feedback & msg)
  : msg_(msg)
  {}
  ::aerobalance_interfaces::action::TrajectoryFilePosition_Feedback desired(::aerobalance_interfaces::action::TrajectoryFilePosition_Feedback::_desired_type arg)
  {
    msg_.desired = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aerobalance_interfaces::action::TrajectoryFilePosition_Feedback msg_;
};

class Init_TrajectoryFilePosition_Feedback_actual
{
public:
  Init_TrajectoryFilePosition_Feedback_actual()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrajectoryFilePosition_Feedback_desired actual(::aerobalance_interfaces::action::TrajectoryFilePosition_Feedback::_actual_type arg)
  {
    msg_.actual = std::move(arg);
    return Init_TrajectoryFilePosition_Feedback_desired(msg_);
  }

private:
  ::aerobalance_interfaces::action::TrajectoryFilePosition_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::aerobalance_interfaces::action::TrajectoryFilePosition_Feedback>()
{
  return aerobalance_interfaces::action::builder::Init_TrajectoryFilePosition_Feedback_actual();
}

}  // namespace aerobalance_interfaces


namespace aerobalance_interfaces
{

namespace action
{

namespace builder
{

class Init_TrajectoryFilePosition_SendGoal_Request_goal
{
public:
  explicit Init_TrajectoryFilePosition_SendGoal_Request_goal(::aerobalance_interfaces::action::TrajectoryFilePosition_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::aerobalance_interfaces::action::TrajectoryFilePosition_SendGoal_Request goal(::aerobalance_interfaces::action::TrajectoryFilePosition_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aerobalance_interfaces::action::TrajectoryFilePosition_SendGoal_Request msg_;
};

class Init_TrajectoryFilePosition_SendGoal_Request_goal_id
{
public:
  Init_TrajectoryFilePosition_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrajectoryFilePosition_SendGoal_Request_goal goal_id(::aerobalance_interfaces::action::TrajectoryFilePosition_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_TrajectoryFilePosition_SendGoal_Request_goal(msg_);
  }

private:
  ::aerobalance_interfaces::action::TrajectoryFilePosition_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::aerobalance_interfaces::action::TrajectoryFilePosition_SendGoal_Request>()
{
  return aerobalance_interfaces::action::builder::Init_TrajectoryFilePosition_SendGoal_Request_goal_id();
}

}  // namespace aerobalance_interfaces


namespace aerobalance_interfaces
{

namespace action
{

namespace builder
{

class Init_TrajectoryFilePosition_SendGoal_Response_stamp
{
public:
  explicit Init_TrajectoryFilePosition_SendGoal_Response_stamp(::aerobalance_interfaces::action::TrajectoryFilePosition_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::aerobalance_interfaces::action::TrajectoryFilePosition_SendGoal_Response stamp(::aerobalance_interfaces::action::TrajectoryFilePosition_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aerobalance_interfaces::action::TrajectoryFilePosition_SendGoal_Response msg_;
};

class Init_TrajectoryFilePosition_SendGoal_Response_accepted
{
public:
  Init_TrajectoryFilePosition_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrajectoryFilePosition_SendGoal_Response_stamp accepted(::aerobalance_interfaces::action::TrajectoryFilePosition_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_TrajectoryFilePosition_SendGoal_Response_stamp(msg_);
  }

private:
  ::aerobalance_interfaces::action::TrajectoryFilePosition_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::aerobalance_interfaces::action::TrajectoryFilePosition_SendGoal_Response>()
{
  return aerobalance_interfaces::action::builder::Init_TrajectoryFilePosition_SendGoal_Response_accepted();
}

}  // namespace aerobalance_interfaces


namespace aerobalance_interfaces
{

namespace action
{

namespace builder
{

class Init_TrajectoryFilePosition_GetResult_Request_goal_id
{
public:
  Init_TrajectoryFilePosition_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::aerobalance_interfaces::action::TrajectoryFilePosition_GetResult_Request goal_id(::aerobalance_interfaces::action::TrajectoryFilePosition_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aerobalance_interfaces::action::TrajectoryFilePosition_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::aerobalance_interfaces::action::TrajectoryFilePosition_GetResult_Request>()
{
  return aerobalance_interfaces::action::builder::Init_TrajectoryFilePosition_GetResult_Request_goal_id();
}

}  // namespace aerobalance_interfaces


namespace aerobalance_interfaces
{

namespace action
{

namespace builder
{

class Init_TrajectoryFilePosition_GetResult_Response_result
{
public:
  explicit Init_TrajectoryFilePosition_GetResult_Response_result(::aerobalance_interfaces::action::TrajectoryFilePosition_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::aerobalance_interfaces::action::TrajectoryFilePosition_GetResult_Response result(::aerobalance_interfaces::action::TrajectoryFilePosition_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aerobalance_interfaces::action::TrajectoryFilePosition_GetResult_Response msg_;
};

class Init_TrajectoryFilePosition_GetResult_Response_status
{
public:
  Init_TrajectoryFilePosition_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrajectoryFilePosition_GetResult_Response_result status(::aerobalance_interfaces::action::TrajectoryFilePosition_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_TrajectoryFilePosition_GetResult_Response_result(msg_);
  }

private:
  ::aerobalance_interfaces::action::TrajectoryFilePosition_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::aerobalance_interfaces::action::TrajectoryFilePosition_GetResult_Response>()
{
  return aerobalance_interfaces::action::builder::Init_TrajectoryFilePosition_GetResult_Response_status();
}

}  // namespace aerobalance_interfaces


namespace aerobalance_interfaces
{

namespace action
{

namespace builder
{

class Init_TrajectoryFilePosition_FeedbackMessage_feedback
{
public:
  explicit Init_TrajectoryFilePosition_FeedbackMessage_feedback(::aerobalance_interfaces::action::TrajectoryFilePosition_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::aerobalance_interfaces::action::TrajectoryFilePosition_FeedbackMessage feedback(::aerobalance_interfaces::action::TrajectoryFilePosition_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aerobalance_interfaces::action::TrajectoryFilePosition_FeedbackMessage msg_;
};

class Init_TrajectoryFilePosition_FeedbackMessage_goal_id
{
public:
  Init_TrajectoryFilePosition_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrajectoryFilePosition_FeedbackMessage_feedback goal_id(::aerobalance_interfaces::action::TrajectoryFilePosition_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_TrajectoryFilePosition_FeedbackMessage_feedback(msg_);
  }

private:
  ::aerobalance_interfaces::action::TrajectoryFilePosition_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::aerobalance_interfaces::action::TrajectoryFilePosition_FeedbackMessage>()
{
  return aerobalance_interfaces::action::builder::Init_TrajectoryFilePosition_FeedbackMessage_goal_id();
}

}  // namespace aerobalance_interfaces

#endif  // AEROBALANCE_INTERFACES__ACTION__DETAIL__TRAJECTORY_FILE_POSITION__BUILDER_HPP_
