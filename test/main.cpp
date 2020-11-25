/** Copyright 2020 Karan Sutradhar
 * @file main.cpp
 * @authors
 *
 * Part 1
 * Karan Sutradhar (117037272) - Driver
 * Vishnuu Appaya Dhanabalan (116873314) - Navigator
 *
 * Part 2
 * Sukoon Sarin (sukoonsarin) - Navigator
 * Nalin Das (nalindas9) -  Driver
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
 *  This is main.cpp file for the test this file implements
 *  the unit test cases
 */

#include <gmock/gmock.h>
#include <gtest/gtest.h>

/**
 * @brief Default main function to run the test blocks
 * @param int argc
 * @param char** argv
 * @returns test values
 */

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
