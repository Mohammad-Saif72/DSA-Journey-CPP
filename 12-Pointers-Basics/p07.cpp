// Question 7 — Modify User Input ⭐

// Take an integer from the user.

// Create a pointer to it.

// Using only the pointer, increase the value by 10.

// Example:

// Input: 25
// Output: 35

// Hint:

// *ptr = *ptr + 10;






#include<iostream>

int main (){


    int x;
    std::cout<<"Enter the number: ";
    std::cin>>x;

    int*ptr = &x;

    *ptr = *ptr+10;

    std::cout<<"Value using variable: "<<x;
    std::cout<<"\nValue using pointer: "<<*ptr;

    return 0;
}