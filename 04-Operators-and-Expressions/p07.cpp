// Problem 7 — Swap Two Numbers

// Take two integers:

// a = 10
// b = 20

// Swap their values.

// Expected:

// Before swapping:
// a = 10
// b = 20


// After swapping:
// a = 20
// b = 10

// Challenge: Try solving it using a third variable.

// #include <iostream>

// int main(){
//     int a =10;
//     int b = 20;

//     std::cout<<"Before swapping: \n"
//     <<"a = "<<a
//     <<"\nb = "<<b;

//     int temp = a;
//     a=b;
//     b=temp;

//     std::cout<<"\nafter swapping: \n"
//     <<"a = "<<a
//     <<"\nb = "<<b;
//     return 0;
// }

// Challenge: without using any variable



#include <iostream>

int main(){
    int a =10;
    int b = 20;

    std::cout<<"Before swapping: \n"
    <<"a = "<<a
    <<"\nb = "<<b;

   

    std::cout<<"\nafter swapping: \n"
    <<"a = "<<a+b-a
    <<"\nb = "<<a+b-b;
    return 0;
}

