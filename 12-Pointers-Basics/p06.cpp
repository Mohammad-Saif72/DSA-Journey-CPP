// Question 6 — Pointer with User Input

// Take an integer from the user:

// Enter number: 25

// Create a pointer pointing to that variable.

// Then print:

// Value using variable:
// Value using pointer:

// Both values should be the same.

#include<iostream>

int main (){


    int x;
    std::cout<<"Enter the number: ";
    std::cin>>x;

    int*ptr = &x;

    std::cout<<"Value using variable: "<<x;
    std::cout<<"\nValue using pointer: "<<*ptr;

    return 0;
}