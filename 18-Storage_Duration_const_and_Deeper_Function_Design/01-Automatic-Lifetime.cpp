// Q1. Automatic Lifetime

// What is the output?

// #include <iostream>

// void test() {
//     int x = 5;
//     x++;

//     std::cout << x << " ";
// }

// int main() {
//     test();
//     test();
//     test();
// }

// Also explain why.    //Output: 6 6 6;



#include <iostream>

void test() {
    int x = 5;
    x++;

    std::cout << x << " ";
}

int main() {
    test();
    test();
    test();
}

