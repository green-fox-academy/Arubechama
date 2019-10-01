#ifndef INSTRUMENTS_ELECTRIC_GUITAR_H
#define INSTRUMENTS_ELECTRIC_GUITAR_H

#include "Stringed_Instrument.h"
#include <iostream>
#include <vector>
#include <string>

class Electric_Guitar : public Stringed_Instrument {
public:
    Electric_Guitar();
    Electric_Guitar(int numberOfStrings);
    void play() override;
    std::string sound() override;

protected:
    int _numberOfStrings;
};

#endif //INSTRUMENTS_ELECTRIC_GUITAR_H
