// Question 5 — Two Pointers, One Variable
// int x = 10;

// int* ptr1 = &x;
// int* ptr2 = &x;

// Do:

// *ptr1 = 50;

// What will these print?

// std::cout << x << "\n";
// std::cout << *ptr1 << "\n";
// std::cout << *ptr2 << "\n";

// Explain why.


#include<iostream>

int main(){

    int x = 10;
    
    int* ptr1 = &x;
    int* ptr2 = &x;

    *ptr1 = 50;


    std::cout<<"x = "<<x;
    std::cout<<"\nptr1: "<<*ptr1;
    std::cout<<"\nptr2: "<<*ptr2;   



    return 0;
}