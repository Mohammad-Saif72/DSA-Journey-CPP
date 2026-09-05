// Q5. const

// Which lines are valid and which produce an error?

// const int a = 10;
// int b = 20;

// b = a + 5;

// // a = 30;

// const int c = b;

// Now answer:

// Can c change if b later changes?   c will not change;

// Explain.


#include <iostream>

int main(){

    const int a = 10;
int b = 20;

b = a + 5;

// a = 30;

const int c = b;

std::cout<<c;
    return 0;
}