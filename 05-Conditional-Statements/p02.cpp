// Problem 2 — Largest of Two Numbers

// Take two integers and print which one is larger.

// Example:

// Enter two numbers: 15 22


// 22 is greater

// Also handle the case where both are equal.


#include <iostream>

int main(){
    int a,b;

    std::cout<<"Enter numbers: ";
    std::cin>>a>>b;
    
    if (a>b)
    {
        std::cout<<a<<" is greater"<<"\n";
    }
    else if(a==b){
        std::cout<<"Both are Equal"<<"\n";
    }
    else{
        std::cout<<b<<" is greater"<<"\n";
    }
    
    return 0;
}