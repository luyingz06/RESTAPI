// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from action_interfaces:action/Mission.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "action_interfaces/action/detail/mission__rosidl_typesupport_introspection_c.h"
#include "action_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "action_interfaces/action/detail/mission__functions.h"
#include "action_interfaces/action/detail/mission__struct.h"


// Include directives for member types
// Member `ids`
// Member `orders`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `actions`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Mission_Goal__rosidl_typesupport_introspection_c__Mission_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  action_interfaces__action__Mission_Goal__init(message_memory);
}

void Mission_Goal__rosidl_typesupport_introspection_c__Mission_Goal_fini_function(void * message_memory)
{
  action_interfaces__action__Mission_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Mission_Goal__rosidl_typesupport_introspection_c__Mission_Goal_message_member_array[3] = {
  {
    "ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_interfaces__action__Mission_Goal, ids),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "actions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_interfaces__action__Mission_Goal, actions),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "orders",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_interfaces__action__Mission_Goal, orders),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Mission_Goal__rosidl_typesupport_introspection_c__Mission_Goal_message_members = {
  "action_interfaces__action",  // message namespace
  "Mission_Goal",  // message name
  3,  // number of fields
  sizeof(action_interfaces__action__Mission_Goal),
  Mission_Goal__rosidl_typesupport_introspection_c__Mission_Goal_message_member_array,  // message members
  Mission_Goal__rosidl_typesupport_introspection_c__Mission_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  Mission_Goal__rosidl_typesupport_introspection_c__Mission_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Mission_Goal__rosidl_typesupport_introspection_c__Mission_Goal_message_type_support_handle = {
  0,
  &Mission_Goal__rosidl_typesupport_introspection_c__Mission_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_action_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_interfaces, action, Mission_Goal)() {
  if (!Mission_Goal__rosidl_typesupport_introspection_c__Mission_Goal_message_type_support_handle.typesupport_identifier) {
    Mission_Goal__rosidl_typesupport_introspection_c__Mission_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Mission_Goal__rosidl_typesupport_introspection_c__Mission_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "action_interfaces/action/detail/mission__rosidl_typesupport_introspection_c.h"
// already included above
// #include "action_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "action_interfaces/action/detail/mission__functions.h"
// already included above
// #include "action_interfaces/action/detail/mission__struct.h"


// Include directives for member types
// Member `message`
// Member `sequence`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Mission_Result__rosidl_typesupport_introspection_c__Mission_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  action_interfaces__action__Mission_Result__init(message_memory);
}

void Mission_Result__rosidl_typesupport_introspection_c__Mission_Result_fini_function(void * message_memory)
{
  action_interfaces__action__Mission_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Mission_Result__rosidl_typesupport_introspection_c__Mission_Result_message_member_array[3] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_interfaces__action__Mission_Result, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_interfaces__action__Mission_Result, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sequence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_interfaces__action__Mission_Result, sequence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Mission_Result__rosidl_typesupport_introspection_c__Mission_Result_message_members = {
  "action_interfaces__action",  // message namespace
  "Mission_Result",  // message name
  3,  // number of fields
  sizeof(action_interfaces__action__Mission_Result),
  Mission_Result__rosidl_typesupport_introspection_c__Mission_Result_message_member_array,  // message members
  Mission_Result__rosidl_typesupport_introspection_c__Mission_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  Mission_Result__rosidl_typesupport_introspection_c__Mission_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Mission_Result__rosidl_typesupport_introspection_c__Mission_Result_message_type_support_handle = {
  0,
  &Mission_Result__rosidl_typesupport_introspection_c__Mission_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_action_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_interfaces, action, Mission_Result)() {
  if (!Mission_Result__rosidl_typesupport_introspection_c__Mission_Result_message_type_support_handle.typesupport_identifier) {
    Mission_Result__rosidl_typesupport_introspection_c__Mission_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Mission_Result__rosidl_typesupport_introspection_c__Mission_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "action_interfaces/action/detail/mission__rosidl_typesupport_introspection_c.h"
// already included above
// #include "action_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "action_interfaces/action/detail/mission__functions.h"
// already included above
// #include "action_interfaces/action/detail/mission__struct.h"


// Include directives for member types
// Member `feedback_message`
// Member `sequence`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Mission_Feedback__rosidl_typesupport_introspection_c__Mission_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  action_interfaces__action__Mission_Feedback__init(message_memory);
}

void Mission_Feedback__rosidl_typesupport_introspection_c__Mission_Feedback_fini_function(void * message_memory)
{
  action_interfaces__action__Mission_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Mission_Feedback__rosidl_typesupport_introspection_c__Mission_Feedback_message_member_array[2] = {
  {
    "feedback_message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_interfaces__action__Mission_Feedback, feedback_message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sequence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_interfaces__action__Mission_Feedback, sequence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Mission_Feedback__rosidl_typesupport_introspection_c__Mission_Feedback_message_members = {
  "action_interfaces__action",  // message namespace
  "Mission_Feedback",  // message name
  2,  // number of fields
  sizeof(action_interfaces__action__Mission_Feedback),
  Mission_Feedback__rosidl_typesupport_introspection_c__Mission_Feedback_message_member_array,  // message members
  Mission_Feedback__rosidl_typesupport_introspection_c__Mission_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  Mission_Feedback__rosidl_typesupport_introspection_c__Mission_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Mission_Feedback__rosidl_typesupport_introspection_c__Mission_Feedback_message_type_support_handle = {
  0,
  &Mission_Feedback__rosidl_typesupport_introspection_c__Mission_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_action_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_interfaces, action, Mission_Feedback)() {
  if (!Mission_Feedback__rosidl_typesupport_introspection_c__Mission_Feedback_message_type_support_handle.typesupport_identifier) {
    Mission_Feedback__rosidl_typesupport_introspection_c__Mission_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Mission_Feedback__rosidl_typesupport_introspection_c__Mission_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "action_interfaces/action/detail/mission__rosidl_typesupport_introspection_c.h"
// already included above
// #include "action_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "action_interfaces/action/detail/mission__functions.h"
// already included above
// #include "action_interfaces/action/detail/mission__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "action_interfaces/action/mission.h"
// Member `goal`
// already included above
// #include "action_interfaces/action/detail/mission__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Mission_SendGoal_Request__rosidl_typesupport_introspection_c__Mission_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  action_interfaces__action__Mission_SendGoal_Request__init(message_memory);
}

void Mission_SendGoal_Request__rosidl_typesupport_introspection_c__Mission_SendGoal_Request_fini_function(void * message_memory)
{
  action_interfaces__action__Mission_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Mission_SendGoal_Request__rosidl_typesupport_introspection_c__Mission_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_interfaces__action__Mission_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_interfaces__action__Mission_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Mission_SendGoal_Request__rosidl_typesupport_introspection_c__Mission_SendGoal_Request_message_members = {
  "action_interfaces__action",  // message namespace
  "Mission_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(action_interfaces__action__Mission_SendGoal_Request),
  Mission_SendGoal_Request__rosidl_typesupport_introspection_c__Mission_SendGoal_Request_message_member_array,  // message members
  Mission_SendGoal_Request__rosidl_typesupport_introspection_c__Mission_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Mission_SendGoal_Request__rosidl_typesupport_introspection_c__Mission_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Mission_SendGoal_Request__rosidl_typesupport_introspection_c__Mission_SendGoal_Request_message_type_support_handle = {
  0,
  &Mission_SendGoal_Request__rosidl_typesupport_introspection_c__Mission_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_action_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_interfaces, action, Mission_SendGoal_Request)() {
  Mission_SendGoal_Request__rosidl_typesupport_introspection_c__Mission_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  Mission_SendGoal_Request__rosidl_typesupport_introspection_c__Mission_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_interfaces, action, Mission_Goal)();
  if (!Mission_SendGoal_Request__rosidl_typesupport_introspection_c__Mission_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    Mission_SendGoal_Request__rosidl_typesupport_introspection_c__Mission_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Mission_SendGoal_Request__rosidl_typesupport_introspection_c__Mission_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "action_interfaces/action/detail/mission__rosidl_typesupport_introspection_c.h"
// already included above
// #include "action_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "action_interfaces/action/detail/mission__functions.h"
// already included above
// #include "action_interfaces/action/detail/mission__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Mission_SendGoal_Response__rosidl_typesupport_introspection_c__Mission_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  action_interfaces__action__Mission_SendGoal_Response__init(message_memory);
}

void Mission_SendGoal_Response__rosidl_typesupport_introspection_c__Mission_SendGoal_Response_fini_function(void * message_memory)
{
  action_interfaces__action__Mission_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Mission_SendGoal_Response__rosidl_typesupport_introspection_c__Mission_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_interfaces__action__Mission_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_interfaces__action__Mission_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Mission_SendGoal_Response__rosidl_typesupport_introspection_c__Mission_SendGoal_Response_message_members = {
  "action_interfaces__action",  // message namespace
  "Mission_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(action_interfaces__action__Mission_SendGoal_Response),
  Mission_SendGoal_Response__rosidl_typesupport_introspection_c__Mission_SendGoal_Response_message_member_array,  // message members
  Mission_SendGoal_Response__rosidl_typesupport_introspection_c__Mission_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Mission_SendGoal_Response__rosidl_typesupport_introspection_c__Mission_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Mission_SendGoal_Response__rosidl_typesupport_introspection_c__Mission_SendGoal_Response_message_type_support_handle = {
  0,
  &Mission_SendGoal_Response__rosidl_typesupport_introspection_c__Mission_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_action_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_interfaces, action, Mission_SendGoal_Response)() {
  Mission_SendGoal_Response__rosidl_typesupport_introspection_c__Mission_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!Mission_SendGoal_Response__rosidl_typesupport_introspection_c__Mission_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    Mission_SendGoal_Response__rosidl_typesupport_introspection_c__Mission_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Mission_SendGoal_Response__rosidl_typesupport_introspection_c__Mission_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "action_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "action_interfaces/action/detail/mission__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers action_interfaces__action__detail__mission__rosidl_typesupport_introspection_c__Mission_SendGoal_service_members = {
  "action_interfaces__action",  // service namespace
  "Mission_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // action_interfaces__action__detail__mission__rosidl_typesupport_introspection_c__Mission_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // action_interfaces__action__detail__mission__rosidl_typesupport_introspection_c__Mission_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t action_interfaces__action__detail__mission__rosidl_typesupport_introspection_c__Mission_SendGoal_service_type_support_handle = {
  0,
  &action_interfaces__action__detail__mission__rosidl_typesupport_introspection_c__Mission_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_interfaces, action, Mission_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_interfaces, action, Mission_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_action_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_interfaces, action, Mission_SendGoal)() {
  if (!action_interfaces__action__detail__mission__rosidl_typesupport_introspection_c__Mission_SendGoal_service_type_support_handle.typesupport_identifier) {
    action_interfaces__action__detail__mission__rosidl_typesupport_introspection_c__Mission_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)action_interfaces__action__detail__mission__rosidl_typesupport_introspection_c__Mission_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_interfaces, action, Mission_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_interfaces, action, Mission_SendGoal_Response)()->data;
  }

  return &action_interfaces__action__detail__mission__rosidl_typesupport_introspection_c__Mission_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "action_interfaces/action/detail/mission__rosidl_typesupport_introspection_c.h"
// already included above
// #include "action_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "action_interfaces/action/detail/mission__functions.h"
// already included above
// #include "action_interfaces/action/detail/mission__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Mission_GetResult_Request__rosidl_typesupport_introspection_c__Mission_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  action_interfaces__action__Mission_GetResult_Request__init(message_memory);
}

void Mission_GetResult_Request__rosidl_typesupport_introspection_c__Mission_GetResult_Request_fini_function(void * message_memory)
{
  action_interfaces__action__Mission_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Mission_GetResult_Request__rosidl_typesupport_introspection_c__Mission_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_interfaces__action__Mission_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Mission_GetResult_Request__rosidl_typesupport_introspection_c__Mission_GetResult_Request_message_members = {
  "action_interfaces__action",  // message namespace
  "Mission_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(action_interfaces__action__Mission_GetResult_Request),
  Mission_GetResult_Request__rosidl_typesupport_introspection_c__Mission_GetResult_Request_message_member_array,  // message members
  Mission_GetResult_Request__rosidl_typesupport_introspection_c__Mission_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Mission_GetResult_Request__rosidl_typesupport_introspection_c__Mission_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Mission_GetResult_Request__rosidl_typesupport_introspection_c__Mission_GetResult_Request_message_type_support_handle = {
  0,
  &Mission_GetResult_Request__rosidl_typesupport_introspection_c__Mission_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_action_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_interfaces, action, Mission_GetResult_Request)() {
  Mission_GetResult_Request__rosidl_typesupport_introspection_c__Mission_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!Mission_GetResult_Request__rosidl_typesupport_introspection_c__Mission_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    Mission_GetResult_Request__rosidl_typesupport_introspection_c__Mission_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Mission_GetResult_Request__rosidl_typesupport_introspection_c__Mission_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "action_interfaces/action/detail/mission__rosidl_typesupport_introspection_c.h"
// already included above
// #include "action_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "action_interfaces/action/detail/mission__functions.h"
// already included above
// #include "action_interfaces/action/detail/mission__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "action_interfaces/action/mission.h"
// Member `result`
// already included above
// #include "action_interfaces/action/detail/mission__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Mission_GetResult_Response__rosidl_typesupport_introspection_c__Mission_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  action_interfaces__action__Mission_GetResult_Response__init(message_memory);
}

void Mission_GetResult_Response__rosidl_typesupport_introspection_c__Mission_GetResult_Response_fini_function(void * message_memory)
{
  action_interfaces__action__Mission_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Mission_GetResult_Response__rosidl_typesupport_introspection_c__Mission_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_interfaces__action__Mission_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_interfaces__action__Mission_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Mission_GetResult_Response__rosidl_typesupport_introspection_c__Mission_GetResult_Response_message_members = {
  "action_interfaces__action",  // message namespace
  "Mission_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(action_interfaces__action__Mission_GetResult_Response),
  Mission_GetResult_Response__rosidl_typesupport_introspection_c__Mission_GetResult_Response_message_member_array,  // message members
  Mission_GetResult_Response__rosidl_typesupport_introspection_c__Mission_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Mission_GetResult_Response__rosidl_typesupport_introspection_c__Mission_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Mission_GetResult_Response__rosidl_typesupport_introspection_c__Mission_GetResult_Response_message_type_support_handle = {
  0,
  &Mission_GetResult_Response__rosidl_typesupport_introspection_c__Mission_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_action_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_interfaces, action, Mission_GetResult_Response)() {
  Mission_GetResult_Response__rosidl_typesupport_introspection_c__Mission_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_interfaces, action, Mission_Result)();
  if (!Mission_GetResult_Response__rosidl_typesupport_introspection_c__Mission_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    Mission_GetResult_Response__rosidl_typesupport_introspection_c__Mission_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Mission_GetResult_Response__rosidl_typesupport_introspection_c__Mission_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "action_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "action_interfaces/action/detail/mission__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers action_interfaces__action__detail__mission__rosidl_typesupport_introspection_c__Mission_GetResult_service_members = {
  "action_interfaces__action",  // service namespace
  "Mission_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // action_interfaces__action__detail__mission__rosidl_typesupport_introspection_c__Mission_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // action_interfaces__action__detail__mission__rosidl_typesupport_introspection_c__Mission_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t action_interfaces__action__detail__mission__rosidl_typesupport_introspection_c__Mission_GetResult_service_type_support_handle = {
  0,
  &action_interfaces__action__detail__mission__rosidl_typesupport_introspection_c__Mission_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_interfaces, action, Mission_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_interfaces, action, Mission_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_action_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_interfaces, action, Mission_GetResult)() {
  if (!action_interfaces__action__detail__mission__rosidl_typesupport_introspection_c__Mission_GetResult_service_type_support_handle.typesupport_identifier) {
    action_interfaces__action__detail__mission__rosidl_typesupport_introspection_c__Mission_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)action_interfaces__action__detail__mission__rosidl_typesupport_introspection_c__Mission_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_interfaces, action, Mission_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_interfaces, action, Mission_GetResult_Response)()->data;
  }

  return &action_interfaces__action__detail__mission__rosidl_typesupport_introspection_c__Mission_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "action_interfaces/action/detail/mission__rosidl_typesupport_introspection_c.h"
// already included above
// #include "action_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "action_interfaces/action/detail/mission__functions.h"
// already included above
// #include "action_interfaces/action/detail/mission__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "action_interfaces/action/mission.h"
// Member `feedback`
// already included above
// #include "action_interfaces/action/detail/mission__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Mission_FeedbackMessage__rosidl_typesupport_introspection_c__Mission_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  action_interfaces__action__Mission_FeedbackMessage__init(message_memory);
}

void Mission_FeedbackMessage__rosidl_typesupport_introspection_c__Mission_FeedbackMessage_fini_function(void * message_memory)
{
  action_interfaces__action__Mission_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Mission_FeedbackMessage__rosidl_typesupport_introspection_c__Mission_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_interfaces__action__Mission_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_interfaces__action__Mission_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Mission_FeedbackMessage__rosidl_typesupport_introspection_c__Mission_FeedbackMessage_message_members = {
  "action_interfaces__action",  // message namespace
  "Mission_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(action_interfaces__action__Mission_FeedbackMessage),
  Mission_FeedbackMessage__rosidl_typesupport_introspection_c__Mission_FeedbackMessage_message_member_array,  // message members
  Mission_FeedbackMessage__rosidl_typesupport_introspection_c__Mission_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  Mission_FeedbackMessage__rosidl_typesupport_introspection_c__Mission_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Mission_FeedbackMessage__rosidl_typesupport_introspection_c__Mission_FeedbackMessage_message_type_support_handle = {
  0,
  &Mission_FeedbackMessage__rosidl_typesupport_introspection_c__Mission_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_action_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_interfaces, action, Mission_FeedbackMessage)() {
  Mission_FeedbackMessage__rosidl_typesupport_introspection_c__Mission_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  Mission_FeedbackMessage__rosidl_typesupport_introspection_c__Mission_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_interfaces, action, Mission_Feedback)();
  if (!Mission_FeedbackMessage__rosidl_typesupport_introspection_c__Mission_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    Mission_FeedbackMessage__rosidl_typesupport_introspection_c__Mission_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Mission_FeedbackMessage__rosidl_typesupport_introspection_c__Mission_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
