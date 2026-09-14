// Write:

// int countStudentsAboveCGPA(
//     const std::vector<Student>& students,
//     double targetCGPA
// );

// Return how many students have:

// cgpa > targetCGPA

// Do not modify the vector.

// Choose the correct parameter type yourself.

#include<iostream>
#include<string>
#include<vector>


struct Student{
    std::string name;
    int rollNumber;
    double cgpa;
};

int countStudentsAboveCGPA(
    const std::vector<Student>& students,
    double targetCGPA
){
    int count = 0;
    for(int i=0;i<students.size();i++){
        if(students[i].cgpa>targetCGPA){
            count++;
        }
    }

    return count;
};


int main(){


    std::vector<Student> S_Data= {
        {"Saif",19,7.3},
        {"abc",20,7.2},
        {"def",21,7.1},
        {"ghi",22,7.0},
        {"jkl",23,6.9},
    };

    int res = countStudentsAboveCGPA(S_Data,7.1);

    std::cout<<"Student Above 7.1: "<<res;


    return 0;
}

