// 🔵 Level 3 — Binary Search

// Use only sorted arrays.

// Q9. Basic Binary Search ⭐

// Write:

// int binarySearch(int arr[], int n, int target)

// Return:

// index if found
// -1 otherwise

// Test with:

// 10 20 30 40 50 60 70 80 90

// Try targets:

// 10
// 50
// 90
// 100


#include <iostream>

int binarySearch(int arr[],int n,int target){

    int left = 0;
    int right = n-1;

    while(left<=right){
        int mid = (left+right)/2;

        if(arr[mid]==target){
            return mid;
        }else if(arr[mid]<target){
            left = mid+1;
        }else{
            right = mid-1;
        }
    }
    return -1;
}

int main(){

    int arr[]={10,20,30,40,50,60,70,80,90};
    int n = sizeof(arr)/sizeof(arr[0]);

    int target;
    std::cout<<"Enter the Teerget element: ";
    std::cin>>target;

    int index = binarySearch(arr,n,target);

    std::cout<<"Target found at index : "<<index;

    return 0;
}
