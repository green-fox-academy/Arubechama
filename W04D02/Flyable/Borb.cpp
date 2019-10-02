#include "Borb.h"

Borb::Borb() : Animal(10, 10){}
void Borb::fly(){
    std::cout << "Knees weak, arms heavy - your birb looks flight ready." << std::endl;
}
void Borb::land(){
    std::cout << "The little bird landed on the branch gracefully. Maybe it's tired and needs to relax." << std::endl;
}
void Borb::getTired(){
    if (_hunger>60||_thirst>60) {
        std::cout << "Your bird is tired. Let them rest." << std::endl;
        land();
    }
}
void Borb::takeOff(){
    std::cout << "Taking off" << std::endl;
}
void Borb::activity(){
    _hunger++;
    _thirst++;
}
void Borb::fly(int _minutesInFlight){
    takeOff();
    std::cout << "The little bird is sailing across the sky and chirps happily as it enjoys the freedom of flight." << std::endl;
    for (int i = 0; i < _minutesInFlight; ++i) {
        activity();
    }
    if (_minutesInFlight > 60) {
        getTired();
    }
}
void Borb::eat(){
    std::cout << "Feed that B O R B! Give them seeds: " << std::endl;
    int seeds;
    std::cin >> seeds;
    _hunger -= seeds;
    std::cout << "Current hunger level: " << _hunger << std::endl;
}
void Borb::drink(){
    std::cout << "If the B O R B is parched, give them a few small cups of water: " << std::endl;
    int cuppies;
    std::cin >> cuppies;
    _thirst -= cuppies;
    std::cout << "Current thirst level: " << _thirst << std::endl;
}
void Borb::getChecked() {
    std::cout << "Would you like to check on your bird?\n";
    std::cout << "Type in YES or NO" << std::endl;
    std::string answer;
    std::cin >> answer;
    if (answer=="YES"||answer=="yes"||answer=="Yes") {
        std::cout << "Checking on birb.." << std::endl;
        if (_hunger>50&&_thirst>50) {
            std::cout << "Your bird needs food and water." << std::endl;
        } else if (_thirst>50) {
            std::cout << "Your bird is thirsty" << std::endl;
        } else if (_hunger>50) {
            std::cout << "Your bird is hungry." << std::endl;
        } else {
            std::cout << "Your bird is fine." << std::endl;
        }
    }
}
