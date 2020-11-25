# GMock Demostration in PID Controller
[![Build Status](https://travis-ci.org/Karansutradhar/pid-controller-B.svg?branch=GMock_Extra_Credit)](https://travis-ci.org/Karansutradhar/pid-controller-B)
[![Coverage Status](https://coveralls.io/repos/github/Karansutradhar/pid-controller-B/badge.svg?branch=GMock_Extra_Credit)](https://coveralls.io/github/Karansutradhar/pid-controller-B?branch=GMock_Extra_Credit)
[![License: MIT](https://img.shields.io/badge/License-MIT-blue.svg)](https://opensource.org/licenses/MIT)

## Authors

Karan Sutradhar

## Overview

Simple starter C++ project to demonstrate your understanding of the mock concept in unit testing, using the Google Test and Google Mock frameworks.

Dependencies are:
- cmake
- googletest
- Travis CI
- Coveralls
- gmock


## GMock Test
For the GMock Test we create a virtual class "gmockPID". This is to test to demonstrate the understanding of the mock concept in unit testing, using the Google Test and Google Mock frameworks in C++. The virtual class is is then inherited by the PID class and caculate function is used.
The gmockPID class is mocked in the gmock test cases.
The gmock methods to test the class are in the mockTest file
Included the GMock folder and the dependencies for them on the Cmake lists in the test folder and the main CMakeList is changed.

## Standard install via command-line
```
git clone <repository>
cd <path to repository>
mkdir build
cd build
cmake ..
make
Run tests: ./test/cpp-test
Run program: ./app/shell-app
```

## Cpplint check

```
cd  <path to repository>
cpplint $( find . -name \*.hpp -or -name \*.cpp | grep -vE -e "^./build/" -e "^./vendor/" -e "^./docs/" -e "^./results" )
```
## Cppcheck check

```
cd <path to repository>
cppcheck --enable=all --std=c++11 -I include/ --suppress=missingIncludeSystem $( find . -name *.cpp | grep -vE -e "^./build/" -e "^./vendor/" )
```