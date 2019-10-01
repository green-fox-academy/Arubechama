#include "Violin.h"

Violin::Violin() : Violin(4) {}
Violin::Violin(int numberOfStrings) : _numberOfStrings(numberOfStrings){}

std::string Violin::sound() {
    return "S C R E E C H";
}

void Violin::play() {
    sound();
    std::cout << "Violin, a " << _numberOfStrings << "-stringed instrument that goes " << sound() << "!" << std::endl;
}