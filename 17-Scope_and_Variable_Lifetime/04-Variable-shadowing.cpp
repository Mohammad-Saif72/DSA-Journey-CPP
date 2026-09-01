// Q4. Variable shadowing

// Predict the output:

// int x = 100;

// int main() {

//     int x = 50;

//     {
//         int x = 25;

//         std::cout << x << " ";
//     }

//     std::cout << x << " ";
// }

// Then explain which x is used at each print statement.



#include <iostream>

int x = 100;

int main() {

    int x = 50;

    {
        int x = 25;

        std::cout << x << " ";
    }

    std::cout << x << " ";
}


// Variavle Shadowing: is a common programming 
// concept where a variable declared in some specific
//  scope takes precedence over 
// a same name declared in an outer scope.