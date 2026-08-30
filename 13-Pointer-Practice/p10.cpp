// Q10 — Find Sum Using Pointer ⭐⭐

// Given:

// int arr[5] = {10, 20, 30, 40, 50};

// Find the sum using a pointer.

// Expected:

// 150

// Do not access elements using:

// arr[i]

// Use the pointer to visit each element.

#include <iostream>

int main(){

    int arr[5]={10,20,30,40,50};

    int* ptr = arr;

    int sum =0;

    for(int  i = 0;i<5;i++){
        sum+= *(ptr+i);
    }

    std::cout<<"Sum = "<<sum;


    return 0;
}