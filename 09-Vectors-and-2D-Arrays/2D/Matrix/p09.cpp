// 🔥 Problem 9 — Boundary Traversal

// Now we're getting into a more DSA-style matrix problem.

// Given:

// 1  2  3  4
// 5  6  7  8
// 9 10 11 12
// 13 14 15 16

// Print only the boundary elements, moving clockwise.

// Expected:

// 1 2 3 4 8 12 16 15 14 13 9 5

// Visualize the traversal:

// → → → →
//         ↓
//         ↓
//         ↓
// ← ← ← ←
// ↑
// ↑
// Your task

// Write a program that works for a general rows × columns matrix.

// For example:

// 1 2 3
// 4 5 6
// 7 8 9

// Output:

// 1 2 3 6 9 8 7 4
// 🧠 Hints

// Break the problem into four boundaries:

// Top row → left to right
// Right column → top to bottom
// Bottom row → right to left
// Left column → bottom to top

// Think about the indexes carefully.

// ⚠️ Important

// Don't accidentally print corner elements twice.

// For example, if you print the top row including 4, then when printing the right column, don't print 4 again.

// Start by writing the top row and right column portions yourself. Then add the bottom and left boundaries.


#include <iostream>

int main(){

    int row =4;
    int col = 4;
    int arr[row][col]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };

    // int arr[row][col]={
    //     {1,5,3,4}
    // };

    // int arr[row][col]={
    //     {1},
    //     {2},
    //     {3},
    //     {4}
    // };

    // int row =3;
    // int col = 3;
    // int arr[row][col]={
    //     {1,2,3},
    //     {4,5,6},
    //     {7,8,9}
    // };

    if(row ==1){
        for(int i=0;i<col;i++){
            std::cout<<arr[0][i]<<" ";
        }
    }else if(col==1){
        for(int i=0;i<row;i++){
            std::cout<<arr[i][0]<<" ";
        }
    }else{

            //print top row from left two right
    for(int i=0;i<col;i++){
        std::cout<<arr[0][i]<<" ";
    }

    //right side column from top to bottom

    for(int i=1;i<row;i++){
        std::cout<<arr[i][col-1]<<" ";
    }

    //bottom side from right to left
    for(int  i= col-2;i>=0;i--){
        std::cout<<arr[row-1][i]<<" ";
    }

    //ledt side form bottom to top
    for(int i= row-2;i>0;i--){
        std::cout<<arr[i][0]<<" ";
    }
    }



    return 0;
}