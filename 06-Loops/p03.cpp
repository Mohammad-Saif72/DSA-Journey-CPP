// Problem 3 — Sum 1 to N ⭐

// Take N and calculate:

// 1 + 2 + 3 + ... + N

// Example:

// Input: 10
// Output: 55

// Use an accumulator.


#include <iostream>

int main(){
    int n;
    std::cout<<"Input: ";
    std::cin>>n;

    int sum=0;
    for(int i = 1;i<=n;i++){
        sum +=i; 
    }
    std::cout<<"Output: "<<sum;
    return 0;
}