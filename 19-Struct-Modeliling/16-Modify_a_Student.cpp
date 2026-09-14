// Q16. Update a Student

// Write:

// bool updateCGPA(
//     std::vector<Student>& students,
//     int rollNumber,
//     double newCGPA
// );

// Requirements:

// Find the student.
// Update the original student's CGPA.
// Return true if updated.
// Return false if the roll number does not exist.

// Important question:

// Why does the vector need &?


#include<iostream>
#include<vector>
#include<string>

struct Student{
    std::string name;
    int rollNumber;
    double cgpa;
};

bool updateCGPA(
    std::vector<Student>& students,
    int rollNumber,
    double newCGPA
){


    for(int i=0;i<students.size();i++){
        if(rollNumber == students[i].rollNumber){
            students[i].cgpa = newCGPA;
            return true;
        }
    }
    return false;
};



int main(){

        std::vector<Student> S_Data = {
        {"Saif", 19, 7.3},
        {"abc", 20, 7.2},
        {"def", 21, 7.7},
        {"ghi", 22, 7.0},
        {"jkl", 23, 6.9},
        {"mohd", 30, 7.6},
    };


    bool status = updateCGPA(S_Data,50,8.0);

    std::cout<<status;





    return 0;
}


