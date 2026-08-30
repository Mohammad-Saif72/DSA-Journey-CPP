// Problem 12 ⭐⭐

// Print:
                        //space         stars
//     *                 4                1
//    ***                3                3
//   *****               2                5
//  *******              1                7
// *********             0                9    

// For:

// n = 5

// Again, don't memorize the pattern.

// Find:

// spaces = ?
// stars = ?


#include <iostream>

int main(){
    int n;
    std::cout<<"Input: ";
    std::cin>>n;

    for(int i =1; i<=n; i++){
        for(int j = 1; j<=n-i;j++){
            std::cout<<" ";
        }
        for(int k = 1; k<=2*i-1;k++){
            std::cout<<"*";
        }
       std::cout<<"\n"; 
    }
    return 0;
}