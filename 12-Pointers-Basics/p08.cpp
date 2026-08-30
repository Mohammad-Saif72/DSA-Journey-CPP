// Question 8 — Array + Pointer

// Given:

// int arr[5] = {10, 20, 30, 40, 50};

// Create:

// int* ptr = arr;

// Print:

// *ptr

// What value do you get?

// Then modify the first element using:

// *ptr = 100;

// Print the complete array afterward.




#include <iostream>

int main(){
    
    int arr[5] = {10,20,30,40,50};

    int* ptr = arr;

    std::cout<<"*ptr = "<<*ptr;

    *ptr = 100;

    std::cout<<"\nOutput \n";
    for(int i = 0;i<5;i++){
        std::cout<<arr[i]<<" ";
    }


    return 0;
}