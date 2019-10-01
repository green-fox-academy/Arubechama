#ifndef INSTRUMENTS_BASS_GUITAR_H
#define INSTRUMENTS_BASS_GUITAR_H

#include "Stringed_Instrument.h"

class Bass_Guitar : public Stringed_Instrument {
public:
    Bass_Guitar();
    Bass_Guitar(int numberOfStrings);
    void play() override;
    std::string sound() override;

protected:
    int _numberOfStrings;
};


#endif //INSTRUMENTS_BASS_GUITAR_H
