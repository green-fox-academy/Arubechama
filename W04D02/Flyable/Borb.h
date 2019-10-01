#ifndef FLYABLE_BORB_H
#define FLYABLE_BORB_H


class Borb {
public:
    void land() = 0;
    void fly() = 0;
    void eat();
    void drink ();
    void activity();
    void getTired();
};


#endif //FLYABLE_BORB_H
