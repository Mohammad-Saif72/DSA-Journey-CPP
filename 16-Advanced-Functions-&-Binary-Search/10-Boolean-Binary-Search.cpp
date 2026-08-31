// Q10. Boolean Binary Search

// Write:

// bool binarySearch(int arr[], int n, int target)

// Return:

// true

// if found, otherwise:

// false



#include <iostream>

bool binarySearch(int arr[],int n,int target){
    int left = 0;
    int right = n-1;

   
    while(left<=right){
        int mid = (left+right)/2;

        if(arr[mid]==target){
            return true;
        }else if(arr[mid]>target){
            right = mid-1;
        }else{
            left = mid+1;
        }
    }

    return false;
}
int main(){

    int arr[]={1,2,4,5,8,9,10,15};
    int n= sizeof(arr)/sizeof(arr[0]);

    int target;
    std::cout<<"Enter target: ";
    std::cin>>target;

    bool status = binarySearch(arr,n,target);

    std::cout<<"Status: "<<std::boolalpha<<status;

    return 0;
}