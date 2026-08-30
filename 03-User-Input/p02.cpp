// 🟢 Practice 2 — Name

// Create a std::string variable.

// Ask:
// Enter your name:

// Then print:

// Hello, Saif
// Welcome to C++!

// Use std::cin.

// Hint: Use a single-word name for now.

#include <iostream>
#include <string>

int main(){

    std::string name;

    std::cout<<"Enter your name:";
    std::cin>>name;
    std::cout<<"Hello, "<<name<<std::endl;
    std::cout<<"Welcome to C++!";

    return 0;
}