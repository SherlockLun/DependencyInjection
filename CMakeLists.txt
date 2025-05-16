cmake_minimum_required(VERSION 3.10)
project(Car)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(${CMAKE_SOURCE_DIR}/inc)

add_executable(Car
    app/main.cpp
    src/Car.cpp
    src/ElectricMotor.cpp
    src/CombustionMotor.cpp
)