// Problem 1 — Print numbers

// Take N as input and print:

// 1 2 3 ... N

// Example:

// Input: 7
// Output: 1 2 3 4 5 6 7

// Use a for loop.


#include <iostream>

int main(){
    int n;
    std::cout<<"Input: ";
    std::cin>>n;

    std::cout<<"Output: ";
    for(int i=1;i<=n;i++){
        std::cout<<i<<" ";
    }
    return 0;
}