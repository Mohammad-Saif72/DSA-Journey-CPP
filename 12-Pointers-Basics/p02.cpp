// Question 2 — Create Your First Pointer

// Given:

// int x = 50;

// Create a pointer called ptr that stores the address of x.

// Print:

// x
// &x
// ptr
// *ptr

// Try to understand why the output behaves that way.

#include<iostream>

int main(){
    
    int x = 50;

    int* ptr = &x;

    std::cout<<"X = "<<x;
    std::cout<<"\n&x = "<<&x;
    std::cout<<"\nptr = "<<ptr;
    std::cout<<"\n*ptr = "<<*ptr;
    


    return 0;
}