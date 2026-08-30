// 🟡 Part B — Pass by Reference
// Q4. Add 10 Using Reference

// Write:

// void addTen(int &x)

// Example:

// Input: 15
// After function: 25

#include <iostream>

void addTen(int &num)
{
    num = num + 10;
    std::cout << "in add function: " << num << "\n";
}

int main()
{

    int a = 15;

    addTen(a);
    std::cout << "in main function: " << a << "\n";

    return 0;
}