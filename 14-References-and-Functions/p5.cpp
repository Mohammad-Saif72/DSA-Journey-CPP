// Q5. Swap Two Numbers Using References ⭐

// Write:

// void swapNumbers(int &a, int &b)

// Do the swap manually using a temporary variable.

// Example:

// Before: 10 20
// After: 20 10

// Do not use std::swap().


#include <iostream>

void swap(int &a, int &b){

    int temp = a;
    a=b;
    b=temp;

    std::cout<<"In swap function: a= "<<a<<" b="<<b<<"\n";
}

int main(){

    int a = 5;
    int b =10;

    swap(a,b);

    std::cout<<"In main function: a ="<<a<<" b= "<<b<<"\n";



    return 0;
}