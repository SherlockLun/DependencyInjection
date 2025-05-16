#include "Car.h"

#include <iostream>

Car::Car(MotorInterface *motor) : mMotor(motor)
{
}

void Car::startCar()
{
    std::cout << "Car motor started." << std::endl;
    mMotor->startMotor();
}

void Car::stopCar()
{
    std::cout << "Car motor stopped." << std::endl;
    mMotor->stopMotor();
}