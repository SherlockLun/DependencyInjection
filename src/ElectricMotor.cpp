#include "ElectricMotor.h"

#include <iostream>

ElectricMotor::ElectricMotor()
{
    std::cout << "ElectricMotor created." << std::endl;
}

void ElectricMotor::startMotor()
{
    std::cout << "ElectricMotor started." << std::endl;
}

void ElectricMotor::stopMotor()
{
    std::cout << "ElectricMotor stopped." << std::endl;
}