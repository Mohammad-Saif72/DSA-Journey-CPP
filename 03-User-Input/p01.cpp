// 🟢 Practice 1 — Your First Input

// Write a program that:

// Creates an integer variable called age
// Asks the user to enter their age
// Takes the input
// Prints the age

// Expected interaction:

// Enter your age: 24
// Your age is: 24

#include<iostream>

int main(){

    int age;

    // std::cout<<"Enter their age : "<<std::endl;
    std::cout<<"Enter their age : ";
    std::cin>>age;

    std::cout<<"your age is :"<<age;
    return 0 ;
}