// 🔴 Level 3 — Challenge Problems

// These are where I want you to start thinking like a DSA student.

// Problem 9 — Find the Second Largest Element

// Given an array, find the second largest distinct element.

// Example:

// Input:
// 6
// 10 25 8 40 30 40


// Output:
// 30

// Notice:

// Largest = 40
// Second largest = 30

// The duplicate 40 should not count as the second largest.

// Don't sort the array.

// Try to solve it using traversal.

#include <iostream>

int main(){
    int n; 
    std::cout<<"Input: \n";
    std::cin>>n;

    int arr [20];
    for(int i = 0;i<n;i++){
        std::cin>>arr[i];
    }

    int largest = std::max(arr[0],arr[1]);
    int secondLargest = std::min(arr[1],arr[0]);


    for(int  i =1; i<n;i++){
        if(largest<arr[i]){
            secondLargest = largest;
            largest = arr[i];
        }else if(arr[i]>secondLargest && arr[i]!=largest){
            secondLargest =arr[i];
        }
    }
    std::cout<<"output: \n"<<secondLargest;
    return 0;
}