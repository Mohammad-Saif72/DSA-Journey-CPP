// 🧠 Problem 1 — Matrix Input + Output

// Now you practice.

// Write a program that:

// Takes rows and columns.
// Takes all matrix elements.
// Prints the matrix in matrix form.

// Example:

// Input
// 2 3
// 10 20 30
// 40 50 60
// Output
// 10 20 30
// 40 50 60
// Requirements

// Use:

// int arr[10][10];

// You can assume:

// rows <= 10
// columns <= 10

// Don't use vector<vector<int>> yet.

// We're first learning the 2D array fundamentals.


#include <iostream>

int main(){
    int arr[10][10];

    int row,col;

    std::cout<<"Enter Row  and Column: ";
    std::cin>>row>>col;

    for(int i=0;i<row;i++){
        for(int j =0;j<col;j++){
            std::cin>>arr[i][j];
        }
    }


    //print matrix 

    std::cout<<"Output: \n";
       for(int i=0;i<row;i++){
        for(int j =0;j<col;j++){
            std::cout<<arr[i][j]<<" ";
        }
        std::cout<<"\n";
    }
}