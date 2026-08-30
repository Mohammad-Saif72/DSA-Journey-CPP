// 🟠 Level 3 — Stronger DSA Thinking
// Problem 9 — Left Rotate by One

// Given:

// [10, 20, 30, 40, 50]

// left rotate by one position:

// [20, 30, 40, 50, 10]

// Example:

// Input:
// 5
// 10 20 30 40 50


// Output:
// 20 30 40 50 10

// Do it in-place.

#include <iostream>
#include <vector>

int main(){
    int n; 
    std::cout<<"Input: ";
    std::cin>>n;

    std::vector <int> arr(n);
    for(int i = 0; i<n;i++){
        std::cin>>arr[i];
    }

    //left rotate by One;
    int temp=arr[0];

    for(int i =0;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;

    std::cout<<"Output: ";
    for(int i=0;i<n;i++){
        std::cout<<arr[i]<<" ";
    }
    return 0;
}