#include <iostream>
#include "Violin.h"
#include "Bass_Guitar.h"
#include "Electric_Guitar.h"

int main( int argc, char* args[] )
{

    std::cout << "Test 1, create Electric Guitar, Bass Guitar and Violin with default strings." << std::endl;
    Electric_Guitar guitar;
    Bass_Guitar bassGuitar;
    Violin violin;

    std::cout<< "Test 1 Play" << std::endl;
    guitar.play();
    bassGuitar.play();
    violin.play();

    std::cout << "Test 2, create Electric Guitar, Bass Guitar with 7 and 5 strings ." << std::endl;
    Electric_Guitar guitar2(7);
    Bass_Guitar bassGuitar2(5);

    std::cout << "Test 2 Play" << std::endl;
    guitar2.play();
    bassGuitar2.play();
}