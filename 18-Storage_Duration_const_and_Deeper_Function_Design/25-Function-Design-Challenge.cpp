// Q25. Function Design Challenge

// You need to design a function that receives a vector and returns the second largest element.

// Choose the best signature from:

// A
// int secondLargest(std::vector<int> arr)
// B
// int secondLargest(std::vector<int>& arr)
// C
// int secondLargest(const std::vector<int>& arr)

// Choose one and explain:

// Why is it the best choice?
// What is unnecessary or risky about the other two?

#include <iostream>
#include<vector>

int secondLargest(const std::vector<int>& arr){
    int largest = arr[0];
    int secondLargest = INT16_MIN;
    for(int i=1;i<arr.size();i++){
        if(arr[i]>largest){
            secondLargest = largest;
            largest = arr[i];
        }else if(arr[i]>secondLargest){
            secondLargest = arr[i];
        }
    }
    return secondLargest;
}

int main(){

    std::vector <int> arr = {12,5,7,9,3,4,10};
    // std::vector <int> arr = {5,7,9,3,4,10};

    int res  =secondLargest(arr);

    std::cout<<"SecondLargest: "<<res;
    return 0;
}

// int secondLargest(const std::vector<int>& arr) this is the best choise because we only need to read the array ,