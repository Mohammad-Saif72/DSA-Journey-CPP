// Q20. Remove Duplicates from a Sorted Array
// int removeDuplicates(int arr[], int size)

// Return the new size.

// Example:

// 1 1 2 2 3 4 4

// ↓

// 1 2 3 4

// New size = 4

#include <iostream>
#include<vector>


int removeDuplicates(int arr[],int size){
    std::vector <int> arrNew;
    int count = 0;
    for(int i=0;i<size-1;i++){

         if(arr[i]!=arr[i+1]){
            arrNew.push_back(arr[i]);
        }
    }

    // at thee end element

    arrNew.push_back(arr[size-1]);

    

    return arrNew.size();
}

int main(){

    int arr[] ={1,1,2,2,3,4,4};
    int size = sizeof(arr)/sizeof(arr[0]);

    int  ans = removeDuplicates(arr,size);

    std::cout<<"Size of new Array:: "<<ans;

    return 0;
}
