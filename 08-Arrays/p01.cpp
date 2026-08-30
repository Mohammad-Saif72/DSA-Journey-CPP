// 🟢 Level 1 — Array Fundamentals
// Problem 1 — Print Array

// Take n integers from the user and print all elements.

// Example:

// Input:
// 5
// 10 20 30 40 50


// Output:
// 10 20 30 40 50



#include <iostream>

int main(){
    int n;
    std::cout<<"Input: \n";
    std::cin>>n;

    int arr[100];
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }
    std::cout<<"Output: \n";
    for(int i = 0; i<n;i++){
        std::cout<<arr[i]<<" ";
    }
    return 0;
}