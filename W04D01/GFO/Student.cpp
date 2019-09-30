#include "Student.h"

Student::Student(std::string name, int age, std::string gender, std::string previousOrganization, int skippedDays): Person(name, age, gender), _previousOrganization(previousOrganization), _skipDays(skippedDays) {
}
Student::Student(std::string name, int age, std::string gender, std::string previousOrganization) {
    _name = name;
    _age = age;
    _gender = gender;
    _previousOrganization = previousOrganization;
    _skipDays = 0;
}
Student::Student() {
    _skipDays = 0;
}
void Student::getGoal() {
    std::cout << "My goal is to be a junior software developer" << std::endl;
}
void Student::introduce() {
    std::cout << "Hey there! My name is " << _name << " and I am a " << _age << " years old student from " << _previousOrganization << ". I skipped " << _skipDays << " days." << std::endl;
}
void Student::skipDays(int numberofdays) {
    _skipDays += numberofdays;
}