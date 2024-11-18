// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from action_interfaces:action/Mission.idl
// generated code does not contain a copyright notice

#ifndef ACTION_INTERFACES__ACTION__DETAIL__MISSION__BUILDER_HPP_
#define ACTION_INTERFACES__ACTION__DETAIL__MISSION__BUILDER_HPP_

#include "action_interfaces/action/detail/mission__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace action_interfaces
{

namespace action
{

namespace builder
{

class Init_Mission_Goal_order
{
public:
  explicit Init_Mission_Goal_order(::action_interfaces::action::Mission_Goal & msg)
  : msg_(msg)
  {}
  ::action_interfaces::action::Mission_Goal order(::action_interfaces::action::Mission_Goal::_order_type arg)
  {
    msg_.order = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_interfaces::action::Mission_Goal msg_;
};

class Init_Mission_Goal_action
{
public:
  explicit Init_Mission_Goal_action(::action_interfaces::action::Mission_Goal & msg)
  : msg_(msg)
  {}
  Init_Mission_Goal_order action(::action_interfaces::action::Mission_Goal::_action_type arg)
  {
    msg_.action = std::move(arg);
    return Init_Mission_Goal_order(msg_);
  }

private:
  ::action_interfaces::action::Mission_Goal msg_;
};

class Init_Mission_Goal_id
{
public:
  Init_Mission_Goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Mission_Goal_action id(::action_interfaces::action::Mission_Goal::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_Mission_Goal_action(msg_);
  }

private:
  ::action_interfaces::action::Mission_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_interfaces::action::Mission_Goal>()
{
  return action_interfaces::action::builder::Init_Mission_Goal_id();
}

}  // namespace action_interfaces


namespace action_interfaces
{

namespace action
{

namespace builder
{

class Init_Mission_Result_sequence
{
public:
  explicit Init_Mission_Result_sequence(::action_interfaces::action::Mission_Result & msg)
  : msg_(msg)
  {}
  ::action_interfaces::action::Mission_Result sequence(::action_interfaces::action::Mission_Result::_sequence_type arg)
  {
    msg_.sequence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_interfaces::action::Mission_Result msg_;
};

class Init_Mission_Result_message
{
public:
  explicit Init_Mission_Result_message(::action_interfaces::action::Mission_Result & msg)
  : msg_(msg)
  {}
  Init_Mission_Result_sequence message(::action_interfaces::action::Mission_Result::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_Mission_Result_sequence(msg_);
  }

private:
  ::action_interfaces::action::Mission_Result msg_;
};

class Init_Mission_Result_success
{
public:
  Init_Mission_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Mission_Result_message success(::action_interfaces::action::Mission_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_Mission_Result_message(msg_);
  }

private:
  ::action_interfaces::action::Mission_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_interfaces::action::Mission_Result>()
{
  return action_interfaces::action::builder::Init_Mission_Result_success();
}

}  // namespace action_interfaces


namespace action_interfaces
{

namespace action
{

namespace builder
{

class Init_Mission_Feedback_sequence
{
public:
  explicit Init_Mission_Feedback_sequence(::action_interfaces::action::Mission_Feedback & msg)
  : msg_(msg)
  {}
  ::action_interfaces::action::Mission_Feedback sequence(::action_interfaces::action::Mission_Feedback::_sequence_type arg)
  {
    msg_.sequence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_interfaces::action::Mission_Feedback msg_;
};

class Init_Mission_Feedback_feedback_message
{
public:
  Init_Mission_Feedback_feedback_message()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Mission_Feedback_sequence feedback_message(::action_interfaces::action::Mission_Feedback::_feedback_message_type arg)
  {
    msg_.feedback_message = std::move(arg);
    return Init_Mission_Feedback_sequence(msg_);
  }

private:
  ::action_interfaces::action::Mission_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_interfaces::action::Mission_Feedback>()
{
  return action_interfaces::action::builder::Init_Mission_Feedback_feedback_message();
}

}  // namespace action_interfaces


namespace action_interfaces
{

namespace action
{

namespace builder
{

class Init_Mission_SendGoal_Request_goal
{
public:
  explicit Init_Mission_SendGoal_Request_goal(::action_interfaces::action::Mission_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::action_interfaces::action::Mission_SendGoal_Request goal(::action_interfaces::action::Mission_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_interfaces::action::Mission_SendGoal_Request msg_;
};

class Init_Mission_SendGoal_Request_goal_id
{
public:
  Init_Mission_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Mission_SendGoal_Request_goal goal_id(::action_interfaces::action::Mission_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Mission_SendGoal_Request_goal(msg_);
  }

private:
  ::action_interfaces::action::Mission_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_interfaces::action::Mission_SendGoal_Request>()
{
  return action_interfaces::action::builder::Init_Mission_SendGoal_Request_goal_id();
}

}  // namespace action_interfaces


namespace action_interfaces
{

namespace action
{

namespace builder
{

class Init_Mission_SendGoal_Response_stamp
{
public:
  explicit Init_Mission_SendGoal_Response_stamp(::action_interfaces::action::Mission_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::action_interfaces::action::Mission_SendGoal_Response stamp(::action_interfaces::action::Mission_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_interfaces::action::Mission_SendGoal_Response msg_;
};

class Init_Mission_SendGoal_Response_accepted
{
public:
  Init_Mission_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Mission_SendGoal_Response_stamp accepted(::action_interfaces::action::Mission_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Mission_SendGoal_Response_stamp(msg_);
  }

private:
  ::action_interfaces::action::Mission_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_interfaces::action::Mission_SendGoal_Response>()
{
  return action_interfaces::action::builder::Init_Mission_SendGoal_Response_accepted();
}

}  // namespace action_interfaces


namespace action_interfaces
{

namespace action
{

namespace builder
{

class Init_Mission_GetResult_Request_goal_id
{
public:
  Init_Mission_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::action_interfaces::action::Mission_GetResult_Request goal_id(::action_interfaces::action::Mission_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_interfaces::action::Mission_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_interfaces::action::Mission_GetResult_Request>()
{
  return action_interfaces::action::builder::Init_Mission_GetResult_Request_goal_id();
}

}  // namespace action_interfaces


namespace action_interfaces
{

namespace action
{

namespace builder
{

class Init_Mission_GetResult_Response_result
{
public:
  explicit Init_Mission_GetResult_Response_result(::action_interfaces::action::Mission_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::action_interfaces::action::Mission_GetResult_Response result(::action_interfaces::action::Mission_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_interfaces::action::Mission_GetResult_Response msg_;
};

class Init_Mission_GetResult_Response_status
{
public:
  Init_Mission_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Mission_GetResult_Response_result status(::action_interfaces::action::Mission_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Mission_GetResult_Response_result(msg_);
  }

private:
  ::action_interfaces::action::Mission_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_interfaces::action::Mission_GetResult_Response>()
{
  return action_interfaces::action::builder::Init_Mission_GetResult_Response_status();
}

}  // namespace action_interfaces


namespace action_interfaces
{

namespace action
{

namespace builder
{

class Init_Mission_FeedbackMessage_feedback
{
public:
  explicit Init_Mission_FeedbackMessage_feedback(::action_interfaces::action::Mission_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::action_interfaces::action::Mission_FeedbackMessage feedback(::action_interfaces::action::Mission_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_interfaces::action::Mission_FeedbackMessage msg_;
};

class Init_Mission_FeedbackMessage_goal_id
{
public:
  Init_Mission_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Mission_FeedbackMessage_feedback goal_id(::action_interfaces::action::Mission_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Mission_FeedbackMessage_feedback(msg_);
  }

private:
  ::action_interfaces::action::Mission_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_interfaces::action::Mission_FeedbackMessage>()
{
  return action_interfaces::action::builder::Init_Mission_FeedbackMessage_goal_id();
}

}  // namespace action_interfaces

#endif  // ACTION_INTERFACES__ACTION__DETAIL__MISSION__BUILDER_HPP_