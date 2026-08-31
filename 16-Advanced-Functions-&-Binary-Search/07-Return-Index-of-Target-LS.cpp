// 🟡 Level 2 — Linear Search
// Q7. Return Index

// Write:

// int linearSearch(int arr[], int n, int target)

// Return:

// index if found
// -1 if not found


#include<iostream>

int linearSearch(int arr[],int n,int target){
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[] ={5,8,3,14,52,4,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    int target;
    std::cout<<"Enter the target: ";
    std::cin>>target;

    int index = linearSearch(arr,n,target);

    std::cout<<"Target found at Index: "<<index;
    return 0;
}

