// 🟡 Level 2 — Function Behavior
// Q5. Normal counter

// Write:

// void counter()

// Inside it:

// Create a normal local variable count
// Start it from 0
// Increment it
// Print it

// Call the function 5 times.

// Before running, predict the output.

// Then answer:

// Why does the counter not remember the previous call?


#include <iostream>

void counter(){

    int count =0;
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

// Why does the counter not remember the previous call?
// answer: Because each declare a new count variable 
// and they becomed destroid when function one call completed