// Q2 — Modify Using Reference ⭐
// int number = 100;

// Create a reference called ref.

// Using ref, change the value to:

// 500

// Then print number.

// Rule: Do not directly write:

// number = 500;

#include<iostream>

int main(){

    int x =100;
    int& ref = x;

    ref = 500;

    std::cout<<"Number: "<<x;


    return 0;

}