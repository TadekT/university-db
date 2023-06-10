#include "Student.h"
#include <string>
#include <algorithm>
#include <iostream>

// constructors
Student::Student()
    : indexNumber_(0)
{
    std::cout << "Error , need more data\n\n";
}

Student::Student
    (std::string name, std::string surname, std::string adress, int indexNumber, int personalID, std::string gander)
    : name_(name), surname_(surname), addres_(surname), indexNumber_(indexNumber), personalID_(personalID), gender_(gander) {}

// setters
void Student::setName(std::string n)
{
    name_ = n;
}
void Student::getAllInfo(){std::cout<<"My name is : "<<name_<<"\n"; };
// getters

