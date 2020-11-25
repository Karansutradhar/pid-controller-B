/** Copyright 2020 Karan Sutradhar
 * @file test.cpp
 * @authors
 *
 * Part 1
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
 * @brief Test file that consists of all TEST CASES to test the implemented PID
 * Class.
 * @brief Makes use of Google mock's Setup and TearDown features for testing
 * classes.
 *
 */

#include <gmock/gmock.h>
#include <gtest/gtest.h>
#include <iostream>
#include <limits>
#include "mockTest.hpp"
#include "gmockStatic.hpp"
#include "gmockPID.hpp"
#include "PIDController.hpp"

using ::testing::AtLeast;
using ::testing::Return;
using ::testing::_;

/*
 * @brief Test case for the setKpGain function using mock.
 * @param None.
 * @return None.
 */
TEST(gmockStatic, testSetKpFunc) {
  pidController pid;
  std::unique_ptr<mockTest> mpid(new mockTest);
  std::unique_ptr<gmockStatic> gmock;
  EXPECT_CALL(*mpid, setKpGain(3.0)).Times(1).WillOnce(Return(3.0));
  EXPECT_EQ(1, pid.getKpGain());
  gmock->setKpGain(std::move(mpid));
  EXPECT_EQ(2, pid.setKpGain(2));
}
/*
 * @brief Test case for the setKiGain function using mock.
 * @param None.
 * @return None.
 */

TEST(gmockStatic, testSetKiFunc) {
  pidController pid;
  std::unique_ptr<mockTest> mpid(new mockTest);
  std::unique_ptr<gmockStatic> gmock;
  EXPECT_CALL(*mpid, setKiGain(1.0)).Times(1).WillOnce(Return(1.0));
  EXPECT_EQ(1.0, pid.getKiGain());
  gmock->setKiGain(std::move(mpid));
  EXPECT_EQ(1.0, pid.setKiGain(1.0));
}
/*
 * @brief Test case for the setKdGain function using mock.
 * @param None.
 * @return None.
 */
TEST(gmockStatic, testSetKdFunc) {
  pidController pid;
  std::unique_ptr<mockTest> mpid(new mockTest);
  std::unique_ptr<gmockStatic> gmock;
  EXPECT_CALL(*mpid, setKdGain(2.0)).Times(1).WillOnce(Return(2.0));
  EXPECT_EQ(1, pid.getKdGain());
  gmock->setKdGain(std::move(mpid));
  EXPECT_EQ(1.2, pid.setKdGain(1.2));
}
/*
 * @brief Test case for the calculate function using mock.
 * @param None.
 * @return None.
 */
TEST(gmockStatic, testCalculateFunc) {
  pidController pid;
  std::unique_ptr<mockTest> mpid(new mockTest);
  std::unique_ptr<gmockStatic> gmock;
  EXPECT_CALL(*mpid, calculate(0.0, 1.0)).Times(1).WillOnce(Return(0.0));
  gmock->calculate(std::move(mpid));
  double gainVal = pid.calculate(0.0, 1.0);
  EXPECT_NEAR(-3, gainVal, 1);
}
/*
 * @brief Unit test of the PIDController class and the set values.
 * @param None.
 * @return None.
 */

TEST(PIDTest, testGainsFunc) {
  mockTest gmock;
  pidController pid(3, 2, 4, 0.5);
  EXPECT_EQ(3, pid.getKpGain());
  EXPECT_EQ(2, pid.getKiGain());
  EXPECT_EQ(4, pid.getKdGain());
}

