// Practice 10 — Circle

// Create:
// radius = 5
// pi = 3.14159

// Calculate:
// Area = pi × radius × radius

// Output:
// Radius: 5
// Area: ...

#include <iostream>

int radius =5;
double pi= 3.14159;

double Area = 0;

int main (){
// calculate area
    Area = pi*radius*radius;

// print output
std::cout<<"Radius: "<<radius<<"\n";
std::cout<<"Area: "<<Area<<"\n";

    return 0;
}