// Q13. Running Sum

// Write:

// void addToTotal(int value)

// Calls:

// addToTotal(5);
// addToTotal(10);
// addToTotal(-2);
// addToTotal(20);

// Expected output:

// Total: 5
// Total: 15
// Total: 13
// Total: 33

// Again:

// No global variable.
// The total must remember previous calls.


#include <iostream>

void addToTotal(int value){
    static int sum = 0;

    sum += value;

    std::cout<<"Total: "<<sum<<"\n";
}

int main(){

addToTotal(5);
addToTotal(10);
addToTotal(-2);
addToTotal(20);

    return 0;
}
