// 🔥 Problem 6 — Secondary Diagonal

// Now let's do the other important diagonal.

// Given:

// 1  2  3
// 4  5  6
// 7  8  9

// The secondary diagonal is:

//       3
//    5
// 7

// So:

// Secondary diagonal = 3 5 7
// Sum = 15
// Your task

// For:

// 4  8  2
// 3  5  7
// 9  1  6

// print:

// Secondary diagonal: 2 5 9
// Sum = 16
// 🧠 Hint

// You already discovered:

// arr[i][i]

// for the main diagonal.

// Now look at the column indexes of the secondary diagonal:

// arr[0][2]
// arr[1][1]
// arr[2][0]

// Notice what happens to the column index as i increases?

// Find the relationship yourself and write the code.


#include <iostream>

int main (){

    int arr[3][3]={
        {4,8,2},
        {3,5,7},
        {9,1,6}
    };

    int sum = 0;

    std::cout<<"Secondary diagonal: ";
    for(int i=0;i<3;i++){
        std::cout<<arr[i][2-i]<<" ";
        sum+= arr[i][2-i];
    }

    std::cout<<"\nSum = "<<sum;
    return 0;
}