// Q7. Add 5 Using a Pointer

// Write:

// void addFive(int* ptr)

// Call it using:

// addFive(&number);

// The original number should change.


#include<iostream>

void addFive (int* ptr){
    *ptr = *ptr+5;

    std::cout<<"in add function: a ="<<*ptr<<"\n";
}
int main(){


    int a = 5;


    addFive(&a);

    std::cout<<"in main function after swap : a= "<<a<<"\n";


    return 0;
}