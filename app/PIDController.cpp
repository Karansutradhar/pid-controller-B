/** Copyright 2020 Karan Sutradhar
 * @file PIDController.cpp
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
 *  This is cpp file for PIDController.cpp this file implements
 *  the code to compute the velocity with minimum error and works
 *  on feedback loop to maintain velocity to required velocity
 */

#include <PIDController.hpp>
/*
 * @brief Implementation of the PIDController class.
 * @param none
 * @return none
 */
pidController::pidController() {
  kp = 1.0;
  kd = 1.0;
  ki = 1.0;
  dT = 1.0;
}

pidController::pidController(double Kp, double Ki, double Kd, double dt) {
  kp = Kp;
  ki = Ki;
  kd = Kd;
  dT = dt;
}

double pidController::getKpGain() {
  return kp;
}

double pidController::getKiGain() {
  return ki;
}

double pidController::getKdGain() {
  return kd;
}

double pidController::calculate(double requiredVelocity, double actualVelocity) {
  // Calculates the error and the gains of the PID.
  double error = requiredVelocity - actualVelocity;
  double prnlError = kp*error;
  double intgrError = ki*error * dT;
  double devtError_kd = kd*(error/dT);
  double totalError = prnlError + intgrError + devtError_kd;
  return totalError;
}

pidController::~pidController() {}
