// Question 3

// Will this compile?

// #include <iostream>

// int main()
// {
//     std::cout << name;

//     std::string name = "Saif";

//     return 0;
// }

// If not, why?

#include <iostream>

int main()
{
    std::cout << name;

    std::string name = "Saif";

    return 0;
}

// Ansawer :example.cpp:22:18: error: 'name' was not declared in this scope
//      std::cout << name;
