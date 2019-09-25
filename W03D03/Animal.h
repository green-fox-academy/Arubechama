#ifndef W03D03_ANIMAL_H
#define W03D03_ANIMAL_H
#include <string>
#include <iostream>

//ANIMAL CLASS
class Animal {
public:
    Animal()
    {
        _hunger = 50;
        _thirst = 50;
    }
    void eat() {
        _hunger -= 1;
    }
    void drink () {
        _thirst -=1;
    }
    void play() {
        _hunger += 1;
        _thirst +=1;
    }

private:
    int _hunger;
    int _thirst;
};


#endif //W03D03_ANIMAL_H
