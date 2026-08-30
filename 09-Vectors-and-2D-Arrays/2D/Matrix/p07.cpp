// 🔥 Problem 7 — Matrix Transpose

// Now we're moving to a real matrix operation.

// Given:

// 1  2  3
// 4  5  6

// The transpose should be:

// 1  4
// 2  5
// 3  6

// In other words:

// original[i][j]
//         ↓
// transposed[j][i]
// Example

// Input:

// 1 2 3
// 4 5 6

// Output:

// 1 4
// 2 5
// 3 6
// 🧠 Hint

// Notice:

// Original:

// [1 2 3]
// [4 5 6]

// Transpose:

// [1 4]
// [2 5]
// [3 6]

// So:

// original[0][1] = 2

// moves to:

// transpose[1][0] = 2

// Therefore, the relationship is:

// transpose[j][i] = arr[i][j];
// Requirements
// Take rows and columns.
// Input the matrix.
// Create a second matrix for the transpose.
// Print the transpose.
// This time, using another matrix is allowed because we're learning the basic transpose operation first.

// Try it with a non-square matrix, such as 2 × 3. This is important because it makes the row/column transformation clear.


#include <iostream>

int main(){

    int arr[2][3]={
        {1,2,3},
        {4,5,6}
    };

    int transpose[3][2];

    for(int i=0;i<2;i++){
        for(int j =0;j<3;j++){
            transpose[j][i]= arr[i][j];
        }
    }


    std::cout<<"Transpose: \n";
    for(int i = 0;i<3;i++){
        for(int j=0;j<2;j++){
            std::cout<<transpose[i][j]<<" ";
        }
        std::cout<<"\n";
    }
    return 0;
}