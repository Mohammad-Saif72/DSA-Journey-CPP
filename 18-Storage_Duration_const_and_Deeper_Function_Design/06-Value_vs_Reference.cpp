// Q6. Value vs Reference

// Predict the final value of x.

// #include <iostream>

// void change(int a) {
//     a = 50;
// }

// void modify(int& a) {
//     a = 100;
// }

// int main() {
//     int x = 10;

//     change(x);
//     modify(x);

//     std::cout << x;
// }

// Explain step by step.


//Output: 100;

#include <iostream>

void change(int a) {
    a = 50;
}

void modify(int& a) {
    a = 100;
}

int main() {
    int x = 10;

    change(x);
    modify(x);

    std::cout << x;
}