// Problem 1 — Sum

// Take two integers from the user and print their sum.

// Example:

// Enter two numbers: 10 20


// Sum: 30


#include <iostream>

int main(){
    int num1,num2;

    std::cout<<"Eenter two numbers: ";
    std::cin>>num1>>num2;

    int sum = num1+num2;
    std::cout<<"\nSum: "<<sum;
    return 0;
}