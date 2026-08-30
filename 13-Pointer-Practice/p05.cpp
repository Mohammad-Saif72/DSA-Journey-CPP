// Q5 — Compare Reference and Pointer ⭐

// Given:

// int x = 50;

// Create:

// int& ref = x;
// int* ptr = &x;

// Then:

// Change x to 100 using ref.
// Change it to 200 using ptr.

// Final output:

// 200



#include <iostream>

int main(){

    int x = 50;

    int& ref = x;
    int* ptr = &x;

    ref = 100;
    std::cout<<"ref = "<<x;

    *ptr = 200;

    std::cout<<"\n*ptr = "<<x;


    
    return 0;
}