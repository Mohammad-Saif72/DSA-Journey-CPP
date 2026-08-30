// 🏆 Day 12 Mini Challenge
// Swap Two Numbers Using Pointers

// You are given:

// int a = 10;
// int b = 20;

// Create two pointers:

// int* ptr1 = &a;
// int* ptr2 = &b;

// Using the pointers, swap the values.

// Expected output:

// Before:
// a = 10
// b = 20

// After:
// a = 20
// b = 10

// Use a temporary variable if needed.

// This directly prepares you for the roadmap's pointer-based swapping practice.


#include <iostream>

int main (){

    int a = 10;
    int b = 20;

    int* ptr1 = &a;
    int* ptr2 = &b;

    *ptr1 = *ptr1+*ptr2;
    *ptr2 = *ptr1 -*ptr2;
    *ptr1 = *ptr1-*ptr2;

    std::cout<<"After Swapping: \n"<<"a = "<< *ptr1
    <<"\nb = "<<*ptr2;







    return 0;
}