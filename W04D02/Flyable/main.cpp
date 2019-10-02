#include <iostream>
#include "Borb.h"
#include "Helicopter.h"
Borb bird;
Helicopter Hellie;

void birdFlyAround();
void birdCare();
void testFlight();
int main() {
    std::cout << "Pick your flyable. You may choose from: \n";
    std::cout << "BIRD / HELLIE" << std::endl;
    std::string pick;
    std::cin >> pick;
    if (pick == "BIRD") {
        std::cout << "Name your bird! (*ovo*)" << std::endl;
        std::string bird;
        std::cin >> bird;
        std::cout << "Would you like to make " << bird << " fly?" << std::endl;
        std::string answer;
        std::cin >> answer;
        if (answer == "YES" || answer == "yes" || answer == "Yes") {
            birdFlyAround();
            birdCare();
        } else if (answer == "NO" || answer == "no" || answer == "No") {
            birdCare();
        }
    } else if (pick == "HELLIE") {
        testFlight();
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


void testFlight(){
    Hellie.checkFuelTank();
    std::cout << "Do you want to fill the tank?" << std::endl;
    std::string answer;
    std::cin >> answer;
    if (answer=="YES"||answer=="yes"||answer=="Yes") {
        std::cout << "Enter fuel amount: " << std::endl;
        int fuel;
        std::cin >> fuel;
        Hellie.fillFuelTank(fuel);
    }
    std::cout << "Would you like to take off?" << std::endl;
    std::string answer2;
    std::cin >> answer2;
    if (answer2=="YES"||answer2=="yes"||answer2=="Yes") {
        Hellie.startEngine();
        Hellie.takeOff();
        Hellie.fly();
    }
}