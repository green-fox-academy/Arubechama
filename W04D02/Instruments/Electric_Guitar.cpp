#include "Electric_Guitar.h"
Electric_Guitar::Electric_Guitar() : Electric_Guitar(6){}
Electric_Guitar::Electric_Guitar(int numberOfStrings) : _numberOfStrings(numberOfStrings) {}

std::string Electric_Guitar::sound() {
    return "Twang";
}

void Electric_Guitar::play() {
    std::cout << "Bass Guitar, a " << _numberOfStrings << "-stringed instrument that goes " << sound() << "!" << std::endl;
}