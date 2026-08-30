// // A reference gives another name to the same variable.

// Q1 — Basic Reference
// int x = 25;

// Create a reference called ref.

// Print both:

// x
// ref


#include<iostream>

int main(){

    int x =25;
    int& ref = x;

    std::cout<<"x = "<<x;
    std::cout<<"\nref = "<<ref;
    return 0;
}