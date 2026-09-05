// Q18. Return Instead of Global State

// Write a function:

// int findMaximum(const std::vector<int>& arr)

// Requirements:

// No global variable.
// Do not modify the vector.
// Do not copy the vector.
// Return the maximum value.

// Before coding, explain:

// Why is const std::vector<int>& a good choice here?
// Because we didi not want to change any thing from arr and did not wnat to make a copy of arr

#include <iostream>
#include <vector>

int findMaximum(const std::vector<int>& arr){
    int max = arr[0];
    for(int i=0;i<arr.size();i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
};

int main(){

    std::vector <int> arr = {1,5,3,8,7,9,12,6};

    int res = findMaximum(arr);
    std::cout<<res;
    
    return 0;
}