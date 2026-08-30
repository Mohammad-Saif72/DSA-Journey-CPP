// 🏆 Challenge — Don't Rush This
// Problem 11

// Print:

// *
// ***
// *****
// *******
// *********   

// For:

// n = 5

// Figure out the relationship between:

// row → number of stars

#include <iostream>

int main(){
    int n;
    std::cout<<"Input";
    std::cin>>n;

    for(int i = 1;i<=n;i++){
        for(int j = 1; j<= 2*i-1;j++ ){
            std::cout<<"*";
        }
        std::cout<<"\n";
    }
    return 0;
}