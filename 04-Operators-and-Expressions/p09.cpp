// Problem 9 — Remove Last Digit

// Take an integer and remove its last digit.

// Example:

// Enter number: 12345


// Result: 1234
// Hint

// Think about integer division:

// number / 10


#include <iostream>

int main(){
    int num;
    std::cout<<"Enter num: ";
    std::cin>> num;

    int result = num/10;

    std::cout<<"Result: "<<result;
    return 0;
}