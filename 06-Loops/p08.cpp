// 🔥 Challenge Problem 8 — Palindrome Number

// Determine whether a number reads the same forward and backward.

// Example:

// Input: 121
// Output: Palindrome
// Input: 123
// Output: Not Palindrome

// Important: Don't convert the number to a string. Solve it using arithmetic and loops.


#include <iostream>

int main(){
    int n;
    std::cout<<"Input: ";
    std::cin>>n;

    int temp=n;
    int reversnumber=0;

    while (temp>0){
        int lastDigit = temp%10;
        reversnumber = reversnumber * 10 + lastDigit;
        temp = temp/10;
    }

    if(n==reversnumber){
        std::cout<<"Palindrome";
    }else{
        std::cout<<"Not Palindrome";
    }
    
    return 0;
}