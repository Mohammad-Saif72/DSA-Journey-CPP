// Q9. Nested scope

// Predict the output:

// int main() {

//     int x = 10;

//     {
//         x += 5;

//         int y = x * 2;

//         std::cout << y << " ";
//     }

//     std::cout << x << " ";
// }

// Then explain:

// What is the lifetime of y?     // backet block exicuted y life time will over
// Can x still be accessed after the inner block?   yes;

#include <iostream>

int main() {

    int x = 10;

    {
        x += 5;

        int y = x * 2;

        std::cout << y << " ";
    }

    std::cout << x << " ";
}

