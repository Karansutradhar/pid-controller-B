add_library(libPID SHARED PIDController.cpp gmockPID.cpp PIDController.cpp)

add_executable(shell-app main.cpp PIDController.cpp)
target_link_libraries(shell-app libPID)
include_directories(
    ${CMAKE_SOURCE_DIR}/include
)
