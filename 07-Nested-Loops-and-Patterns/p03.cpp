// Problem 3

// Print:

// *****
// ****
// ***
// **
// *

// Example:

// Input: 5



#include <iostream>

int main(){

    int n;
    std::cout<<"Input: ";
    std::cin>>n;

    for(int i =1;i<=n;i++){
        for(int j=n;j>=i;j--){
            std::cout<<"*";
        }
        std::cout<<"\n";
    }
    return 0;
}