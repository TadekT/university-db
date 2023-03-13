
// Student
// name
// surname
// adress
// index number
// PESEL
// Gender


#ifndef STUDENT_H
#define STUDENT_H

#include <string>
class Student{
    private:
    std::string name_;
    std::string surname_;
    std::string addres_;
    int indexNumber_;
    int pesel_;
    std::string gender_;

    public:
    //constructors

        Student();
        Student(std::string,std::string,std::string,int,int,std::string);
    //setters
        void setName(std::string);
    //getters
        void getAllInfo();
};








#endif // STUDENT_H