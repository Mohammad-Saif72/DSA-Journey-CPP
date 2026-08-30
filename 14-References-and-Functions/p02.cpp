// Q2. Swap Using Pass by Value

// Write:

// void swapValue(int a, int b)

// Try to swap a and b.

// Example:

// Before: 10 20
// Inside function: 20 10
// After function: 10 20

// Understand why the original values don't swap.




#include <iostream>


void swapAB(int a,int b){
    int temp = a;
    a= b;
    b = temp;
    std::cout<<"Inside swap Function: "<<a<<" "<<b<<"\n";
}

int main(){

    int a =10;
    int b = 20;
    
    std::cout<<"Before swap: "<<a<<" "<<b<<"\n";

    swapAB(a,b);

     std::cout<<"after swap: "<<a<<" "<<b<<"\n";

    return 0;
}