// Q12. Maximum seen so far

// Write a function:

// void updateMaximum(int value)

// Suppose calls are:

// updateMaximum(10);
// updateMaximum(5);
// updateMaximum(20);
// updateMaximum(15);
// updateMaximum(30);

// The function should remember the maximum value ever received.

// Expected behavior:

// Current maximum: 10
// Current maximum: 10
// Current maximum: 20
// Current maximum: 20
// Current maximum: 30

// Rules:

// Do not use a global variable.
// Think about what information must survive after a function returns.

// This is your first small exercise involving persistent algorithmic state.




#include <iostream>

void updateMaximum(int value){
    static int max = INT16_MIN;

    if(value>max){
        max = value;
    }

    std::cout<<"Current maximum: "<<max<<"\n";
}

int main(){

updateMaximum(10);
updateMaximum(5);
updateMaximum(20);
updateMaximum(15);
updateMaximum(30);

    return 0;
}