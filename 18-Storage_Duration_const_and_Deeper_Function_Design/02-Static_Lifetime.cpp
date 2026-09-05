// Q2. Static Lifetime

// Predict the output:

// #include <iostream>

// void test() {
//     static int x = 5;

//     x++;

//     std::cout << x << " ";
// }

// int main() {
//     test();
//     test();
//     test();
// }

// Explain what happens during every function call;
 //OutPut:: 6 7 8


 #include <iostream>

void test() {
    static int x = 5;

    x++;

    std::cout << x << " ";
}

int main() {
    test();
    test();
    test();
}