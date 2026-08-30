// 🧠 Level 3 — Think Before Coding

// These are more important than the first six.

// Problem 7

// Print:

// 1
// 23
// 456
// 789

// Don't hardcode the numbers.

// For n = 4, the output should continue sequentially:

// 1
// 23
// 456
// 789

// Think about:

// Which variable should keep increasing even when the row changes?


#include <iostream>

int main(){
    int n;
    std::cout<<"Input: ";
    std::cin>>n;
    int temp =1;
    for(int i = 1;i<=n;i++){
        
        for(int j =1 ;j<=i;j++){
            std::cout<<temp;
            temp++;
        }
        std::cout<<"\n";
    }
}