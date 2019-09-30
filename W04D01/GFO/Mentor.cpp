#include "Mentor.h"

Mentor::Mentor(std::string name, int age, std::string gender, std::string level) {
    _name = name;
    _age = age;
    _gender = gender;
    _level = level;
}
Mentor::Mentor() {
    Person();
    _level = "intermediate";
}
void Mentor::getGoal() {
    std::cout << "My goal is to educate brilliant junior developers." << std::endl;
}
void Mentor::introduce() {
    std::cout << "Good day to you! My name is " << _name << " and I am a(n) " << _level << " mentor. I am a single " << _age << " year old " << _gender << " ready to mingle ;)" << std::endl;
}
