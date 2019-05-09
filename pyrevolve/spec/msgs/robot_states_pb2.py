# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: robot_states.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from pygazebo.msg import time_pb2 as time__pb2
from pygazebo.msg import pose_pb2 as pose__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='robot_states.proto',
  package='revolve.msgs',
  syntax='proto2',
  serialized_pb=_b('\n\x12robot_states.proto\x12\x0crevolve.msgs\x1a\ntime.proto\x1a\npose.proto\"G\n\nRobotState\x12\n\n\x02id\x18\x01 \x02(\r\x12\x0c\n\x04name\x18\x02 \x02(\t\x12\x1f\n\x04pose\x18\x03 \x02(\x0b\x32\x11.gazebo.msgs.Pose\"]\n\x0bRobotStates\x12\x1f\n\x04time\x18\x01 \x02(\x0b\x32\x11.gazebo.msgs.Time\x12-\n\x0brobot_state\x18\x02 \x03(\x0b\x32\x18.revolve.msgs.RobotState')
  ,
  dependencies=[time__pb2.DESCRIPTOR,pose__pb2.DESCRIPTOR,])




_ROBOTSTATE = _descriptor.Descriptor(
  name='RobotState',
  full_name='revolve.msgs.RobotState',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='id', full_name='revolve.msgs.RobotState.id', index=0,
      number=1, type=13, cpp_type=3, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='name', full_name='revolve.msgs.RobotState.name', index=1,
      number=2, type=9, cpp_type=9, label=2,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='pose', full_name='revolve.msgs.RobotState.pose', index=2,
      number=3, type=11, cpp_type=10, label=2,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto2',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=60,
  serialized_end=131,
)


_ROBOTSTATES = _descriptor.Descriptor(
  name='RobotStates',
  full_name='revolve.msgs.RobotStates',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='time', full_name='revolve.msgs.RobotStates.time', index=0,
      number=1, type=11, cpp_type=10, label=2,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='robot_state', full_name='revolve.msgs.RobotStates.robot_state', index=1,
      number=2, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto2',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=133,
  serialized_end=226,
)

_ROBOTSTATE.fields_by_name['pose'].message_type = pose__pb2._POSE
_ROBOTSTATES.fields_by_name['time'].message_type = time__pb2._TIME
_ROBOTSTATES.fields_by_name['robot_state'].message_type = _ROBOTSTATE
DESCRIPTOR.message_types_by_name['RobotState'] = _ROBOTSTATE
DESCRIPTOR.message_types_by_name['RobotStates'] = _ROBOTSTATES
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

RobotState = _reflection.GeneratedProtocolMessageType('RobotState', (_message.Message,), dict(
  DESCRIPTOR = _ROBOTSTATE,
  __module__ = 'robot_states_pb2'
  # @@protoc_insertion_point(class_scope:revolve.msgs.RobotState)
  ))
_sym_db.RegisterMessage(RobotState)

RobotStates = _reflection.GeneratedProtocolMessageType('RobotStates', (_message.Message,), dict(
  DESCRIPTOR = _ROBOTSTATES,
  __module__ = 'robot_states_pb2'
  # @@protoc_insertion_point(class_scope:revolve.msgs.RobotStates)
  ))
_sym_db.RegisterMessage(RobotStates)


# @@protoc_insertion_point(module_scope)
