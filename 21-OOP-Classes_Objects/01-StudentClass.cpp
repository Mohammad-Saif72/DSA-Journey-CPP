// 🟢 Level 1 — Class & Object Fundamentals
// Q1. Student Class

// Create a class Student with:

// Data members

// name
// rollNumber
// cgpa

// Requirements

// Create two Student objects.
// Assign different values to each.
// Display their information.

// Example:

// Student 1:
// Name: Saif
// Roll: 101
// CGPA: 8.5

// Student 2:
// Name: Rahul
// Roll: 102
// CGPA: 7.8

// Focus: class, object, data members, multiple objects.



#include<iostream>
#include<string>

class Student{
    public:
    std::string name;
    int rollNumber;
    double cgpa;
};


int main(){
    Student s1 = {"saif",101,8.5};
    Student s2 = {"Rahul",102,7.8};

    std::cout<<"Name: "<<s1.name<<"   Roll no: "<<s1.rollNumber<<"  CGPA: "<<s1.cgpa<<"\n";
    std::cout<<"Name: "<<s2.name<<"   Roll no: "<<s2.rollNumber<<"  CGPA: "<<s2.cgpa<<"\n";

    return 0;
}