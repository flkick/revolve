from __future__ import print_function
from revolve.builder.sdf.motor import ServoMotor

"""
Demonstrates creating a simple SDF bot from a spec and a YAML file.
"""
import sys
import os
from sdfbuilder.joint import Joint
from sdfbuilder.math import Vector3
from sdfbuilder import SDF, Link


# Add module to path
cur_path = os.path.dirname(os.path.realpath(__file__))
module_path = os.path.join(cur_path, '..', '..')
sys.path.append(module_path)

# Module imports
from revolve.spec import BodyImplementation, default_neural_net, PartSpec, ParamSpec
from revolve.builder.sdf.body import Box, Cylinder
from revolve.convert.yaml import yaml_to_robot
from revolve.builder.sdf import RobotBuilder, BodyBuilder, NeuralNetBuilder


# Define two simple body parts
# The first is a simple box that serves as the core
class Core(Box):
    X = 0.5
    Y = 0.8
    Z = 0.5
    MASS = 1.0


# The second is a motorized wheel. For this, we start
# with a cylinder, and extend it to include a thin
# connecting block and a motor.
class Wheel(Cylinder):
    RADIUS = 0.6
    MASS = 0.5
    LENGTH = 0.2
    MOTOR_SIZE = 0.1

    def _initialize(self, **kwargs):
        """
        :param kwargs:
        :return:
        """
        super(Wheel, self)._initialize(**kwargs)

        # Create the small box that serves as the motor
        self.attachment = Link("%s-cylinder-attach" % self.id)
        box_size = self.MOTOR_SIZE

        # Get attachment position and axis of the motor joint
        anchor = Vector3(0, 0, 0.5 * self.LENGTH)
        axis = self.get_slot_normal(0)

        # Size and position the box
        self.attachment.make_box(0.01, box_size, box_size, box_size)
        self.attachment.set_position(anchor + Vector3(0, 0, 0.5 * box_size))

        # Create revolute joint. Remember: joint position is in child frame
        motor_joint = Joint("revolute", self.link, self.attachment, axis=axis)
        motor_joint.set_position(Vector3(0, 0, -0.5 * box_size))
        self.add_joint(motor_joint)
        self.add_element(self.attachment)

        # Register the servo motor
        self.motors.append(ServoMotor(self.id, motor_joint))
        self.make_color(kwargs["red"], kwargs["green"], kwargs["blue"])

    def get_slot(self, slot_id):
        """
        Override get_slot, because we should return the attachment.
        :param slot_id:
        :return:
        """
        return self.attachment

    def get_slot_position(self, slot_id):
        """
        Modify `get_slot_position` to return the attachment of the
        motor instead.
        :param slot_id:
        :return:
        """
        v = super(Wheel, self).get_slot_position(slot_id)
        return v + Vector3(0, 0, self.MOTOR_SIZE)


# Define a spec with a simple block, with two aliases
channel_func = lambda channel: ParamSpec(channel, min_value=0, max_value=1, default=0.5)
body_spec = BodyImplementation(
    {
        ("Core", "C"): PartSpec(
            body_part=Core,
            arity=6,
            inputs=0
        ),
        ("Wheel", "W"): PartSpec(
            body_part=Wheel,
            arity=1,
            outputs=1,

            # Add color parameters to this part
            params=[channel_func("red"), channel_func("green"), channel_func("blue")]
        ),
    }
)

brain_spec = default_neural_net()

# Create bot YAML
bot = '''\
---
body:
  id: Core
  type: C
  children:
    0:
      id: Sub1
      type: W
    1:
      id: Sub2
      type: Wheel
      params:
        red: 1
        green: 0
        blue: 0
'''

# Convert the YAML file to protobuf
proto = yaml_to_robot(body_spec, brain_spec, bot)

# Convert the protobuf to SDF
builder = RobotBuilder(BodyBuilder(body_spec), NeuralNetBuilder(brain_spec))
model = builder.get_sdf_model(proto, "libtolmodelcontrol.so", "test_bot")

# Create SDF and output
sdf = SDF()
sdf.add_element(model)
print(str(sdf))