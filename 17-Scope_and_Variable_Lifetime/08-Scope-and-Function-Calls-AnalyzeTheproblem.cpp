// Q8. Analyze this program
// int value = 10;

// void change() {
//     int value = 20;

//     value += 5;

//     std::cout << value << " ";
// }

// int main() {
//     change();

//     std::cout << value << " ";
// }

// Answer:

// What is the output?        // Output: 25  10 
// Does change() modify the global variable?   //No
// Why?    because value variable in change function  is 
// local scope variable it will destryed once the change 
// function executed completed;

#include <iostream>

int value = 10;

void change() {
    int value = 20;

    value += 5;

    std::cout << value << " ";
}

int main() {
    change();

    std::cout << value << " ";
}


