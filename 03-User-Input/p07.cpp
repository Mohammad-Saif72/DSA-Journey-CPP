// 🟡 Practice 7 — Temperature

// Ask the user for temperature in Celsius.

// Convert it to Fahrenheit.

// Formula:

// F = (C × 9 / 5) + 32

// Example:

// Enter temperature in Celsius: 25


// Temperature in Fahrenheit: 77

// Use double, not int.

#include <iostream>

int main(){
    double celsius;

    std::cout<<"Enter temperature in Celsius: ";
    std::cin>>celsius;

    //now convert the temperature
    double fahrenheit = (celsius*9/5)+32;

    std::cout<<"Temperature in Fahrenheit: "<<fahrenheit;
    return 0;
}