// Q6. Persistent counter ⭐

// Modify Question 5 so that the output becomes:

// 1
// 2
// 3
// 4
// 5

// Rules:

// Do not use a global variable.
// Keep the variable inside the function.

// Think carefully about static local variables.





#include <iostream>

void counter(){

    static int count =0;
    count++;

    std::cout<<count<<" ";
}

int main(){

    counter();
    counter();
    counter();
    counter();
    counter();

    return 0;
}