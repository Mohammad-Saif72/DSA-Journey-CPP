// Problem 8

// Print:

// *****
// *   *
// *   *
// *   *
// *****

// For:

// n = 5

// Hint: You need to understand the position of a character.

// Ask yourself:

// When should I print * and when should I print a space?

#include <iostream>

int main(){
    int n;
    std::cout<<"Input: ";
    std::cin>>n;
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1 || i==n){
                std::cout<<"*";
            }else if(j==1 || j==n){
                std::cout<<"*";
            }else{
                std::cout<<" ";
            }
        }
        std::cout<<"\n";
    }
    return 0;
}