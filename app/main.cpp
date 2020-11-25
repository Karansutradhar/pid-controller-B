/** Copyright 2020 Karan Sutradhar
 * @file main.cpp
 * @authors
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
 *  This is main.cpp file for PID Controller this file implements
 *  the code to compute the velocity with minimum error and works
 *  on feedback loop to maintain velocity to required velocity
 */

#include <cmath>
#include <iostream>
#include <memory>
#include "gmockPID.hpp"
#include "PIDController.hpp"

/**
 * @brief It is the main function to demonstrate working of implemented
 * controller.
 * @param none
 * @returns Run status (int)
 */

int main() {
  pidController pid;  // Initializing the object
  // A pointer initlized to the virtual class and an object is created
  std::unique_ptr<gmockPID> gpid = std::make_unique<pidController>();
  double requiredVelocity, actualVelocity;
  // Get the values for the calculate function.
  std::cout << "Enter the value of the required Velocity : ";
  std::cin >> requiredVelocity;
  std::cout << "Enter the value of the actual Velocity : ";
  std::cin >> actualVelocity;
  // Setting the PID gains values
  gpid->setKpGain(2.0);
  gpid->setKdGain(1.0);
  gpid->setKiGain(2.0);
  // Compute the value of the PIDController gains values.
  double calulateValues = pid.calculate(requiredVelocity, actualVelocity);
  std::cout << "The output velocity values from the PID Controller Calculate function is"
    << calulateValues<< std::endl;
  return 0;
}
