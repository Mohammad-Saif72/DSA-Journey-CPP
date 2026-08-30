// Problem 1 — Positive, Negative or Zero

// Take an integer and determine whether it is:

// Positive
// Negative
// Zero

// Example:

// Enter number: -8
// Negative




#include <iostream>

int main(){
    int num;
    std::cout<<"Enter num: ";
    std::cin>>num;

    if(num>0){
        std::cout<<"Positive"<<"\n";
    }else if(num<0){
        std::cout<<"Negative"<<"\n";
    }else{
        std::cout<<"Zero"<<"\n";
    }
    return 0;
}

