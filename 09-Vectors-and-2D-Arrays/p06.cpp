// 🟡 Level 2 — Vector + DSA Logic
// Problem 6 — Remove All Occurrences of a Value

// Given a vector and a target value, create a new vector containing every element except the target.

// Example:

// Input:
// 7
// 10 20 10 30 40 10 50
// 10

// Output:

// 20 30 40 50

// Don't use erase() yet.

// Use traversal + push_back().

// This is an important DSA pattern.

#include <iostream>
#include <vector>

int main(){
    int n;
    std::cout<<"Input: ";
    std::cin>>n;

    std::vector<int> arr(n);

    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }

    int target;
    std::cout<<"Enter Target: ";
    std::cin>>target;

    std::vector<int> newArr;

    for(int i=0;i<arr.size();i++){
        if(arr[i]!=target){
            newArr.push_back(arr[i]);
        }
    }

    std::cout<<"Output \n";

    for(int i=0;i<newArr.size();i++){
        std::cout<<newArr[i]<<" ";
    }

    return 0;
}