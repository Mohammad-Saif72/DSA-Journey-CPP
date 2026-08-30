// 🧪 Debugging Practice

// What is wrong with this program?

// #include <iostream>


// int main()
// {
//     int age;


//     std::cout << "Enter your age: "
//     std::cin >> age;


//     std::cout << "Age: " << age << "\n";


//     return 0;
// }

// Find the error without looking at the solution.

#include <iostream>

int main()
{
    int age;

    std::cout << "Enter your age: ";//semicolun error
    std::cin >> age;

    std::cout << "Age: " << age << "\n";

    return 0;
}