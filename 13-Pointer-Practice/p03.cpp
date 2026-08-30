// Q3 — Predict the Output 🧠

// Before running:

// int x = 10;
// int& ref = x;

// ref = 20;

// std::cout << x << "\n";   //naswer will be 20;

// x = 30;

// std::cout << ref << "\n";   //answer will be 30;

// Predict the output and then verify it.

#include <iostream>

int main(){

    int x = 10;
int& ref = x;

ref = 20;

std::cout << x << "\n";

x = 30;

std::cout << ref << "\n";


    return 0;
}