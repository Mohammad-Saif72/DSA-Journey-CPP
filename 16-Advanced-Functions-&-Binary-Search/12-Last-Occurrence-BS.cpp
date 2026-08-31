// Q12. Last Occurrence ⭐⭐

// Same array:

// 1 2 2 2 3 4 5

// Target:

// 2

// Answer:

// 3

// Think:

// After finding the target, continue searching toward the right.



#include <iostream>



int lastoccurrence(int arr[],int n,int t){
    int left = 0;
    int right = n-1;

    int index =-1;

    while(left<=right){
        int mid = (left+right)/2;
        if(arr[mid]==t){
            index = mid;
            left= mid+1;
        }else if(arr[mid]>t){
            right = mid-1;
        }else{
            left = mid+1;
        }
    }

    return index;
}

int main(){

    int arr[]= {1,2,2,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    int target = 5;

    int res = lastoccurrence(arr,n,target);

    std::cout<<"Last occurrence: "<<res;

    return 0;
}