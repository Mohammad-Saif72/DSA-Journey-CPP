// Q11. First Occurrence ⭐⭐

// Sorted array:

// 1 2 2 2 3 4 5

// Target:

// 2

// Answer:

// 1

// Do not worry if this feels difficult. Think:

// When I find the target, should I immediately stop, or should I continue searching on the left?


#include <iostream>


int firstOccurrence(int arr[],int n,int target){

    int left = 0;
    int right =n-1;

    int minIndex=INT16_MAX;
    while(left<=right){
        int mid = (left+right)/2;
        
        if(arr[mid]==target){
            minIndex=mid;
            right = mid-1;
            
        }else if(arr[mid]>target){
            right = mid-1;
        }else{
            left = mid+1;
        }
    }

    return minIndex;
}



int main(){

    int arr[] ={1,2,2,2,3,4,5};

    int n = sizeof(arr)/sizeof(arr[0]);

    int target;
    std::cout <<"Enter tearget: ";
    std::cin>>target;

    int res = firstOccurrence(arr,n,target);

    std::cout<<"Target First Occurrence is : "<<res;


    return 0;
}