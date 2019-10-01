#ifndef INSTRUMENTS_STRINGED_INSTRUMENT_H
#define INSTRUMENTS_STRINGED_INSTRUMENT_H

#include <iostream>
#include <vector>
#include <string>

#include "Instrument.h"

class Stringed_Instrument : public Instrument {
public:
    virtual std::string sound(){
        std::cout << "Sounds good!" << std::endl;
    }

protected:
    int _numberOfStrings;
    std::string _sound;
};


#endif //INSTRUMENTS_STRINGED_INSTRUMENT_H
