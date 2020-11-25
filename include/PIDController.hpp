/** Copyright 2020 Karan Sutradhar
 * @file main.cpp
 * @authors
 *
 * Karan Sutradhar (117037272)
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
 *  This is header file for PIDController.h this file implements
 *  the code to compute the velocity with minimum error and works
 *  on feedback loop to maintain velocity to required velocity
 */

#pragma once

#include <iostream>
#include "gmockPID.hpp"

/**
 * @brief it is the declaration of pidController Class
 */
class pidController : public gmockPID{
 public:
  /**
   * @brief default constructor of the class pidController
   * @param none
   * @return none
   */

  pidController();  // Empty Constructor

  /**
   * @brief parameterized constructorof class pidController to initialize the
   * private members
   * @param kpValue variable for initializing the member kp
   * @param kiValue variable for initializing the member ki
   * @param kdValue variable for initializing the member kd
   * @param dtValue variable for initializing the member dt
   * @return none
   */

  pidController(double Kp, double Ki, double Kd,
                double dt);  // Value Constructor

  /**
   * @brief default destructor which destroys the object of the class
   * pidController
   * @param dtValue variable for initializing the member dt
   * @return none
   */

  ~pidController();  // Destructor

  /**
   * @brief it is a getter method to get the Kp member variable
   * @param none
   * @return 0.0
   */

  double getKpGain();  // Get Kp Gain

  /**
   * @brief it is a getter method to get the Ki member variable
   * @param none
   * @return 0.0
   */

  double getKiGain();  // Get Ki Gain

  /**
   * @brief it is a getter method to get the Kd member variable
   * @param none
   * @return 0.0
   */

  double getKdGain();  // Get Kd Gain
  
  /**
   * @brief it is a method to calculate the output velocity
   * @param double requiredVelocity
   * @param double actualVelocity
   * @return output velocity
   */

  double calculate(double requiredVelocity,
                           double actualVelocity);  // Compute the PID Output

};
