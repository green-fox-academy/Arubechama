#ifndef GFO_SPONSOR_H
#define GFO_SPONSOR_H

#include "Person.h"

class Sponsor : public Person {
public:
    Sponsor(std::string name, int age, std::string gender, std::string company, int hiredStudents);
    Sponsor(std::string name, int age, std::string gender, std::string company);
    Sponsor();
    void introduce();
    void hire();
    void getGoal();
private:
    std::string _company;
    int _hiredStudents;
};

#endif //GFO_SPONSOR_H
