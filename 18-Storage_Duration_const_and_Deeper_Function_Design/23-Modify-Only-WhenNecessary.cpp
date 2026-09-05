// Q23. Modify Only When Necessary

// Write:

// void replaceNegativeWithZero(std::vector<int>& arr)

// Example:

// {5, -2, 8, -1, 0}

// becomes:

// {5, 0, 8, 0, 0}

// Question:

// Why would const std::vector<int>& be incorrect here?
//  because const will prevent to modify 

#include <iostream>
#include<vector>


void replaceNegativeWithZero(std::vector<int>& arr){
    for(int i=0;i<arr.size();i++){
        if(arr[i]<0){
            arr[i]= 0;
        }
    }
}

int main(){

    std::vector<int> arr={5, -2, 8, -1, 0};

    replaceNegativeWithZero(arr);

    for(int x: arr){
        std::cout<<x<<" ";
    }
    return 0;
}





