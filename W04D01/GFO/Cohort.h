#ifndef GFO_COHORT_H
#define GFO_COHORT_H

#include "Student.h"
#include "Mentor.h"

class Cohort {
public:
    Cohort(std::string name, std::vector<Student*> Students, std::vector<Mentor*> Mentors);
    Cohort(std::string name);
    void addStudent(Student*);
    void addMentor(Mentor*);
    void info();

protected:
    std::string _name;
    std::vector<Student*> _students;
    std::vector<Mentor*> _mentors;
};


#endif //GFO_COHORT_H
