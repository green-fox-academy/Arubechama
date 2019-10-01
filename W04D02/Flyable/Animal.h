//
// Created by Csojrók~ on 2019.10.01..
//

#ifndef FLYABLE_ANIMAL_H
#define FLYABLE_ANIMAL_H

#include <iostream>

class Animal {
public:
    Animal();
    Animal(int _hunger, int _thirst);
    void eat();
    void drink ();
    void activity();
    void getTired();

protected:
    int _hunger;
    int _thirst;
};

#endif //FLYABLE_ANIMAL_H
