#include "Car.h"
#include "ElectricMotor.h"
#include "CombustionMotor.h"

int main(void)
{
    ElectricMotor electricMotor;
    Car car(&electricMotor);
    car.startCar();
    car.stopCar();

    CombustionMotor combustionMotor;
    Car car2(&combustionMotor);
    car2.startCar();
    car2.stopCar();

    return 0;
}