#pragma once

#include "MotorInterface.h"

class ElectricMotor : public MotorInterface
{
public:
    ElectricMotor();

    void startMotor() override;
    void stopMotor() override;
};