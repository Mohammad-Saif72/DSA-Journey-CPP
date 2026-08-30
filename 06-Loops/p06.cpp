// Problem 6 — Sum of Digits ⭐⭐

// Take a number and calculate the sum of its digits.

// Example:

// Input: 58392

// Calculation:

// 5 + 8 + 3 + 9 + 2 = 27

// Output:

// 27

// Hint:

// You need:

// n % 10

// and

// n / 10

// These two operations are very important for DSA.


#include <iostream>

int main(){
    int n;
    std::cout<<"Input: ";
    std::cin>>n;

    int digitSum = 0;
    while (n>0){
        int lastdigit = n%10;
        digitSum += lastdigit;
        n = n/10;
    }
    std::cout<<"Output: "<<digitSum;

    return 0;
}