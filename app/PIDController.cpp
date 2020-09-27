/**
* @file PIDController.cpp
* @author
*
* Karan Sutradhar (117037272)
* Vishnuu Appaya Dhanabalan (116873314)
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
*  This is cpp file for PIDController.cpp this file implements
*  the code to compute the velocity with minimum error and works
*  on feedback loop to maintain velocity to required velocity
*/

#include "PIDController.h"

/**
 * @brief default constructor of the class pidController
 * @param none
 * @return none
 */

pidController::pidController(){}

/**
 * @brief parameterized constructorof class pidController to initialize the private members
 * @param kpValue variable for initializing the member kp
 * @param kiValue variable for initializing the member ki
 * @param kdValue variable for initializing the member kd
 * @param dtValue variable for initializing the member dt
 * @return none
 */ 

pidController::pidController(double kpValue, double kiValue, double kdValue, double dtValue) {
    kp = kpValue;
    ki = kiValue;
    kd = kdValue;
    dt = dtValue;
}

/**
 * @brief default destructor which destroys the object of the class pidController
 * @param none
 * @return none
 */

pidController::~pidController(){}

/**
 * @brief it is a setter method to set the Kp variable to a new value
 * @param double k
 * @return none
 */

void pidController::setKpGain(double k){}

/**
 * @brief it is a setter method to set the Ki variable to a new value
 * @param double k
 * @return none
 */

void pidController::setKiGain(double k){}

/**
 * @brief it is a setter method to set the Kd variable to a new value
 * @param double k
 * @return none
 */

void pidController::setKdGain(double k){}

/**
 * @brief it is a setter method to set the Dt variable to a new value
 * @param double dt
 * @return none
 */

void pidController::setDtVal(double dt){}

/**
 * @brief it is a getter method to get the Dt member variable
 * @param none
 * @return 0.0
 */

double pidController::getDtVal(){return 0.0;}

/**
 * @brief it is a getter method to get the Kp member variable
 * @param none
 * @return 0.0
 */

double pidController::getKpGain(){return 0.0;}

/**
 * @brief it is a getter method to get the Ki member variable
 * @param none
 * @return 0.0
 */

double pidController::getKiGain(){return 0.0;}

/**
 * @brief it is a getter method to set the Kd member variable
 * @param none
 * @return 0.0
 */

double pidController::getKdGain(){return 0.0;}

/**
 * @brief it is a getter method to get the IntergralError variable
 * @param none
 * @return 0.0
 */

double pidController::getIntegralError(){return 0.0;}

/**
 * @brief it is a reset method to reset the Integral Errror
 * @param none
 * @return none
 */

void pidController::resetIntegralError(){}

/**
 * @brief it is a method to compute the output velocity
 * @param double requiredVelocity
 * @param double actualVelocity
 * @return 0.0
 */

double pidController::calculateVelocity(double requiredVelocity, double actualVelocity) {
    return 0.0;
}
