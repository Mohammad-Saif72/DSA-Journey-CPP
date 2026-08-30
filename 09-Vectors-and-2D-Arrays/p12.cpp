// 🔴 Level 4 — DSA Challenge
// Problem 12 — Remove Duplicates from Sorted Vector

// The input vector is already sorted.

// Example:

// [1, 1, 2, 2, 2, 3, 4, 4]

// Transform it into:

// [1, 2, 3, 4]
// Constraint

// Do it in-place.

// Don't create another vector.

// This should make you think about the two-pointer technique you already encountered with move-zeroes.

#include <iostream>
#include <vector>

int main(){
    std::vector<int> arr = {1, 1, 2, 2, 2, 3, 4, 4};

    int ptr=0;
    for(int i = 1;i<arr.size();i++){
        if(arr[ptr]!=arr[i]){
            ptr++;
            arr[ptr]=arr[i];
        } 
    }

    std::cout<<"Output: ";
    for(int i=0;i<ptr+1;i++){
        std::cout<<arr[i]<<" ";
    }
    return 0;
}