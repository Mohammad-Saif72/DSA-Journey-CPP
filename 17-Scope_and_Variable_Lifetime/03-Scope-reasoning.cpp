// Q3. Scope reasoning

// What happens here?

// int main() {

//     int x = 10;

//     if (x > 5) {
//         int y = 20;

//         std::cout << x << " ";
//         std::cout << y << " ";
//     }

//     std::cout << x << " ";

//     std::cout << y << " ";
// }

// Answer:

// Which statements compile?
// Which statement causes an error?
// Why?

#include <iostream>


int main() {

    int x = 10;

    if (x > 5) {
        int y = 20;

        std::cout << x << " ";      // this work
        std::cout << y << " ";        // this will work
    }

    std::cout << x << " ";     // this will  work

    // std::cout << y << " ";    // y  can only be acced in thier initilaization scoped
}