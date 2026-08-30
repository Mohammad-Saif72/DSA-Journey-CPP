// Q3. Square a Number

// Write:

// void square(int x)

// Try to square the number.

// Check whether the original variable changes.


#include <iostream>

void squre(int num){
    num = num*num;
    std::cout<<"In Squre function: "<<num<<"\n"; 
}

int main(){

    int a = 5;

    squre(a);
    std::cout<<"in main  body: "<<a<<"\n";


    return 0;
}