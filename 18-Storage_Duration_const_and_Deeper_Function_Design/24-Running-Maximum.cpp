// Q24. Running Maximum

// Write:

// std::vector<int> runningMaximum(
//     const std::vector<int>& arr
// )

// Example:

// {3, 1, 4, 2, 5}

// should return:

// {3, 3, 4, 4, 5}

// Think carefully about function design:

// Should the input be modified?
// Should the function return a new vector?
// Why is const std::vector<int>& appropriate for the input?
// beccause modification needed in actual array



#include<iostream>
#include <vector>

void runningMaximum(std::vector<int>& arr){
    int max = arr[0];
    for(int i=1;i<arr.size();i++){
        if(arr[i]>max){
            max = arr[i];
        }else{
            arr[i]=max;
        }
    }
}

int main(){

    std::vector <int> arr = {3, 1, 4, 2, 5};

    runningMaximum(arr);
    for(int x: arr){
        std::cout<<x<<" ";
    }

    return 0;
}