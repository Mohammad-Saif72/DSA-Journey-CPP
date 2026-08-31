// 🟢 Level 1 — Functions
// Q1. Array Sum

// Write:

// int findSum(int arr[], int n)

// Return the sum.

#include<iostream>

int findSum(int arr[],int n){
    int sum = 0;
    for(int i=0; i<n;i++){
        sum+=arr[i];
    }
    return sum;
}

int main(){

    int arr[]={5,4,9,7,8};
    int size = sizeof(arr)/sizeof(arr[0]);

    int sum = findSum(arr,size);

    std::cout<<"Sum pf Array: "<<sum;
    
    return 0;
}