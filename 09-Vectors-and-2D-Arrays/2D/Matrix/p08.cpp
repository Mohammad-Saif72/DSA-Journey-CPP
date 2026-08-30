// 🔥 Problem 8 — Search an Element in a Matrix

// Now let's combine what you've learned about:

// 2D traversal
// indexing
// searching
// bool

// Given:

// 1  5  9
// 3  7  2
// 8  4  6

// Take a target from the user and determine whether it exists.

// Example

// Input:

// Target = 7

// Output:

// Found

// For:

// Target = 10

// Output:

// Not Found
// ⭐ Slightly harder requirement

// If the element is found, print its position too.

// For target 7:

// Found at row 1, column 1

// Remember indexing starts at 0.

// 🧠 Hint

// Your Day 8 linear search was essentially:

// if(arr[i] == target)

// Now your element is:

// arr[i][j]

// So you'll need to search through both dimensions.

// Once found, you don't need to keep searching.

#include <iostream>

int main(){

    int arr[3][3]={
        {1,5,9},
        {3,7,2},
        {8,4,6}
    };

    int target;
    std::cout<<"Enter target: ";
    std::cin>>target;

    bool status = false;

    int x;
    int y;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]==target){
                status = true;
                x=i;
                y=j;
                break;
            }
        }
    }

    if(status){
        std::cout<<"Found\n";
        std::cout<<"Found at row "<<x<<", column "<<y;
    }else{
        std::cout<<"Not Found";
    }

    return 0;
}