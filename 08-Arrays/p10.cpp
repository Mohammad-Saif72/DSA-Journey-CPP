// Problem 10 — Find Frequency of a Target

// Given:

// Array:
// 2 5 2 8 2 9 5

// Target:

// 2

// Output:

// 2 occurs 3 times

// You should traverse the array and count how many times the target appears.

#include <iostream>


int main(){
   int arr [] = {2,5,2,8,2,9,5};
   int size = sizeof(arr)/sizeof(arr[0]);
   int target;
   std::cout<<"Enter Target: ";
   std::cin>>target;
   int freq=0;
   for(int i = 0;i<size;i++){
    if(arr[i]==target){
        freq++;
    }
   }
   std::cout<<target<<" occurs "<< freq<< " times";
    return 0;
}