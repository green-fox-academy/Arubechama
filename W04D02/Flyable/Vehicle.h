#ifndef FLYABLE_VEHICLE_H
#define FLYABLE_VEHICLE_H

#include <iostream>

class Vehicle {
public:
    Vehicle();
    virtual void startEngine();
    virtual void checkFuelTank();
    virtual void fillFuelTank(int fuel);
    virtual void engineOff();
protected:
    int _fuelAmount;
};


#endif //FLYABLE_VEHICLE_H
