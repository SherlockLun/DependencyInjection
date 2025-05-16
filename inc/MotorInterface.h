#pragma once

class MotorInterface
{
public:
    virtual void startMotor() = 0;
    virtual void stopMotor() = 0;
};