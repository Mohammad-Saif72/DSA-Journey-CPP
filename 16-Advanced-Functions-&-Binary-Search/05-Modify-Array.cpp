// Q5. Modify Array

// Write:

// void squareElements(int arr[], int n)

// Example:

// Before:
// 1 2 3 4

// After:
// 1 4 9 16

// This function should modify the original array.

#include <iostream>

void squareElements(int arr[],int n){
    for(int i=0;i<n;i++){
        arr[i]= arr[i]*arr[i];
    }
}

int main(){

    int arr[] ={5,8,3,14,52,4,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    squareElements(arr,n);


    for(int i=0;i<n;i++){
        std::cout<<arr[i]<<",";
    }


    return 0;
}