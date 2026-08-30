// Practice 7 — Student information

// Create variables for:

// Name
// College
// Program
// Branch
// Semester
// CGPA

// Then display them.

// Expected format:

// Name: ...
// College: NIT Srinagar
// Program: M.Tech
// Branch: ...
// Semester: ...
// CGPA: ...


#include <iostream>
// #include <string>  //without string header program will run

// making variale global 
std::string Name = "Mohammad Saif Ahamad";
std::string College = "NIT Srinagar";
std::string Program = "M.Tech";
std::string Branch = "CSE";
std::string Semester = "First";
int cgpa = 7.3; 
int main(){
std::cout<<"Name: "<<Name << "\n";
std::cout<<"College: "<<College<<"\n";
std::cout<<"Program: "<<Program<<"\n";
std::cout<<"Branch: "<<Branch<<"\n";
std::cout<<"Semester: "<<Semester<<"\n";
std::cout<<"cgpa: "<<cgpa<<"\n";
    return 0;
}