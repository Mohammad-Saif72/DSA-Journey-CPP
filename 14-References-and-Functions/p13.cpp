// Q13. Reverse an Array Using a Function ⭐

// Write:

// void reverseArray(int arr[], int size)

// Reverse the array in place.

// Example:

// Before:
// 1 2 3 4 5

// After:
// 5 4 3 2 1

// Use the two-pointer approach.



#include <iostream>


void reverse(int arr[],int size){
    for(int i=0;i<(size+1)/2;i++){
        int temp = arr[i];
        arr[i]= arr[size -1-i];
        arr[size-1-i] = temp; 
    }
}

int main(){

    int arr[]= {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);


    reverse(arr,size);
for(int i=0;i<size;i++){
    std::cout<<arr[i]<<",";
}

    return 0;
}