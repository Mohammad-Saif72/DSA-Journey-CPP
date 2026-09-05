// Q3. Local vs Static

// Predict:

// #include <iostream>

// void fun() {
//     int a = 0;
//     static int b = 0;

//     a++;
//     b++;

//     std::cout << a << " " << b << "\n";
// }

// int main() {
//     fun();
//     fun();
//     fun();
// }

// Dry run all three calls.  
// OUtput: 1 1 1 2 1 3;

#include <iostream>

void fun() {
    int a = 0;
    static int b = 0;

    a++;
    b++;

    std::cout << a << " " << b << "\n";
}

int main() {
    fun();
    fun();
    fun();
}