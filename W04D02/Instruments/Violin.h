#ifndef INSTRUMENTS_VIOLIN_H
#define INSTRUMENTS_VIOLIN_H

#include "Stringed_Instrument.h"

class Violin : public Stringed_Instrument{
public:
    Violin();
    Violin(int numberOfStrings);
    void play() override;
    std::string sound() override;

protected:
    int _numberOfStrings;
};


#endif //INSTRUMENTS_VIOLIN_H
