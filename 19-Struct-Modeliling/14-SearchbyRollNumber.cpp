// Q14. Search by Roll Number

// Write:

// int findStudentByRoll(
//     const std::vector<Student>& students,
//     int targetRoll
// );

// Return:

// index if found
// -1 otherwise

// Do not use built-in searching algorithms.

#include <iostream>
#include <string>
#include <vector>


struct Student {
    std::string name;
    int rollNumber ;
    double cgpa;
};

int findStudentbyRoll(const std::vector<Student>& Student_Data,int rollNumberTarget){
    for(int i=0;i<Student_Data.size();i++){
        if(Student_Data[i].rollNumber==rollNumberTarget){
            return i;
        };
    }

    return -1;
}

int main(){

        std::vector<Student> S_Data= {
        {"Saif",19,7.3},
        {"abc",20,7.2},
        {"def",21,7.1},
        {"ghi",22,7.0},
        {"jkl",23,6.9},
    };



    int index = findStudentbyRoll(S_Data,22);

    std::cout<<"Found at: "<<index;

    return 0;
}
