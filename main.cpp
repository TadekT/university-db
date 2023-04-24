#include "Student.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main(){
    int a = 0;
    a+=2;
    std::vector<Student> students{};
    Student hary_("harry","Pitter","Student",2,94122,"Male");    
    
    students.push_back(hary_);
    
    std::cout<<"\nChoose a option\n1.Add Student\n";
    int choice;
    std::cin>>choice;
    while (choice !=0 )
    {
           //create a switch for mani menu 
           //1 add student function only for fill a student constructor
    }
    

    
    return 0;
}
