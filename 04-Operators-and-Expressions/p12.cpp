// 🔥 Problem 12 — Mini DSA Challenge

// Take a three-digit number from the user.

// Print:

// First digit
// Middle digit
// Last digit

// Example:

// Enter number: 583


// First digit: 5
// Middle digit: 8
// Last digit: 3
// Hint

// You will need:

// /
// %

// Think carefully about how you can extract individual digits.


#include <iostream>


int main(){
    int num;
    int first_digit,middle_digit,last_digit;

    std::cout<<"Enter three digits number: ";
    std::cin>>num;

    first_digit =num/100;
    middle_digit = (num-(first_digit*100))/10;
    last_digit = num % 10;

    std::cout<<"\n\nFirst digit: "<<first_digit;
    std::cout<<"\nMiddle digit: "<<middle_digit;
    std::cout<<"\nLast digit: "<<last_digit;
    return 0;
}