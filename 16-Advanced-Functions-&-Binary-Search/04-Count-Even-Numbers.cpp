// Q4. Count Even Numbers

// Write:

// int countEven(int arr[], int n)

// Example:

// 1 2 3 4 5 6

// Answer = 3


#include <iostream>

int countEven(int arr[],int n){
    int count = 0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            count++;
        }
    }

    return count;
}

int main(){

    int arr[] ={5,8,3,14,52,4,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    int count = countEven(arr,n);


    std::cout<<"Even Number: "<<count;
    return 0;
}