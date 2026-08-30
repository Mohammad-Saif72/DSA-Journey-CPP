// 🧩 Your First Coding Task

// Write three functions that all try to increase a number by 10.

// Function 1 — Pass by Value
// void increaseValue(int x)
// Function 2 — Pass by Reference
// void increaseReference(int &x)
// Function 3 — Pointer
// void increasePointer(int* ptr)

// Use:

// int number = 20;

// Call each function separately and observe what happens.

// Your goal is to understand:

// Pass by Value
//       ↓
// Original unchanged

// Pass by Reference
//       ↓
// Original changes

// Pointer
//       ↓
// Original changes through its address


#include <iostream>

void increaseValue(int x){
    x = x+10;
    std::cout<<"increase by value:"<< x<<"\n";
}

void increaseRefrence(int &ref){
    ref = ref+10;
     std::cout<<"increase by Refrence:"<< ref<<"\n";
}

void increasePointer(int* ptr){
    *ptr = *ptr+10;
     std::cout<<"increase by Pointer:"<< *ptr<<"\n";
}

int  main(){

    int n = 20;

    increaseValue(n);

    std::cout<<"increase by value in main function :"<< n<<"\n";

    increaseRefrence(n);

     std::cout<<"increase by Refrence: in main "<< n<<"\n";

    increasePointer(&n);
     std::cout<<"increase by Pointer: in main function: "<< n<<"\n";


    
    return 0;
}