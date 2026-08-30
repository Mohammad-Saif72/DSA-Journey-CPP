// Problem 4 — Average

// Take three numbers from the user and calculate their average.

// Example:

// Enter three numbers: 10 20 30


// Average: 20

// Hint: Use double if you want a decimal result.

#include <iostream>

int main(){
    int a,b,c;

    std::cout<<"Enter all three no: ";
    std::cin>>a>>b>>c;

    double avg = (a+b+c)/3;
    std::cout<<"Average: "<<avg;
    
    return 0;
}