// 🟡 Practice 6 — Rectangle

// Ask the user:

// Enter length:
// Enter width:

// Calculate:

// Area = length × width
// Perimeter = 2 × (length + width)

// Example:

// Enter length: 20
// Enter width: 10


// Area: 200
// Perimeter: 60

#include <iostream>

int main(){

    double length;
    double width;

    std::cout<<"Enter length :";
    std::cin>>length;

    std::cout<<"Enter width :";
    std::cin>>width;


    // calculate Area and Perimeter

    double area = length*width;
    double perimeter = 2*(length+width);

    std::cout<<"Area: "<<area<<std::endl;
    std::cout<<"Perimeter: "<<perimeter;

    return 0;
}