// Q4 — Reference to an Array Element

// Given:

// int arr[5] = {10, 20, 30, 40, 50};

// Create a reference to:

// arr[2]

// Use the reference to change 30 into 300.

// Print the complete array.

// Expected:

// 10 20 300 40 50


#include <iostream>

int main(){
    int arr[5] = {10,20,30,40,50};

    int& ref =arr[2];

    ref =300;

    for (int i=0;i<5;i++){
        std::cout<<arr[i]<<" ";
    }
    return 0;
}