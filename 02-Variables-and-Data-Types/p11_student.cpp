// 🔥 Practice 11 — Student Profile

// This is your main Day 1 + Day 2 challenge.

// Create:
// student.cpp

// Your output should look like:

// ========================================
//            STUDENT PROFILE
// ========================================


// Name       : Saif Ansari
// College    : NIT Srinagar
// Program    : M.Tech
// Branch     : Computer Science
// Semester   : 1
// CGPA       : 7.3


// ----------------------------------------
//           C++ LEARNING
// ----------------------------------------


// Current Day: 2
// Goal: Become proficient in C++


// ========================================




#include <iostream>

//declare variable

std::string Name = "Saif Ansari";
std::string College = "NIT Srinagar";
std::string Program = "M.Tech";
std::string Branch ="CSE";
int semester = 1;
double cgpa = 7.3;


int currentDay = 2;

int main(){

    //design layout
    std::cout<<"=============================================\n";
    std::cout<<"               STUDENT PROFILE\n";
    std::cout<<"=============================================\n";
    std::cout<<"Name: "<<Name<<"\n";
    std::cout<<"College: "<<College<<"\n";
    std::cout<<"Program: "<<Program<<"\n";
    std::cout<<"Branch: "<<Branch<<"\n";
    std::cout<<"semester: "<<semester<<"\n";
    std::cout<<"cgpa: "<<cgpa<<"\n\n";


    std::cout<<"---------------------------------------------\n";
    std::cout<<"                C++ LEARNING\n";
    std::cout<<"---------------------------------------------\n\n";
    std::cout<<"currentDay: "<<currentDay<<"\n";
    std::cout<<"Goal: Become proficient in C++\n\n";
    std::cout<<"=============================================\n";

    return 0;
}