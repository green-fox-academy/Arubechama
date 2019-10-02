#ifndef FLYABLE_ANIMAL_H
#define FLYABLE_ANIMAL_H

#include <iostream>

class Animal {
public:
    Animal();
    Animal(int hunger, int thirst);
    virtual void eat();
    virtual void drink ();
    virtual void activity();
    virtual void getTired();

protected:
    int _hunger;
    int _thirst;
};

#endif //FLYABLE_ANIMAL_H
