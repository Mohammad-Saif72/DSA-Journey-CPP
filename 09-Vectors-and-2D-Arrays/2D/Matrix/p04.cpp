// 🔥 Problem 4 — Find Maximum and Minimum in a Matrix

// Given a matrix:

// 8  3  12
// 5  20  1
// 7  9  6

// Find:

// Maximum = 20
// Minimum = 1
// Requirements
// Traverse the entire matrix.
// Don't sort it.
// Don't use another array.
// Use nested loops.
// Your solution should work for any rows × columns matrix.
// 🧠 Hint

// You've already solved maximum/minimum in a 1D array on Day 8.

// The only difference now is that instead of:

// arr[i]

// you have:

// arr[i][j]

// You can initialize your values from the first matrix element:

// int maximum = arr[0][0];
// int minimum = arr[0][0];

// Then traverse the matrix and compare every element.


#include <iostream>

int main(){

    int arr[3][3] = {
        {8,3,12},
        {5,20,1},
        {7,9,6}
    };

    int max = arr[0][0];
    int min = arr[0][0];

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(max<arr[i][j]){
                max = arr[i][j];

            }
             if(arr[i][j]<min){
                min = arr[i][j];
            }
        }
    }

    std::cout<<"Maximum: = "<<max<<"\n";
    std::cout<<"Minimum: = "<<min;

    return 0;
}