// Problem 4 — Sum of Even Numbers

// Given N, calculate:

// 2 + 4 + 6 + ... <= N

// Example:

// Input: 10
// Output: 30

// Because:

// 2 + 4 + 6 + 8 + 10 = 30

#include <iostream>

int main(){
    int n;
    std::cout<<"Input: ";
    std::cin>>n;

    int res=0;
    for(int i=2;i<=n;i+=2){
        res+=i;
    }
    std::cout<<"Output: "<<res;
    return 0;
}