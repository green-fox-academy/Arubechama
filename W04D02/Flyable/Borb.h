#ifndef FLYABLE_BORB_H
#define FLYABLE_BORB_H

#include "Flyable.h"
#include "Animal.h"

class Borb : public Animal, public Flyable {
public:
    Borb();
    void land() override;
    void fly(int _minutesInFlight);
    void takeOff() override;
    void fly() override;
    void eat() override;
    void drink() override;
    void activity() override;
    void getTired() override;
    void getChecked();
};


#endif //FLYABLE_BORB_H
