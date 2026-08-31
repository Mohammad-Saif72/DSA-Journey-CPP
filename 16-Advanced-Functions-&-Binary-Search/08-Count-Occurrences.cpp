// Q8. Count Occurrences

// Write:

// int countOccurrences(int arr[], int n, int target)

// Example:

// 1 2 3 2 4 2

// target = 2

// Answer = 3






#include<iostream>

int countOccurrences(int arr[],int n,int target){
    int count = 0;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            count++;
        }
    }
    return count;
}

int main(){
    int arr[] ={5,8,3,14,52,4,6,6,3,6,3,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    int target;
    std::cout<<"Enter the target: ";
    std::cin>>target;

    int occurrence = countOccurrences(arr,n,target);

    std::cout<<"Target: "<<target<<"\nOccurrence:  "<<occurrence;
    return 0;
}

