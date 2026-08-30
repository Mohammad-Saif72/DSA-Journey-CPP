// Problem 5

// Print:

// 1
// 22
// 333
// 4444
// 55555

// For:

// n = 5

// Important: Here the number printed is related to the row, not the inner-loop counter.



#include <iostream>

int main(){

    int n;
    std::cout<<"Input: ";
    std::cin>>n;

    for(int i =1;i<=n;i++){
        for(int j=1;j<=i;j++){
         std::cout<<i;
        }
        std::cout<<"\n";
    }
    return 0;
}