/**
* @file PIDController.cpp
* @author
*
* Part 1
* Karan Sutradhar (117037272) - Driver
* Vishnuu Appaya Dhanabalan (116873314) - Navigator
* 
* Part 2
* Sukoon Sarin (sukoonsarin) - Navigator
* Nalin Das (nalindas9) -  Driver
*
* @date 9/27/2020
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

#include "../include/PIDController.h"

/**
 * @brief default constructor of the class pidController
 * @param none
 * @return none
 */

tdd::pidController::pidController(){
    kp = 0;
    ki = 0;
    kd = 0;
    dt = 0.1;
    intgrError = 0;
    prevError = 0;}

/**
 * @brief parameterized constructorof class pidController to initialize the private members
 * @param kpValue variable for initializing the member kp
 * @param kiValue variable for initializing the member ki
 * @param kdValue variable for initializing the member kd
 * @param dtValue variable for initializing the member dt
 * @param previousError variable for initializing the member previousError
 * @param controlOutput variable for initializing the member controlOutput
 * @return none
 */ 

tdd::pidController::pidController(double kpValue, double kiValue, double kdValue, double dtValue) {
    kp = kpValue;
    ki = kiValue;
    kd = kdValue;
    dt = dtValue;
    intgrError = 0;
    prevError = 0;
}

/**
 * @brief default destructor which destroys the object of the class pidController
 * @param none
 * @return none
 */

tdd::pidController::~pidController(){}

/**
 * @brief it is a setter method to set the Kp variable to a new value
 * @param double k
 * @return none
 */

void tdd::pidController::setKpGain(double k){kp = k;}

/**
 * @brief it is a setter method to set the Ki variable to a new value
 * @param double k
 * @return none
 */

void tdd::pidController::setKiGain(double k){ki = k;}

/**
 * @brief it is a setter method to set the Kd variable to a new value
 * @param double k
 * @return none
 */

void tdd::pidController::setKdGain(double k){kd = k;}

/**
 * @brief it is a setter method to set the Dt variable to a new value
 * @param double dt
 * @return none
 */

void tdd::pidController::setDtVal(double dT){(dT > 0) ? dt = dT: 1;}

/**
 * @brief it is a getter method to get the Dt member variable
 * @param none
 * @return 0.0
 */

double tdd::pidController::getDtVal(){return dt;}

/**
 * @brief it is a getter method to get the Kp member variable
 * @param none
 * @return 0.0
 */

double tdd::pidController::getKpGain(){return kp;}

/**
 * @brief it is a getter method to get the Ki member variable
 * @param none
 * @return 0.0
 */

double tdd::pidController::getKiGain(){return ki;}

/**
 * @brief it is a getter method to set the Kd member variable
 * @param none
 * @return 0.0
 */

double tdd::pidController::getKdGain(){return kd;}

/**
 * @brief it is a getter method to get the IntergralError variable
 * @param none
 * @return 0.0
 */

double tdd::pidController::getIntegralError(){return intgrError;}

/**
 * @brief it is a reset method to reset the Integral Errror
 * @param none
 * @return none
 */

void tdd::pidController::resetIntegralError(){intgrError = 0;}

/**
 * @brief it is a method to compute the output velocity
 * @param double requiredVelocity
 * @param double actualVelocity
 * @return control output
 */

double tdd::pidController::calculateVelocity(double requiredVelocity, double actualVelocity) {
    double error = requiredVelocity - actualVelocity;
    intgrError += error*dt;
    double controlOutput = (kp*error) + (ki*intgrError) + (kd/dt)*(error-prevError);
    prevError = error;
    return controlOutput;
}
