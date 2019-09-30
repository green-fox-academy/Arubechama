#include "Sponsor.h"

Sponsor::Sponsor(std::string name, int age, std::string gender, std::string company, int hiredStudents){
    _name = name;
    _age = age;
    _gender = gender;
    _company = company;
    _hiredStudents = hiredStudents;
}
Sponsor::Sponsor(std::string name, int age, std::string gender, std::string company){
    _name = name;
    _age = age;
    _gender = gender;
    _company = company;
    _hiredStudents = 0;
}
Sponsor::Sponsor(){
    Person();
    _company = "Google";
    _hiredStudents = 0;
}
void Sponsor::introduce(){
    std::cout << "Hi! I'm " << _name << " and I'm here to represent " << _company << ". Contrary to popular belief, I'm a " << _age << " years old " << _gender << " specimen of the human species. So far I've hired " << _hiredStudents << " students. Cool, right?" << std::endl;
}
void Sponsor::hire(){
    _hiredStudents++;
}
void Sponsor::getGoal(){
    std::cout << "My goal is to hire brilliant junior developers!" << std::endl;
}
