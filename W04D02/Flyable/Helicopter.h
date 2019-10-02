#ifndef FLYABLE_HELICOPTER_H
#define FLYABLE_HELICOPTER_H

#include "Flyable.h"
#include "Vehicle.h"

class Helicopter : public Vehicle, public Flyable{
public:
    Helicopter();
    void land() override ;
    void fly() override ;
    void takeOff() override ;
    void startEngine() override;
    void checkFuelTank() override;
    void fillFuelTank(int fuel) override;
    void engineOff() override;
};


#endif //FLYABLE_HELICOPTER_H
