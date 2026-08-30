// 🔥 Problem 11 — Check if Array is Sorted

// Determine whether an array is sorted in ascending order.

// Example:

// 10 20 30 40 50

// Output:

// Sorted

// But:

// 10 20 15 40 50

// Output:

// Not Sorted
// Hint

// You don't need to compare every element with every other element.

// Think about:

// arr[i] and arr[i+1]

// This problem is particularly important because it develops the idea of checking relationships between adjacent elements.


#include <iostream>

int main(){
    int n;
    std::cout<<"Input: \n";
    std::cin>>n;

    int arr[20];
    for(int  i= 0;i<n;i++){
        std::cin>>arr[i];
    }
    bool status = true;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            status = false;
            break;
        }
    }
    if(status){
        std::cout<<"Output: \nSorted";
    }else{
        std::cout<<"Output: \nNot Sorted";
    }
    return 0;
}