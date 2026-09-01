// Q11. Function call tracker ⭐

// Write:

// void trackCalls()

// Every time the function is called, print:

// Function called 1 times
// Function called 2 times
// Function called 3 times
// ...

// Requirements:

// No global variable.
// The count must persist between calls.
// The variable should not be accessible directly from main().


#include <iostream>

void trackCalls(){
    static int count = 0;
    count++;
    std::cout<<"Function called " <<count <<" times"<<std::endl;
};

int main(){

   trackCalls();
   trackCalls();
   trackCalls();
   trackCalls();
   trackCalls();

    return 0;
}



