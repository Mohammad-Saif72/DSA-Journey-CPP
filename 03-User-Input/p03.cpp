// 🟢 Practice 3 — Student Information

// Create variables for:

// name
// age
// semester
// cgpa

// Ask the user for each value.

// Expected interaction:

// Enter your name: Saif
// Enter your age: 24
// Enter your semester: 1
// Enter your CGPA: 7.3

// Then:

// ===== STUDENT INFORMATION =====
// Name: Saif
// Age: 24
// Semester: 1
// CGPA: 7.3
// ===============================

#include <iostream>
#include <string>

int main(){

    std::string name;
    int age;
    int semster;
    double cgpa;

    std::cout<<"Enter your name: ";
    std::cin>>name;

    std::cout<<"Enter your age: ";
    std::cin>>age;

    std::cout<<"Enter your semester: ";
    std::cin>>semster;

    std::cout<<"Enter your cgpa: ";
    std::cin>>cgpa;

    std::cout<<"======== Students information ==========\n";
    std::cout<<"Name: "<<name<<"\n";
    std::cout<<"Age: "<<age<<"\n";
    std::cout<<"Semester: "<<semster<<"\n";
    std::cout<<"CGPA: "<<cgpa<<"\n";
    std::cout<<"========================================";

    return 0;
}