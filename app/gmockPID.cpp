/** Copyright 2020 Karan Sutradhar
 * @file gmockPID.cpp
 * @author
 *
 * Karan Sutradhar (117037272)
 *
 * @date 11/22/2020
 * @version 1.0
 *
 * @section LICENSE
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * @section DESCRIPTION
 *
 *  This is cpp file for gmockPID.cpp this file implements
 *  gmockPID class with gmock setup
 */

#include "gmockPID.hpp"

/*
 * @brief The implementation of the gmockPID class with gmock setup
 */
gmockPID::gmockPID() :
  kp(0),
  ki(0),
  kd(0),
  dT(0) {
}

double gmockPID::setKpGain(double Kp) {
  kp = Kp;
  return kp;
}

double gmockPID::setKdGain(double Kd) {
  kd = Kd;
  return kd;
}

double gmockPID::setKiGain(double Ki) {
  ki = Ki;
  return ki;
}

