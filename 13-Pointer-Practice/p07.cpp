// Q7 — Access Using ptr + index

// Given:

// int arr[5] = {5, 10, 15, 20, 25};

// int* ptr = arr;

// Print:

// First element using pointer
// Third element using pointer arithmetic
// Fifth element using pointer arithmetic

// Use:

// *(ptr + index)



#include <iostream>

int main(){

    int arr[5] = {5,10,15,20,25};

    int* ptr  = arr;

    //printitng first element: 
    std::cout<<"first: "<<*ptr;
    //printing third element: 
    std::cout<<"\nthird: "<<*(ptr+2);
    //printing fifth element 
    std::cout<<"\nfifth : "<<*(ptr+4);



    return 0;
}