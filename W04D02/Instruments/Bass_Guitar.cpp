#include "Bass_Guitar.h"
Bass_Guitar::Bass_Guitar() : Bass_Guitar(4) {}
Bass_Guitar::Bass_Guitar(int numberOfStrings) : _numberOfStrings(numberOfStrings) {}

std::string Bass_Guitar::sound() {
    return "Dumm-Dumm-DUUUUUM";
}

void Bass_Guitar::play() {
    std::cout << "Bass Guitar, a " << _numberOfStrings << "-stringed instrument that goes " << sound() << "!" << std::endl;
}