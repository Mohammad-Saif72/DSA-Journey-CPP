// Problem 9

// Print this pattern:

// 1
// 01
// 101
// 0101
// 10101

// For:

// n = 5

// The challenge is to determine when the value should be:

// 0

// and when it should be:

// 1

// Don't manually create separate cases for every row.


#include <iostream>

int main(){
    int n;
    std::cout<<"Input: ";
    std::cin>>n;

    bool status = 1;
    for(int i=1;i<=n;i++){
          if(i%2 != 0){
            status = 1;
            for(int  j =1;j<=i;j++){
                std::cout<<status;
                status = !status;
            }
          }else{
            status = 0;
            for(int  j =1;j<=i;j++){
                std::cout<<status;
                status = !status;
            }
          }
        std::cout<<"\n";
    }
    return 0;
}