// 🔥 Practice 10 — Mini Calculator

// Make a calculator that asks:

// Enter first number:
// Enter second number:

// and outputs:

// ========== CALCULATOR ==========


// Addition       :
// Subtraction    :
// Multiplication :
// Division       :


// ================================
// Extra challenge

// Try to make the output look professional using the formatting skills you learned on Day 1.



#include <iostream>

int main(){
    //define variable
    double num1,num2;

    //take input from user
    std::cout<<"Enter first number: ";
    std::cin>>num1;

    std::cout<<"Enter second number:";
    std::cin>>num2;

    std::cout<<"========== CALCULATOR ==========\n";
    std::cout<<"Addition       :"<<num1+num2<<"\n";
    std::cout<<"Subtraction    :"<<num1-num2<<"\n";
    std::cout<<"Multiplication :"<<num1*num2<<"\n";
    std::cout<<"Division       :"<<num1/num2<<"\n";
    std::cout<<"================================";
    return 0;
}