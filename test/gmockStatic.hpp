/** Copyright 2020 Karan Sutradhar
 * @file gmockStatic.hpp
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
 * @brief gmockStatic header file that calls the functions from the gmockPID
 * Class.
 * @brief Makes use of Google mock's Setup 
 *
 */
#pragma once

#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <memory>
#include "gmockPID.hpp"
/*
 * @brief gmockStatic class to call the functions from the gmockPID class.
 */
class gmockStatic : public ::testing::Test {
 public:
  /*
   * @brief Function to test the setKp function.
   * @param unique pointer to the gmockPID class
   * @return None.
   *
   */
  void setKpGain(std::unique_ptr<gmockPID> gpid) {
    gpid->setKpGain(3.0);
  }
  /*
   * @brief Function to test the setKd function.
   * @param unique pointer to the gmockPID class
   * @return None.
   *
   */
  void setKdGain(std::unique_ptr<gmockPID> gpid) {
    gpid->setKdGain(2.0);
  }
  /*
   * @brief Function to test the setKi function.
   * @param unique pointer to the gmockPID class
   * @return None.
   *
   */
  void setKiGain(std::unique_ptr<gmockPID> gpid) {
    gpid->setKiGain(1.0);
  }
  /*
   * @brief Function to test the calculate function.
   * @param unique pointer to the gmockPID class
   * @return None.
   *
   */
  void calculate(std::unique_ptr<gmockPID> gpid) {
    gpid->calculate(0, 1);
  }
};

