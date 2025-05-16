#include "CombustionMotor.h"

#include <iostream>

CombustionMotor::CombustionMotor()
{
    std::cout << "CombustionMotor created." << std::endl;
}

void CombustionMotor::startMotor()
{
    std::cout << "CombustionMotor started." << std::endl;
}

void CombustionMotor::stopMotor()
{
    std::cout << "CombustionMotor stopped." << std::endl;
}