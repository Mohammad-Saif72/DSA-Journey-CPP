// Problem 6

// Print:

// 12345
// 1234
// 123
// 12
// 1

// For:

// n = 5


#include <iostream>

int main(){
    int n;
    std::cout<<"Input: ";
    std::cin>>n;

    for(int i = 1; i<=n;i++){
        for(int j =1;j<=n-i+1;j++){
            std::cout<<j;
        }
        std::cout<<"\n";
    }
    return 0;
}