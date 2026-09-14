// Q12. Return the Better Student

// Create:

// struct Student {
//     std::string name;
//     double cgpa;
// };

// Write:

// Student betterStudent(
//     const Student& a,
//     const Student& b
// );

// Return the student with the higher CGPA.

// Think carefully about:

// Why parameters are const Student&
// Why the return type is Student


#include<iostream>
#include <string>


struct Student{
    std::string name;
    double cgpa;
};


Student betterStudent(const Student& a1, const Student & a2){
    if(a1.cgpa>a2.cgpa){
        return a1;
    };
    return a2;
}


int main(){
    Student s1 = {"saif",7.3};
    Student s2 = {"asd",7.28};

    Student betterS = betterStudent(s1,s2);


    std::cout<<"Better student: "<<betterS.name;

    return 0;
}
