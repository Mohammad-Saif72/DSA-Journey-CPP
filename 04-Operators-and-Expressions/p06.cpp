// Problem 6 — Simple Interest

// Take:

// Principal
// Rate
// Time

// Calculate simple interest.

// Formula:

// SI = (P × R × T) / 100

// Example:

// Principal: 10000
// Rate: 5
// Time: 2


// Simple Interest: 1000




#include <iostream>

int main(){
    int principal,rate,time;

    std::cout<<"Principal: ";
    std::cin>>principal;

    std::cout<<"rate: ";
    std::cin>>rate;

    std::cout<<"time: ";
    std::cin>>time;

    double si = (principal*rate*time)/100;


    std::cout<<"Simple Interest: "<<si;
    
    return 0;
}