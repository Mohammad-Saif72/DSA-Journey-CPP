// Question 9 — Find the Address Relationship 🧠

// Run:

// #include <iostream>

// int main() {

//     int arr[5] = {10, 20, 30, 40, 50};

//     std::cout << arr << "\n";
//     std::cout << &arr[0] << "\n";

//     return 0;
// }

// Observe the output.

// Question:

// Why do arr and &arr[0] represent the same starting location for this use?

// Don't worry if the exact type rules are not yet clear—we'll build that understanding gradually.


#include <iostream>

int main() {

    int arr[5] = {10, 20, 30, 40, 50};

    std::cout << arr << "\n";
    std::cout << &arr[0] << "\n";

    return 0;
}