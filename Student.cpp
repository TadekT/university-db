#include "Student.h"
#include <string>
#include <algorithm>
#include <iostream>

// constructors
Student::Student()
    : indexNumber_(-1)
{
    std::cout << "Error , need more data\n\n";
};

Student::Student(
    std::string n, std::string sn, std::string a, int in, int p, std::string g)
    : name_(n), surname_(sn), addres_(a), indexNumber_(in), personalID_(p), gender_(g){};

// setters
void Student::setName(std::string n)
{
    name_ = n;
}

// getters
void Student::getAllInfo()
{
    std::cout << "Name : " << name_ << "\n"
              << "Surname : " << surname_ << "\n"
              << "Addres : " << addres_ << "\n"
              << "Index Number : " << indexNumber_ << "\n"
              << "Pesel : " << personalID_ << "\n"
              << "Gender : " << gender_ << "\n";
}

auto Student::schareBySurname( std::vector<Student>& studnetVector, std::string schareStudent){

    auto result = std::find(studnetVector.begin(),studnetVector.end(),schareStudent);
    (result != studnetVector.end())
        ? return result : std::cout<<"No studnet"<<schareStudent<< "in database";      

}