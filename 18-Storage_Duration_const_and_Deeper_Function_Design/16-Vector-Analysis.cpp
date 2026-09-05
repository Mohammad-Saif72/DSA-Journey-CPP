// Q16. Const Array/Vector Analysis

// Write:

// int countEven(const std::vector<int>& arr)

// Requirements:

// Do not modify arr.
// Do not copy the vector.
// Return the number of even elements.

// Test:

// {1, 2, 4, 7, 8, 9}

// Expected:

// 3


#include <iostream>
#include <vector>

int countEven(const std::vector<int>& arr){
    int n = arr.size();

    int count =0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            count++;
        }
    }
    return count;
};

int main(){

    std::vector<int> arr = {1,2,4,7,8,9};

    int res =countEven(arr);

    std::cout<<res;
    
    return 0;
}