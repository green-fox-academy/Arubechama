#include "Animal.h"

Animal::Animal() : Animal(50, 50){}
Animal::Animal(int hunger, int thirst) : _hunger(hunger), _thirst(thirst){}
void Animal::eat() {
    _hunger -= 1;
}
void Animal::drink () {
    _thirst -=1;
}
void Animal::getTired(){
    if (_hunger>60||_thirst>60) {
        std::cout << "Your creature is tired. Let them rest." << std::endl;
    }
}
void Animal::activity() {
    _hunger += 1;
    _thirst +=1;
    getTired();
}

