// ⚡ Pointer Arithmetic Practice
// Q6 — Move the Pointer
// int arr[5] = {10, 20, 30, 40, 50};

// int* ptr = arr;

// Print:

// *ptr

// Then do:

// ptr++;

// Print *ptr again.

// Expected:

// 10
// 20


#include <iostream>


int main(){
    int arr[5]= {10,20,30,40,50};

    int* ptr = arr;

    std::cout<<"*ptr first time: "<<*ptr;
    ptr++;

    std::cout<<"\n*ptr second time: "<<*ptr;



    return 0;
    
}