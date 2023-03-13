#include "Student.h"
#include <string>
#include <algorithm>
#include <iostream>
#include <vector>


int main()
{
    std::vector<Student> studentList{};

    Student marek("Marek","Kowalski","Lesna 8",21
    ,1987415234,"Male");
    
    marek.getAllInfo();

    return 0;
}
