#ifndef FLYABLE_VEHICLE_H
#define FLYABLE_VEHICLE_H

#include <iostream>

class Vehicle {
public:
    void virtual startEngine();
    void virtual checkFuelTank();
    void virtual fillFuelTank(int fuel);
    void virtual engineOff();
protected:
    int _fuelAmount;
};


#endif //FLYABLE_VEHICLE_H
