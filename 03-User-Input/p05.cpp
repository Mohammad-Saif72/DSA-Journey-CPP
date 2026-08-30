// 🟢 Practice 5 — Basic Calculator

// Ask the user for:

// first number
// second number

// Then display:

// Addition:
// Subtraction:
// Multiplication:
// Division:

// For example:

// Enter first number: 20
// Enter second number: 10


// Addition: 30
// Subtraction: 10
// Multiplication: 200
// Division: 2



#include <iostream>

int main(){

    int num1,num2;

    std::cout<<"Enter num1: ";
    std::cin>>num1;

    std::cout<<"Enter num2: ";
    std::cin>>num2;

    std::cout<<"\nAddition : "<<num1+num2<<std::endl;
    std::cout<<"Substraction: "<<num1-num2<<std::endl;
    std::cout<<"Multiplication: "<<num1*num2<<std::endl;
    std::cout<<"Division:"<<num1/num2<<std::endl;
    return 0;
}



// ⚠️ One thing I deliberately want you to notice

// In Practice 5, if you enter:

// 20
// 10

// integer division works fine:

// 20 / 10 = 2

// But later, if you enter:

// 5
// 2

// you may expect:

// 2.5

// but with two int variables, C++ gives:

// 2

// Don't worry about solving this yet. This is our first hint that data types affect calculations. We'll explore this properly when we study operators and type conversion.