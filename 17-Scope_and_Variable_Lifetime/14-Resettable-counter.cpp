// Q14. Resettable counter

// This one requires more design thinking.

// Create:

// void incrementCounter();
// void resetCounter();

// The desired behavior:

// incrementCounter(); → 1
// incrementCounter(); → 2
// incrementCounter(); → 3

// resetCounter();

// incrementCounter(); → 1

// Think carefully:

// Can two separate functions access the same local static variable?

// Try to design it.

// Don't worry if this question feels difficult—that is intentional.



#include <iostream>

int& getCount(){
    static int count=0;
    return count;
}

void incrementCounter(){
    getCount()++;

    std::cout<<getCount()<<" "<<"\n";
};
void resetCounter(){
    getCount() =0;
};


int main(){


incrementCounter(); 
incrementCounter(); 
incrementCounter();

resetCounter();

incrementCounter(); 

    return 0;
}







// Output
// 1
// 2
// 3
// 1
// 🧠 How it works

// The important function is:

// int& getCounter() {
//     static int count = 0;

//     return count;
// }

// Let's break it down.

// 1. static int count = 0
// static int count = 0;

// Only one count is created, and it keeps its value throughout the program.

// 2. int&
// int& getCounter()

// The & means the function returns a reference to the original count, not a copy.

// So conceptually:

// getCounter()
//      ↓
// reference to
//      ↓
// static count

// Therefore:

// getCounter()++;

// is effectively modifying the real static variable.

// And:

// getCounter() = 0;

// resets that same variable.

// Full architecture
//                  static count
//                       ▲
//                       │
//                 getCounter()
//                   ▲       ▲
//                   │       │
//        incrementCounter()  resetCounter()

// This is a nice example of combining two concepts you already learned:

// Day 14 → References
// Day 17 → Static local variables

// And it gives you a preview of an important OOP idea:

// Keep data hidden and provide controlled access to it.

// This is a more controlled design than simply making count a global variable.