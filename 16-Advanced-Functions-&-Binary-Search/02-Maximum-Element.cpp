// Q2. Maximum Element

// Write:

// int findMaximum(int arr[], int n)

// Return the maximum element.

// Do not modify the array.


#include <iostream>

int findMaximum(int arr[],int n){
    int max = arr[0];
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }

    return max;
}

int main(){

    int arr[] ={5,8,3,14,52,4,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    int max = findMaximum(arr,n);


    std::cout<<"max: "<<max;
    return 0;
}