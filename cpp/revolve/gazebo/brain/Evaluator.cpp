/*
 * Copyright (C) 2015-2018 Vrije Universiteit Amsterdam
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
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
 * Author: Milan Jelisavcic
 * Date: 10-09-18
 *
 */

#include <cmath>

#include "Evaluator.h"

namespace revolve
{
  namespace gazebo
  {
    Evaluator::Evaluator()
    {
      this->currentPosition_.Reset();
      this->previousPosition_.Reset();
    }

    Evaluator::~Evaluator()
    {

    }

    void Evaluator::start()
    {
      this->previousPosition_ = this->currentPosition_;
    }

    double Evaluator::fitness()
    {
      double dS = std::sqrt(
              std::pow(this->previousPosition_.Pos().X()
                       - this->currentPosition_.Pos().X(), 2) +
              std::pow(this->previousPosition_.Pos().Y()
                       - this->currentPosition_.Pos().Y(), 2));
      this->previousPosition_ = this->currentPosition_;
      return dS / 30.0;  // dS / RLPower::FREQUENCY_RATE
    }

    void Evaluator::update(const ignition::math::Pose3d pose)
    {
      this->currentPosition_ = pose;
    }
  }
}
