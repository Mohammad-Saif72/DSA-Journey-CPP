// Q9. Count digits in a number
// int countDigits(int n)

// Example:

// 12345 → 5


#include <iostream>

int countDigits(int n){
    int count = 0;
    while(n>0){
        n = n/10;
        count++;
    }
    return count;
}

int main(){

    int n ; 
    std::cout<<"Enter the number: ";
    std::cin>>n;

    int count = countDigits(n);
    std::cout<<"Count : "<<count;
    return 0;
}