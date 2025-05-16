#pragma once

#include "MotorInterface.h"

class Car
{
public:
    Car(MotorInterface *motor);
    void startCar();
    void stopCar();

private:
    MotorInterface *mMotor;
};