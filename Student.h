#ifndef STUDENT_H
#define STUDENT_H
#include <string>
class Student
{
private:
    std::string name_;
    std::string surname_;
    std::string addres_;
    int indexNumber_;
    long pesel_;
    std::string gender_;

public:
    // constructors

    Student();
    Student(std::string name, std::string surname, std::string addres, int indexNum, long pesel, std::string gender);
    // setters
    void setName(std::string);
    // getters
    void getAllInfo();
    //void addStudent();
};

#endif // STUDENT_H