#include <iostream>
#include <vector>

//TAKING NOTES - INHERITANCE

//MAKING A BASE CLASS
class Person
{
public:
    Person(std::string name, int age): _name(name), _age(age){}
    //tying a class to private string and integer

private:
    std::string _name;
    int _age;
};
//MAKING THE DERIVED
class Student : public Person //specifying the parent class
{
public:
    Student(std::string name, int age, std::string classroom): Person(name, age), _classroom(classroom) {}
    //taking values from parent class and adding new ones

private:
    std::string _classroom;
};

//USING CLASSES
int main()
{
    std::vector<Person*> people; //creating a vector to store all class values - using pointers to avoid object slicing

    Person Bonnie("Bonnie",24); //person only has 2 values
    Student Clyde("Clyde", 16, "Bandit Class"); //student has a classroom value

    people.push_back(&Bonnie);
    people.push_back(&Clyde); //pushing back all the data thanks to the pointer
}