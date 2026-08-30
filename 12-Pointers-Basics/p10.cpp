// Question 10 — Pointer Update Challenge ⭐⭐

// Given:

// int a = 10;
// int b = 20;

// int* ptr = &a;

// Your task:

// Use ptr to change a to 100.
// Make ptr point to b.
// Use ptr to change b to 200.

// Final output should be:

// a = 100
// b = 200

// This will test whether you understand the difference between:

// ptr

// and:

// *ptr




#include <iostream>

int main(){

    int a = 10;
    int b = 20;

    int* ptr1 = &a;
    int* ptr2 = &b;

    *ptr1 = 100;
    *ptr2 = 200;

    std::cout<<"a = "<<*ptr1;
    std::cout<<"\nb = "<<*ptr2;


    return 0;
}