// Q21. Is Sorted?

// Write:

// bool isSorted(const std::vector<int>& arr)

// Return:

// true

// if the array is sorted in non-decreasing order.

// Examples:

// {1, 2, 2, 5, 10} → true
// {1, 5, 3, 7} → false

// Do not modify or copy the vector.


#include <iostream>
#include<vector>

bool isSorted(const std::vector<int>& arr){
    for(int i = 0; i<arr.size()-1;i++){
        if(arr[i]>arr[i+1]){
            return false;
        }
    }
    return true;
}


int main(){

    std::vector<int> arr = {1, 2, 2, 5, 10};

    bool res = isSorted(arr);

    std::cout<<std::boolalpha <<res;

    return 0;
}

