#include "Cohort.h"

Cohort::Cohort(std::string name, std::vector<Student*> students, std::vector<Mentor*> mentors){
    _name = name;
    _students = students;
    _mentors = mentors;
}
void Cohort::addStudent(Student *student){
    _students.push_back(student);
}
void Cohort::addMentor(Mentor *mentor){
    _mentors.push_back(mentor);
}
Cohort::Cohort(std::string name){
    _name = name;
    _students;
    _mentors;
}
void Cohort::info(){
    std::cout << "The " << _name << " cohort has " << _students.size() << " students and " << _mentors.size() << " mentors currently." << std::endl;
}
