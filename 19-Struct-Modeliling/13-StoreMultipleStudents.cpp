// 🟠 Level 3 — Arrays / Vectors of Structs
// Q13. Store Multiple Students

// Create:

// struct Student {
//     std::string name;
//     int rollNumber;
//     double cgpa;
// };

// Create a:

// std::vector<Student>

// with at least 5 students.

// Print every student's information.


#include <iostream>
#include <string>
#include <vector>

struct Student{
    std::string name;
    int rollNumber;
    double cgpa;
};


void printAll_Student(const std::vector<Student>& Student_Data){


        for(int i=0;i<Student_Data.size();i++){
        std::cout<<"Name: "<<Student_Data[i].name
        <<"  Roll No: "<<Student_Data[i].rollNumber
        <<"  CGPA: "<<Student_Data[i].cgpa
        <<"\n";
    }


}


int main(){

    std::vector<Student> S_Data= {
        {"Saif",19,7.3},
        {"abc",20,7.2},
        {"def",21,7.1},
        {"ghi",22,7.0},
        {"jkl",23,6.9},
    };

    // for(int i=0;i<S_Data.size();i++){
    //     std::cout<<"Name: "<<S_Data[i].name
    //     <<"  Roll No: "<<S_Data[i].rollNumber
    //     <<"  CGPA: "<<S_Data[i].cgpa
    //     <<"\n";
    // }
    



    printAll_Student(S_Data);

    return 0;
}