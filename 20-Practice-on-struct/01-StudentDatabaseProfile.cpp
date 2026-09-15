// Q1 — Student Database Profile ⭐⭐⭐

// Build the exact practical problem from your roadmap.

// Create:

// struct Student {
//     std::string name;
//     int rollNumber;
//     double cgpa;
// };

// Then:

// Create a collection of 3 students.
// Take all student information through user input.
// Store the information.
// Find the student with the highest CGPA.
// Print the complete student:
// Name
// Roll number
// CGPA
// Example

// Input:

// Student 1:
// Saif 101 8.2

// Student 2:
// Rahul 102 9.1

// Student 3:
// Aman 103 8.7

// Output:

// Highest CGPA Student:
// Name: Rahul
// Roll Number: 102
// CGPA: 9.1
// Requirements

// Don't use:

// sort()
// max_element()

// Do the comparison yourself.

// Also decide whether your function should:

// return Student;

// or:

// return int index;

// and be prepared to explain why.



#include<iostream>
#include<string>
#include<vector>


struct Student {
    std::string name;
    int rollNumber;
    double cgpa;
};

int studentHighestCGPA( const Student arr[],int size){
    double maxCGPA = arr[0].cgpa;
    int index = 0;
    for(int i=1;i<size;i++){
        if(arr[i].cgpa>maxCGPA){
            maxCGPA = arr[i].cgpa;
            index = i;
        }
    }

    return index;
}


int main(){

    Student arr[3];
    for(int i=0;i<3;i++){
        std::cout<<"Student: "<<i+1<<"\n";
        std::cin>>arr[i].name>>arr[i].rollNumber>>arr[i].cgpa;
    }

    int index = studentHighestCGPA(arr,3);

    std::cout<<"Student name: "<<arr[index].name
    <<"\nRoll Number :  "<<arr[index].rollNumber
    <<"\nCGPA:  "<<arr[index].cgpa;


    return 0;
}