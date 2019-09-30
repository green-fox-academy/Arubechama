#ifndef GFO_PERSON_H
#define GFO_PERSON_H

#include <iostream>
#include <vector>

//PERSON CLASS
class Person
{
public:
    Person(std::string name, int age, std::string gender);
    Person();
    virtual void getGoal();
    virtual void introduce();
protected:
    std::string _name;
    int _age;
    std::string _gender;
};

#endif //GFO_PERSON_H
