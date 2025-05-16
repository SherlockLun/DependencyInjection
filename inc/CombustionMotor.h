#pragma once

#include "MotorInterface.h"

class CombustionMotor : public MotorInterface
{
public:
    CombustionMotor();

    void startMotor() override;
    void stopMotor() override;
};