#include "Helicopter.h"

Helicopter::Helicopter() : Vehicle(){}

void Helicopter::land(){
    std::cout << "Your helicopter has landed safely. You exit happily - the flight was great today!" << std::endl;
}
void Helicopter::fly(){
    std::cout << "You're sailing across the skies with your hellie, and it feels amazing! Invigorated, you think about how you're the ruler of these cloudy lands." << std::endl;
    if (_fuelAmount<=0) {
        std::cout << "You didn't fill the fuel tank, and now you're falling down. What do you do?" << std::endl;
        std::cout << "PRAY TO RNGESUS / DIE WITH HONOR / DIE A PITIFUL AND MEANINGLESS DEATH" << std::endl;
        std::string answer;
        std::cin >> answer;
        if (answer == "PRAY TO RNGESUS") {
            std::cout << "You were lucky! Somehow you didn't die.. but don't forget the fuel next time!" << std::endl;
        } else if (answer == "DIE WITH HONOR") {
            std::cout << "You take out your katana to perform harakiri. You died. But with honor." << std::endl;
        } else {
            std::cout << "YOU DIED" << std::endl;
        }
    } else {
        std::cout << "Would you like to land?" << std::endl;
        std::string answer;
        std::cin >> answer;
        if (answer=="YES"||answer=="yes"||answer=="Yes") {
            land();
            engineOff();
        }
    }
}
void Helicopter::takeOff(){
    std::cout << "Your helicopter is ready to fly - and does so." << std::endl;
    std::cout << "Insert flight time: " << std::endl;
    int inFlight;
    std::cin >> inFlight;
    _fuelAmount-=inFlight;
}
void Helicopter::startEngine(){
    std::cout << "You started the engine. Great! One step closer to flying!" << std::endl;
}
void Helicopter::checkFuelTank(){
    std::cout << "Checking the fuel tank of your helicopter.." << std::endl;
    if (10 < _fuelAmount && _fuelAmount < 30) {
        std::cout << "No need to fill the tank yet. Fuel level is optimal." << std::endl;
    } else if (0 < _fuelAmount && _fuelAmount < 10) {
        std::cout << "Running low!" << std::endl;
    } else if (_fuelAmount==0) {
        std::cout << "The tank is empty." << std::endl;
    } else {
        std::cout << "Tank is full! Ready to go." << std::endl;
    }
}
void Helicopter::fillFuelTank(int fuel){
    _fuelAmount+=fuel;
    checkFuelTank();
}
void Helicopter::engineOff(){
    std::cout << "The engine is off. If you're still in flight, you might want to turn it back on." << std::endl;
}