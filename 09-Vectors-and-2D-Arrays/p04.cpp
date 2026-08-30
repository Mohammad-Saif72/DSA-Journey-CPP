// Problem 4 — Add Elements Dynamically

// Start with an empty vector.

// Take n integers and add them using push_back().

// Then take one additional integer and add it to the vector.

// Example:

// Input:
// 4
// 10 20 30 40
// 99

// Output:

// 10 20 30 40 99




#include <iostream>
#include <vector>

int main(){
    int n;
    std::cout<<"Input: \n";
    std::cin>>n;

    std::vector<int> arr(n);

    for(int i = 0;i<n;i++){
        std::cin>>arr[i];
    }

    int otherValue;

    std::cin>>otherValue;

    arr.push_back(otherValue);

    std::cout<<"Output: \n";
    for(int i=0;i<arr.size();i++){
        std::cout<<arr[i]<<" ";
    }

    return 0;
}