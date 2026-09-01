// Q2. Predict the output
// void test() {
//     static int x = 5;

//     x += 2;

//     std::cout << x << " ";
// }

// int main() {
//     test();
//     test();
//     test();
// }

// Dry run every call.



#include <iostream>

void test() {
    static int x = 5;     // x will not initialiewith each function call

    x += 2;

    std::cout << x << " ";
}

int main() {
    test();
    test();
    test();
}


// OUtput: 7 9 11;