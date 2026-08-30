// Problem 2 — Reverse Counting

// Take N and print:

// N N-1 N-2 ... 1

// Example:

// Input: 6
// Output: 6 5 4 3 2 1

#include <iostream>

int main(){
    int n;
    std::cout<<"Input: ";
    std::cin>>n;

    std::cout<<"Output: ";
    int result;
    for(int i=0;i<n;i++){
        result = n-i;
        std::cout<<result<<" ";
    }
    return 0;
}