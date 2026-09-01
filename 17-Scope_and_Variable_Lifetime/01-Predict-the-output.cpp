// 🟢 Level 1 — Scope & Dry Run
// Q1. Predict the output


#include <iostream>

void test() {
    int x = 5;

    std::cout << x << " ";
}

int main() {
    test();
    test();
    test();
}

// Questions:

// What is the output?         Output: 5 5 5;
// Is the same x reused?       No;
// When does each x exist?     each x exists only for one function call;