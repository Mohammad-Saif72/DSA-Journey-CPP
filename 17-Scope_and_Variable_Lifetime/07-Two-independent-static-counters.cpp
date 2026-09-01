// Q7. Two independent static counters

// Write two functions:

// void counterA();
// void counterB();

// Each function should maintain its own count.

// Calls:

// counterA();
// counterA();

// counterB();

// counterA();

// counterB();
// counterB();

// Predict what each function should print.

// Important question:

// Do both functions share the same static variable?

// Explain why or why not.

#include <iostream>

void counterA()
{
    static int countA = 0;
    countA++;
    std::cout <<"A:" <<countA << " ";
}
void counterB()
{
    static int countB = 0;
    countB++;
    std::cout << "B:" <<countB << " ";
}

int main()
{

    counterA();
    counterA();

    counterB();

    counterA();

    counterB();
    counterB();
    return 0;
}
