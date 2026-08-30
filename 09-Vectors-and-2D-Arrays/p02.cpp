// 🟡 Problem 2 — Vector Update

// Now let's test whether you understand that vector indexing works like array indexing.

// Task

// Take n integers into a vector.

// Then take:

// index
// newValue

// Update the element at that index.

// Finally print the updated vector.

// Example

// Input:

// 5
// 10 20 30 40 50
// 2
// 99

// Before:

// [10, 20, 30, 40, 50]

// Index 2 contains:

// 30

// After updating:

// [10, 20, 99, 40, 50]

// Output:

// 10 20 99 40 50
// Requirements

// Use:

// std::vector<int>

// and direct indexing:

// arr[index] = newValue;

// Don't use another array/vector.


#include <iostream>
#include <vector>

int main(){
    int n;
    std::cout<<"Enter n: ";
    std::cin>>n;
    // std::vector<int> arr   OUTPUT :  [] NO ELEMENT IN THIS ARRAY YOU CAN ADD ELEMENT USING PUSH_PACK
    std::vector<int> arr(n);  // [0,0,0,...upto n] or // creates n elements, initialized to 0

    for(int i =0; i<n;i++){
        std::cin>>arr[i];
    }

    int index;
    int newValue;
    std::cout<<"Enter Index: ";
    std::cin>>index;

    std::cout<<"Enter NewValue: ";
    std::cin>>newValue;

    arr[index]=newValue;

    std::cout<<"Output array: ";

    for(int i = 0;i<arr.size();i++){
        std::cout<<arr[i]<<" ";
    }

    return 0;
}