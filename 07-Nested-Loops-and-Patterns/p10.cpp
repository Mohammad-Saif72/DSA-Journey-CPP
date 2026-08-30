// Problem 10 ⭐

// Print:

//     *
//    **
//   ***
//  ****
// *****

// For:

// n = 5

// This is your first spaces + stars pattern.

// Think in terms of:

// spaces + stars

// For each row, determine:

// spaces = ?
// stars  = ?

#include <iostream>

int main(){
    int n;
    std::cout<<"Input: ";
    std::cin>>n;
    
    for(int i = 1; i<=n; i++){
        for(int j = i; j<=n-1;j++){
            std::cout<<" ";
        }
        for(int k = 1; k<=i; k++){
            std::cout<<"*";
        }
        std::cout<<"\n";
    }
    return 0;
}