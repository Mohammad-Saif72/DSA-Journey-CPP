// Problem 3 — Even or Odd

// Take an integer and determine whether it is even or odd.

// Example:

// Enter number: 17


// Odd


#include <iostream>

int main(){
    int num;
    std::cout<<"Enter the num ";
    std::cin>>num;

    if(num%2==0){
        std::cout<<"Even"<<"\n";
    }else{
        std::cout<<"Odd"<<"\n";
    }
    return 0;
}
