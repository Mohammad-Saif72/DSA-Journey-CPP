// Q27. Design a Clean Algorithm Function

// You need to write a function that finds whether a target exists in a vector.

// Design the complete function signature yourself.

// Then explain:

// Return type
// Parameter type
// Why you chose value/reference/const reference
// Whether the input should be modified

#include<iostream>
#include <vector>

int findIndexoftarget(const std::vector <int>& arr,int target){

    for(int i=0;i<arr.size();i++){
        if(arr[i]==target){
            return i;
        }
    }

    return -1;
}


int main(){

    std::vector <int> arr  = {1,5,3,7,8,6,0};
    int target = 0;

    int res = findIndexoftarget(arr,target);

    std::cout<<"Target found at index: "<<res;

    return 0;
}


