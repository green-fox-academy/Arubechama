#include "Vehicle.h"
void Vehicle::startEngine(){
    std::cout << "Your engine is up and running. The smooth purring sound soothes your nerves." << std::endl;
}
void Vehicle::checkFuelTank(){
    std::cout << "Checking fuel tank.." << std::endl;
    if (10 < _fuelAmount < 30) {
        std::cout << "No need to fill the tank yet. Fuel level is optimal." << std::endl;
    } else if (0 < _fuelAmount < 10) {
        std::cout << "Running low!" << std::endl;
    } else if (_fuelAmount==0) {
        std::cout << "Tank is empty." << std::endl;
    } else {
        std::cout << "Tank is full! Ready to go." << std::endl;
    }
}
void Vehicle::fillFuelTank(int fuel){
    _fuelAmount+=fuel;
    checkFuelTank();
}
void Vehicle::engineOff(){
    std::cout << "The engine is off. Hopefully it's intentional." << std::endl;
}