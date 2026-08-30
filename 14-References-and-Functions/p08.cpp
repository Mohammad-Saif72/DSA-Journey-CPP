// Q8. Swap Using Pointers ⭐

// Write:

// void swapPointer(int* a, int* b)

// Example:

// Before: 10 20
// After: 20 10

// Call it using:

// swapPointer(&a, &b);



#include <iostream>


void swap(int* a, int*b){
    *a = *a+*b;

    *b = *a-*b;
    *a= *a-*b;


    std::cout<<"in swap function a= "<<*a<<" b= "<<*b<<"\n";
}

int main(){

    int a =10;

    int b = 30;

    swap(&a,&b);



 std::cout<<"in main function a= "<<a<<" b= "<<b<<"\n";


    return 0;
}