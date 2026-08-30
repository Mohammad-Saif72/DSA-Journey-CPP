// 🔥 Problem 10 — Right Rotate by One

// Now reverse the direction.

// Given:

// [10, 20, 30, 40, 50]

// produce:

// [50, 10, 20, 30, 40]
// Requirements
// Use std::vector
// In-place
// O(n) time
// O(1) extra space
// Don't use std::rotate()
// Don't create another vector




#include <iostream>
#include <vector>

int main(){
    int  n;
    std::cout<<"Input: ";
    std::cin>>n;

    std::vector<int> arr(n);
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }

    int temp=arr[n-1];

    for(int i = n-1;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=temp;

    std::cout<<"Output: ";
    for(int i = 0;i<n;i++){
        std::cout<<arr[i]<<" ";
    }

    return 0;
}