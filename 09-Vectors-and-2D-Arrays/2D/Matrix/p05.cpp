// 🔥 Problem 5 — Main Diagonal

// Now we're moving into an important matrix pattern.

// Consider:

// 1  2  3
// 4  5  6
// 7  8  9

// The main diagonal is:

// 1
//    5
//       9

// So:

// Main diagonal = 1, 5, 9
// Sum = 15
// Your task

// Given a square matrix, print its main diagonal and calculate its sum.

// For example:

// Input matrix:

// 4  8  2
// 3  5  7
// 9  1  6

// Expected:

// Main diagonal: 4 5 6
// Sum = 15
// 🧠 Important hint

// Look carefully at the positions:

// arr[0][0]
// arr[1][1]
// arr[2][2]

// What relationship do you see between the two indexes?

// You do not need nested loops for this problem.

// Try to figure out why.


#include<iostream>

int main(){


    int arr[3][3]= {
        {4,8,2},
        {4,5,6},
        {7,8,6}
    };

    int sum = 0;
    std::cout<<"Main diagonal: ";
    for(int i=0;i<3;i++){
        std::cout<<arr[i][i]<<" ";
        sum+= arr[i][i];
    }

    std::cout<<"\nSum = "<<sum;

    return 0;
}