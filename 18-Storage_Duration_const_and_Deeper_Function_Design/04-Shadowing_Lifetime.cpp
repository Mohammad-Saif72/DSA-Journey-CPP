// Q4. Shadowing + Lifetime

// Predict:

// #include <iostream>

// int x = 10;

// void fun() {
//     int x = 20;

//     {
//         static int x = 30;

//         x++;
//         std::cout << x << " ";
//     }

//     std::cout << x << "\n";
// }

// int main() {
//     fun();
//     fun();
// }

// Explain which x is accessed at every point.

//Output:
// 31 20
// 32 20


#include <iostream>

int x = 10;

void fun() {
    int x = 20;

    {
        static int x = 30;

        x++;
        std::cout << x << " ";
    }

    std::cout << x << "\n";
}

int main() {
    fun();
    fun();
}
