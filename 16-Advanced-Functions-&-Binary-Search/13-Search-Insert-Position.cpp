// 🔥 Day 16 Challenge
// Q13. Search Insert Position

// Given a sorted array:

// 1 3 5 6

// Find the index of the target.

// If it exists:

// target = 5

// Answer = 2

// If it doesn't exist, return the position where it should be inserted to maintain sorted order.

// Example:

// target = 2

// Answer = 1

// Another:

// target = 7

// Answer = 4

// This is your first problem where Binary Search is used not just to find an element, but to determine a position.


#include <iostream>

int insertPosition(int arr[],int n, int t){
    int left =0;
    int right = n-1;
    int index = -1;
    while(left<=right){

        int mid =  (left+right)/2;
        if(arr[mid]==t){
            return mid;
        }else if(arr[mid]>t){
            right = mid-1;
            index = mid;
        }else{
            left = mid+1;
            index = mid+1;
        }
    }

    return index;
}

int main(){

    int arr[]={1,3,5,6};
    int n=4;
    int target;
    std::cin>>target;

    int index = insertPosition(arr,n,target);

    std::cout<<"Index: "<<index;
    return 0;
}