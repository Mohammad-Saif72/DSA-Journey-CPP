// 🔥 Problem 2 — Row Sum

// Now let's use the same matrix but introduce actual matrix DSA logic.

// Given:

// 1  2  3
// 4  5  6
// 7  8  9

// Calculate the sum of each row.

// Expected output:

// Row 0 = 6
// Row 1 = 15
// Row 2 = 24
// Think carefully about the loops

// You already know:

// for(int i = 0; i < row; i++)

// means you're moving through rows.

// For each row, you need to calculate:

// arr[i][0] + arr[i][1] + arr[i][2] + ...

// So you need to reset your sum for every new row.

// Important

// Don't hard-code:

// arr[0][0] + arr[0][1] + arr[0][2]

// Your program should work for any matrix up to 10 × 10.

// Example

// Input:

// 3 4


// 1 2 3 4
// 5 6 7 8
// 9 10 11 12

// Output:

// Row 0 = 10
// Row 1 = 26
// Row 2 = 42


#include<iostream>

int main(){
    int arr[3][3] = 
    {{1,2,3},
    {4,5,6},
    {7,8,9}};

    for(int i=0;i<3;i++){
        int sum =0;
        for(int j=0;j<3;j++){
            sum += arr[i][j];
        }
        std::cout<<"Row "<<i<<" = "<<sum<<"\n";
    }
    return 0;
}