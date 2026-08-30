// Level 1 — Understand Nested Loops
// Problem 1

// Print:

// * * * * *
// * * * * *
// * * * * *
// * * * * *

// Take the number of rows and columns from the user.

// Example:

// Rows: 4
// Columns: 5

#include <iostream>

int main(){
    for(int i = 1;i<=4;i++){
        for(int j = 1; j<=5;j++){
            std::cout<<"* ";
        }
        std::cout<<"\n";
    }
}