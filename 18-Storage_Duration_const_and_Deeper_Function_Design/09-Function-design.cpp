// Part B — Choose the Correct Function Design

// For each case, choose:

// Pass by value
// Pass by reference
// Pass by const reference

// and explain why.

// Q9.

// A function receives an int n and returns n * n.


#include <iostream>

int squre(int n){      //pas by value funtion it will be best 
    return n*n;
}

int main(){

    int n=10;
    int res = squre(n);

    std::cout<<res;

    return 0;
}