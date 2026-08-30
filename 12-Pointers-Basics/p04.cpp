// Question 4 — Predict the Output 🧠

// Before running this code, predict the output:

// int x = 10;

// int* ptr = &x;

// std::cout << x << "\n";       //answer :: 10
// std::cout << *ptr << "\n";    //answer :: 10

// *ptr = 25;

// std::cout << x << "\n";      //answer :: 25           
// std::cout << *ptr << "\n";       //answer :: 25

// Write your predicted output first, then run it.

#include <iostream>

int main(){

    int x = 10;

int* ptr = &x;

std::cout << x << "\n";
std::cout << *ptr << "\n";

*ptr = 25;

std::cout << x << "\n";
std::cout << *ptr << "\n";

    return 0;
}
