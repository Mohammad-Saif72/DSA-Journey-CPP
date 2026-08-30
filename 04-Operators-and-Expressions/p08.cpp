// Problem 8 — Last Digit

// Take an integer and print its last digit.

// Example:

// Enter number: 12345


// Last digit: 5
// Hint

// Think about:

// number % 10

// This is your first small DSA-style problem.


#include <iostream>


int main(){
    long long int num;
    double lastDigit;
    std::cout<<"Enter no: ";
    std::cin>>num;

    lastDigit = num % 10;

    std::cout<<"Last Digit: "<<lastDigit;

    return 0;
}