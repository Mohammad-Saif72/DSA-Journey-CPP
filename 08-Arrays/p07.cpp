// Problem 7 — Count Positive, Negative and Zero

// Given an array, count:

// Positive numbers
// Negative numbers
// Zeros

// Example:

// Input:
// 8
// 10 -5 0 7 -2 0 15 -9


// Output:
// Positive = 3
// Negative = 3
// Zero = 2

#include <iostream>

int main(){
    int n;
    std::cout<<"Input: \n";
    std::cin>>n;

    int arr[20];
    for(int i = 0;i<n;i++){
        std::cin>>arr[i];
    }

    int positive=0;
    int negative = 0;
    int zero = 0;
    for(int i = 0; i<n;i++){
        if(arr[i]>0){
            positive++;
        }else if(arr[i]<0){
            negative++;
        }else{
            zero++;
        }

    }
    std::cout<<"Output: \n"
    <<"Positive = "<<positive
    <<"\nNegative = "<<negative
    <<"\nZero = "<<zero;
    return 0;
}