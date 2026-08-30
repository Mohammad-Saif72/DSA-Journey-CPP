// 🔥 Problem 13 — Move Zeros to End Using vector

// You've already solved this with a fixed array on Day 8, so this is intentionally not a difficult problem. It's testing whether you can transfer your existing two-pointer logic from an array to a vector.

// Given:

// [0, 1, 0, 3, 12]

// produce:

// [1, 3, 12, 0, 0]

// Another example:

// [4, 0, 5, 0, 2, 0, 7]

// →

// [4, 5, 2, 7, 0, 0, 0]
// Requirements
// Use std::vector
// In-place
// Don't use another vector
// Don't use sort()
// Maintain the relative order of non-zero elements
// Aim for O(n) time and O(1) extra space

// You already developed this logic on Day 8, so try to write it without looking at your previous solution. This is a transfer test.


#include <iostream>
#include <vector>

int main(){

    std::vector <int> arr = {0, 1, 0, 3, 12};
    // std::vector <int> arr = {4, 0, 5, 0, 2, 0, 7};

    int ptr=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]!=0){
            arr[ptr] = arr[i];
            if(ptr!=i){
                arr[i]=0;
            }
            ptr++; 
        }
    }

    std::cout<<"Output: ";
        for(int i=0;i<arr.size();i++){
            std::cout<<arr[i]<<" ";
        }
    return 0;
}