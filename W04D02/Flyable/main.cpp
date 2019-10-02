#include <iostream>
#include "Borb.h"
Borb bird;

void birdFlyAround();
void birdCare();
int main() {
    std::cout << "Name your bird! (*ovo*)" << std::endl;
    std::string bird;
    std::cin >> bird;
    std::cout << "Would you like to make " << bird << " fly?" << std::endl;
    std::string answer;
    std::cin >> answer;
    if (answer=="YES"||answer=="yes"||answer=="Yes") {
        birdFlyAround();
        birdCare();
    } else if (answer=="NO"||answer=="no"||answer=="No") {
        birdCare();
    }
}

void birdFlyAround(){
    bird.fly();
    std::cout << "Let 'em at it for a few minutes and insert the flight-time: " << std::endl;
    int flymin;
    std::cin >> flymin;
    bird.fly(flymin);
}

void birdCare(){
    bird.getChecked();
    std::cout << "Do you want to give your bird some food, maybe a bit of water?" << std::endl;
    std::string answer;
    std::cin >> answer;
    if (answer=="YES"||answer=="yes"||answer=="Yes") {
        bird.eat();
        bird.drink();
    } else if (answer=="NO"||answer=="no"||answer=="No") {
        std::cout << "C'mon, it clearly deserves it." << std::endl;
    }
}