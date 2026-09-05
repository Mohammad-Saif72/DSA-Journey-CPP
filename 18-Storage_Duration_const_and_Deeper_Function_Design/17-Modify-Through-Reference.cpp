// Q17. Modify Through Reference

// Write:

// void makePositive(std::vector<int>& arr)

// Convert every negative number into positive.

// Example:

// {-5, 2, -10, 7}

// becomes:

// {5, 2, 10, 7}

// Do not return a new vector.


#include <iostream>
#include <vector>

void makePositive(std::vector<int>& arr){
    for(int i=0;i<arr.size();i++){
        if(arr[i]<0){
            arr[i]= -1*arr[i];
        }
    }
}


int main(){

    std::vector<int> arr = {-5,2,-10,7};
    makePositive(arr);
    for(int x: arr){
        std::cout<<x<<" ";
    }
    return 0;
}