// Q10. Reverse a number
// int reverseNumber(int n)

// Example:

// 1234 → 4321


#include <iostream>

int reverseNumber(int n){
    int reverse = 0;
    while(n>0){
        int remnder =n%10;
        reverse = reverse*10+remnder;
        n= n/10;
    }
    return reverse;
}


int main(){


    int n ; 
    std::cout<<"Enter the number: ";
    std::cin>>n;

    int res = reverseNumber(n);

    std::cout<<"Reverse: "<<res;
    
    return 0;
}