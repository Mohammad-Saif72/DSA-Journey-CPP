// Problem 4 — Count Even and Odd

// Given an array, count how many elements are even and how many are odd.

// Example:

// Input:
// 6
// 10 7 8 13 4 9


// Output:
// Even = 3
// Odd = 3

#include <iostream>

int main(){
    int n;
    std::cout<<"Input: \n";
    std::cin>>n;

    int arr[100];
    for(int i = 0;i<n;i++){
        std::cin>>arr[i];
    }

    int evenCount = 0;
    for(int i = 0;i<n;i++){
        if(arr[i]%2==0){
            evenCount++;
        }
    }
    std::cout<<"Output: \n"
    <<"Even = "<<evenCount
    <<"\nOdd = "<<n-evenCount;

    return 0;
}