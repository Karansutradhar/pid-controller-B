/** Copyright 2020 Karan Sutradhar
 * @file main.cpp
 * @authors
 *
 * Karan Sutradhar (117037272)
 *
 *
 * @date 11/22/2020
 *
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
 *  This is header file for gmockPID.hpp this file implements
 *  the code to declare the gmockPID clas with virtual members
 */

#pragma once

#include <iostream>
/**
 * @brief it is the declaration of pidController Class
 */
class gmockPID {
 protected:
  double kp;          // Proportional gain
  double ki;          // Integral gain
  double kd;          // Derivative gain
  double dT;          // change in time

 public:
  /**
   * @brief default constructor of the class pidController
   * @param none
   * @return none
   */

  gmockPID();  // Empty Constructor

  /**
   * @brief default virtual destructor which destroys the object of the class
   * pidController
   * @param none
   * @return none
   */

  virtual ~gmockPID() {};  // Destructor

  /**
   * @brief it is a virtual setter method to set the Kp variable to a new value
   * @param double kp
   * @return none
   */

  virtual double setKpGain(double Kp);  // Update Kp Gain on the fly

  /**
   * @brief it is a virtual setter method to set the Ki variable to a new value
   * @param double ki
   * @return none
   */

  virtual double setKiGain(double Ki);  // Update Ki Gain on the fly

  /**
   * @brief it is a virtual setter method to set the Kd variable to a new value
   * @param double kd
   * @return none
   */

  virtual double setKdGain(double Kd);  // Update Kd Gain on the fly

  /**
   * @brief it is a virtual method to compute the output velocity
   * @param double requiredVelocity
   * @param double actualVelocity
   * @return output velocity
   */

  virtual double calculate(double requiredVelocity,
                           double actualVelocity) = 0;  // Compute the PID Output
};
