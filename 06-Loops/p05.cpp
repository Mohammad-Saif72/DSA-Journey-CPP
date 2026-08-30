// Problem 5 — Count Digits ⭐⭐

// Take an integer N and count how many digits it contains.

// Example:

// Input: 58392
// Output: 5

// Hint:

// You will eventually need:

// n = n / 10;

// This is your first proper DSA-style loop problem.

#include <iostream>

int main(){
    int n;

    std::cout<<"Input: ";
    std::cin>>n;

    if(n<0){
        n=n*-1;
    }
    std::cout<<"Positive Check: "<<n<<"\n";
    int i=0;
    while (n>0){
        n=n/10;
        i++;
    }
    std::cout<<"Output: "<<i;

    return 0;
}