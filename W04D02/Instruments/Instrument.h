#ifndef INSTRUMENTS_INSTRUMENT_H
#define INSTRUMENTS_INSTRUMENT_H

#include <iostream>
#include <vector>
#include <string>

class Instrument {
public:
    virtual void play(){
        std::cout << "How does one play this kind of instrument?" << std::endl;
    }
protected:
    std::string _name;
};


#endif //INSTRUMENTS_INSTRUMENT_H
