/** Copyright 2020 Karan Sutradhar
 * @file mockTest.hpp
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
 *
 * @brief mockTest header file that initilize the mock method to test
 * using the mock method.
 * @brief Makes use of Google mock's Setup 
 *
 */
#pragma once

#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "gmockPID.hpp"
/*
 * @brief  Class to initialize the mock method to test 
 * using the mock method.
 */
class mockTest: public gmockPID {
 public:
  /*
   * @brief Initialize the mock test for the setKp function
   * @param The value of proportional gain(Kp)
   * @return None.
   */
  MOCK_METHOD1(setKpGain, double(double));
  /*
   * @brief Initialize the mock test for the setKi function
   * @param The value of integral gain(Ki)
   * @return None.
   */
  MOCK_METHOD1(setKiGain, double(double));
  /*
   * @brief Initialize the mock test for the setKd function
   * @param The value of differential gain(Kd)
   * @return None.
   */
  MOCK_METHOD1(setKdGain, double(double));
  /*
   * @brief Initialize the mock test for the calculate function
   * @param The value of the set state.
   * @param The value of the current state
   * @return None.
   */
  MOCK_METHOD2(calculate, double(double, double));
};

