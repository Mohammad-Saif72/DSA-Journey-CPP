// Practice 9 — Rectangle

// Create variables:
// length = 20
// width = 10

// Calculate:
// Area
// Perimeter

// Formulas:
// Area = length × width
// Perimeter = 2 × (length + width)

// Expected output format:
// Length: 20
// Width: 10
// Area: ...
// Perimeter: ...



// #include <iostream>

// double length = 20;
// double width = 10; //int also can be written

// //assining variable 
// double Area = 0;
// double Perimeter = 0;



// int main(){
// // now calculate
// Area = length*width;
// Perimeter = 2* (length+width);

// // now print values 

// std::cout<<"Length: "<< length<< "\n";
// std::cout<<"width: "<< width<< "\n";
// std::cout<<"Area: "<< Area<< "\n";
// std::cout<<"Perimeter: "<< Perimeter<< "\n";
//     return 0;
// }






//in place of double put int and check run time
#include <iostream>

int length = 20;
int width = 10; //int also can be written

//assining variable 
int Area = 0;
int Perimeter = 0;



int main(){
// now calculate
Area = length*width;
Perimeter = 2* (length+width);

// now print values 

std::cout<<"Length: "<< length<< "\n";
std::cout<<"width: "<< width<< "\n";
std::cout<<"Area: "<< Area<< "\n";
std::cout<<"Perimeter: "<< Perimeter<< "\n";
    return 0;
}