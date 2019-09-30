#include "Person.h"
Person::Person(std::string name, int age, std::string gender): _name(name), _age(age), _gender(gender) {
    _name = name;
    _age = age;
    _gender = gender;
}
Person::Person() {
    _name = "Jane Doe";
    _age = 30;
    _gender = "female";
}
void Person::getGoal() {
    std::cout << "My goal is to CARPE DIEM" << std::endl;
}
void Person::introduce() {
    std::cout << "Hey there! My name is " << _name << " and I am " << _age << " years old. I am a " << _gender << " specimen from the human species." << std::endl;
}