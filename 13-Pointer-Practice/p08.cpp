// Q8 — Traverse Array Using Pointer ⭐

// Given:

// int arr[6] = {2, 4, 6, 8, 10, 12};

// Print all elements using:

// int* ptr = arr;

// and pointer movement.

// Do not use:

// arr[i]

#include<iostream>

int main(){
    int arr[6] = {2,4,6,8,10,12};

    int* ptr = arr;

    std::cout<<"Output: ";
    for(int i =0;i<6;i++){
        std::cout<<*(ptr +i)<< ",";
    }


    return 0;
}