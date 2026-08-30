// 🔥 Level 2 — Number Patterns
// Problem 4

// Print:

// 1
// 12
// 123
// 1234
// 12345

// For:

// n = 5

#include <iostream>

int main(){

    int n;
    std::cout<<"Input: ";
    std::cin>>n;

    for(int i =1;i<=n;i++){
        for(int j=1;j<=i;j++){
         std::cout<<j;
        }
        std::cout<<"\n";
    }
    return 0;
}