// Q20. Student Search System

// Each student has:

// name
// rollNumber
// cgpa

// Design a simple system with these functions:

// findStudentByRoll()
// updateStudentCGPA()
// printStudent()

// For each function, decide:

// value?
// reference?
// const reference?

// Write the functions.

// Your focus is not syntax.

// Your focus is:

// Why does each function receive its parameter in that particular way?

#include <iostream>
#include <string>
#include <vector>

struct Student
{
    std::string name;
    int rollNumber;
    double cgpa;
};

int findStudentByRoll(const std::vector<Student> &Student_data, int rollNumber)
{
    for (int i = 0; i < Student_data.size(); i++)
    {

        if (Student_data[i].rollNumber == rollNumber)
        {
            return i;
        }
    }

    return -1;
};

void updateStudentCGPA(std::vector<Student> &students, int index, double cgpa)
{
    students[index].cgpa = cgpa;
};

void printStudent(const std::vector<Student> &students, int index)
{

    std::cout << "Student at roll :  22 is: " << students[index].name
              << "   Cgpa = " << students[index].cgpa;
}

int main()
{

    std::vector<Student> S_Data = {
        {"Saif", 19, 7.3},
        {"abc", 20, 7.2},
        {"def", 21, 7.1},
        {"ghi", 22, 7.0},
        {"jkl", 23, 6.9},
    };

    int index = findStudentByRoll(S_Data, 50);
    if(index != -1){
    updateStudentCGPA(S_Data, index, 9);
    printStudent(S_Data, index);
    }else{
        std::cout<<"Student Not Found .";
    }


    return 0;
}