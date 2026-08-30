// 🔥 Challenge Problem 7 — Reverse a Number

// Take an integer and reverse its digits.

// Example:

// Input: 12345
// Output: 54321

// Another example:

// Input: 708
// Output: 807

// This combines:

// % 10
// / 10

// with a loop.




#include <iostream>

int main(){
    int n;
    std::cout<<"Input: ";
    std::cin>>n;

    int reveseNumber=0;
    while (n>0){
        int lastdigit = n%10;
        reveseNumber = reveseNumber*10 + lastdigit;
        n = n/10;
    }

    std::cout<<"Output: "<<reveseNumber;
    
    return 0;
}