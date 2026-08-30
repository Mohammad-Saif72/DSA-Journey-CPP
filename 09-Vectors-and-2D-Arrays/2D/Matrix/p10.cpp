// 🔥 Problem 10 — Spiral Traversal

// This is the final and hardest problem of our 2D Matrix extension.

// Given:

// 1  2  3  4
// 5  6  7  8
// 9 10 11 12
// 13 14 15 16

// Print the matrix in spiral order:

// 1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10

// Notice what happens:

// → → → →
//       ↓
//       ↓
// ← ← ← ←
// ↑
// → → →
//     ↓
// ← ←
// ↑
// 🧠 Important difference from Problem 9

// Boundary traversal only prints the outer boundary.

// Spiral traversal keeps going inside the matrix after finishing the boundary.

// You need to think about four boundaries that shrink after each traversal:

// top
// bottom
// left
// right

// Initially:

// top    = 0
// bottom = row - 1
// left   = 0
// right  = col - 1

// After printing the top:

// top++;

// After printing the right:

// right--;

// After printing the bottom:

// bottom--;

// After printing the left:

// left++;
// ⚠️ Important

// You must be careful with matrices such as:

// 1 × 5
// 5 × 1
// 2 × 5
// 5 × 2
// 3 × 3
// 4 × 4

// because eventually top, bottom, left, and right can cross.

// Don't try to memorize a solution. Think through the four boundaries and how they shrink.


#include <iostream>

int main(){

    int arr[4][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };



    int row = 4;
    int col = 4;

    int top=0;
    int buttom = row -1;
    int left = 0;
    int right = col-1;

    if(row==1){
        for(int i=0;i<col;i++){
            std::cout<<arr[0][i]<<" ";
        }
    }else if(col ==1){
        for(int i=0;i<row;i++){
            std::cout<<arr[i][0]<<" ";
        }
    }else{

        
    while(top<=buttom && left<=right){
 
    //printing top side from left to right row fixed row = top;
    for(int i=left;i<=right;i++){
        std::cout<<arr[top][i]<<" ";
       
    };
    top++;

    //printing right side ; top to bottom column fixed col = right;
    for(int i=top;i<=buttom;i++){
        std::cout<<arr[i][right]<<" ";
    }
    right--;


    //printing buttom side from roght to left row fixed = buttom
    for(int i = right;i>=left;i-- ){
        std::cout<<arr[buttom][i]<<" ";
    }
    buttom--;

    //printing left side from buttom to top col fixed

    for(int i = buttom;i>=top;i--){
        std::cout<<arr[i][left]<<" ";
    }
    left++;

    }
    }

    return 0;

}