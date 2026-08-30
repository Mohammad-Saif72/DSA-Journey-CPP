// Problem 7 — Copy Only Even Numbers

// Given a vector, create another vector containing only the even numbers.

// Example:

// Input:
// 8
// 3 8 12 7 5 20 11 6

// Output:

// 8 12 20 6

// Requirements:

// traversal
// condition
// push_back()


#include <iostream>
#include <vector>

int main(){
    int n;
    std::cout<<"Input: ";
    std::cin>>n;

    std::vector<int> arr(n);

    for (int i = 0; i < n; i++){
        std::cin>>arr[i];
    }
    
    std::vector<int> evenArr;
    for(int i = 0;i<arr.size();i++){
        if(arr[i]%2==0){
            evenArr.push_back(arr[i]);
        }
    }

    std::cout<<"Output: ";
    for(int i = 0;i<evenArr.size();i++){
        std::cout<<evenArr[i]<<" ";
    }

    return 0;
}