#ifndef GFO_STUDENT_H
#define GFO_STUDENT_H

#include <iostream>
#include <vector>
#include "Person.h"

class Student : public Person
{
public:
    Student(std::string name, int age, std::string gender, std::string previousOrganization, int skippedDays);
    Student(std::string name, int age, std::string gender, std::string previousOrganization);
    Student();
    void getGoal();
    void introduce();
    void skipDays(int numberofdays);

private:
    std::string _previousOrganization;
    int _skipDays;
};

#endif //GFO_STUDENT_H
