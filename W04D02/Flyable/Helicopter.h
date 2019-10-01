#ifndef FLYABLE_HELICOPTER_H
#define FLYABLE_HELICOPTER_H


class Helicopter {
public:
    void land() = 0;
    void fly() = 0;
    void takeOff() = 0;
    void startEngine() override;
    void checkFuelTank() override;
    void fillFuelTank(int fuel) override;
    void engineOff() override;
};


#endif //FLYABLE_HELICOPTER_H
