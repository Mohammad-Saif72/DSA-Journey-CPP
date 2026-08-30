// Problem 3 — Remainder

// Take two integers and print their remainder.

// Example:

// Enter two numbers: 17 5


// Remainder: 2


#include <iostream>

int main(){

    int num1,num2;
    std::cout<<"Enter two number: ";
    std::cin>>num1>>num2;

    int remender = num1%num2;
    std::cout<<"Remender: "<<remender;
    return 0;
}