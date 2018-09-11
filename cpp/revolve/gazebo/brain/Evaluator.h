/*
* Copyright (C) 2017 Vrije Universiteit Amsterdam
*
* Licensed under the Apache License, Version 2.0 (the "License");
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*
* Description: TODO: <Add brief description about file purpose>
* Author: Matteo De Carlo
*
*/

#ifndef REVOLVEBRAIN_BRAIN_EVALUATOR_H
#define REVOLVEBRAIN_BRAIN_EVALUATOR_H

#include <boost/shared_ptr.hpp>

#include <gazebo/common/common.hh>

namespace revolve
{
  namespace gazebo
  {
    class Evaluator
    {
      /// \brief Constructor
      public: Evaluator();

      /// \brief Destructor
      public: ~Evaluator();

      /// \brief Initialisation method
      public: void start();

      /// \brief Retrieve the fitness
      public: double fitness();

      /// \brief Update the position
      public: void update(const ignition::math::Pose3d pose);

      /// \brief Previous position of a robot
      private: ignition::math::Pose3d previousPosition_;

      /// \brief Current position of a robot
      private: ignition::math::Pose3d currentPosition_;
    };
  }
}

#endif  // REVOLVEBRAIN_BRAIN_EVALUATOR_H
