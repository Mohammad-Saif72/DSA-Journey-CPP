// 🔥 Problem 7 — Divisibility

// Take an integer and determine whether it is:

// Divisible by 5
// Divisible by 3
// Divisible by both
// Divisible by neither

// Example:

// Enter number: 15


// Divisible by both 3 and 5

// Hint:

// number % 3 == 0
// number % 5 == 0

// This is your first problem combining && with %.

#include <iostream>

int main(){
    int  a;
    std::cout<<"Enter num: ";
    std::cin>>a;

    if(a % 5 == 0 && a % 3 == 0){
        std::cout<<"Divisible by both 3 and 5";
    }else if (a %5 ==0){
        std::cout<<"Divisible by 5";
    }else if (a % 3 ==0){
        std::cout<<"Divisible by 3";
    }else{
        std::cout<<"Divisible by neither";
    }
    
    return 0;
}