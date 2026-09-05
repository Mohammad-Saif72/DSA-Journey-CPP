// Q22. Return Index

// Write:

// int linearSearch(const std::vector<int>& arr, int target)

// Return the index of target.

// Return:

// -1

// if not found.

// Then explain why:

// const std::vector<int>& arr

// is better than:

// std::vector<int> arr

// for this problem.


#include <iostream>
#include<vector>


int linearSearch(const std::vector <int>& arr ,int target ){
    for(int i = 0;i<arr.size();i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}


int main(){

    std::vector<int> arr = {1,5,2,8,9};
    int target = 8;

    int res = linearSearch(arr,target);
    std::cout<<"Target found at index : "<<res;

    return 0;
}



// const std::vector<int>& arr this used becouse
// i only need to tervarse the array and do not want to
// copy are modify the array