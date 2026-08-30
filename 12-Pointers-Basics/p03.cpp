// Question 3 — Modify Using a Pointer ⭐

// Given:

// int number = 100;

// Create a pointer pointing to number.

// Then use the pointer to change:

// 100 → 500

// Finally print number.

// Rule: Change the value using *ptr, not directly using:

// number = 500;

#include <iostream>

int main(){

    int  x = 100;

    int* ptr = &x;

    *ptr = 500;

    std::cout<<"x = "<<x;

    return 0;
}