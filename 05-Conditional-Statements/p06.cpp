// 🔥 Problem 6 — Three Numbers

// Take three integers and find the largest number.

// Example:

// Enter three numbers: 12 45 27


// Largest = 45

// Try solving this using if / else if.

// Do not use std::max() yet. I want you to practice the actual logic.

#include <iostream>

int main(){
    int a,b,c;
    std::cout<<"Enter three Numbers: ";
    std::cin>>a>>b>>c;

    if(a>b && a>c){
        std::cout<<"Largest: "<<a;
    }else if(b>c && b>a){
        std::cout<<"Largest: "<<b;
    }else{
        std::cout<<"Largest: "<<c;
    }
    return 0;
}