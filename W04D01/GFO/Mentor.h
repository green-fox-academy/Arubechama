#ifndef GFO_MENTOR_H
#define GFO_MENTOR_H

#include <iostream>
#include "Person.h"

class Mentor : public Person
{
public:
    Mentor(std::string name, int age, std::string gender, std::string level);
    Mentor();
    void getGoal();
    void introduce();
private:
    std::string _level;
};


#endif //GFO_MENTOR_H
