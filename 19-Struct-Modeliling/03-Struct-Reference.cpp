// Q3. Struct Reference

// Predict:

#include <iostream>

struct Student {
    int marks;
};

int main() {

    Student s1 = {80};

    Student& ref = s1;

    ref.marks = 95;

    std::cout << s1.marks;
}
//Output will be : 95;
//because ref is the reference of s1. ref gices reference address of original memory address
// Explain the memory relationship.