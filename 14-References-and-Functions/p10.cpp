// 🧪 Practice — Array Modification Function

// Write a function:

// void doubleArray(int arr[], int size)

// The function should multiply every element by 2.

// Example:

// Input array:
// 1 2 3 4 5

// After function:
// 2 4 6 8 10

// Use:

// int arr[5] = {1, 2, 3, 4, 5};

// Call the function from main() and print the array after the function call.

// 💡 Hint: Inside the function, use a loop from 0 to size - 1



#include <iostream>

void doubleArray(int arr[],int size){
    for(int i =0;i<size;i++){
        arr[i] = arr[i]*2;
    }
}
int main(){

    int arr[]={1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);

    doubleArray(arr,size);

    for(int i =0;i<size;i++){
        std::cout<<arr[i]<<" ";
    }
    return 0;
}