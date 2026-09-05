// Q15. Persistent Call Counter

// Write:

// int visitCounter()

// Requirements:

// No global variable.
// Every call should return the total number of times the function has been called.

// Example:

// visitCounter() → 1
// visitCounter() → 2
// visitCounter() → 3


#include <iostream>

int visitCounter(){
    static int count = 0;
    count++;
    return count;
} ;

int main(){

    int visit = visitCounter();
        visit= visitCounter();
        visit = visitCounter();

   std::cout<<visit<<" ";
    
    return 0;
}