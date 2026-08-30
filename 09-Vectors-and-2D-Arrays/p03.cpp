// Problem 3 — pop_back()

// Take n integers into a vector.

// Print the original vector.
// Remove the last element using pop_back().
// Print the vector after removal.
// Print the new size.

// Example:

// Input:
// 5
// 10 20 30 40 50


// Output:
// Original: 10 20 30 40 50
// After pop_back: 10 20 30 40
// Size: 4

// Must use: pop_back(), size().



#include <iostream>
#include <vector>

int main(){
    int n;
    std::cout<<"Input: ";
    std::cin>>n;

    std::vector<int> arr;
    for(int i=0;i<n;i++){
        int x;
        std::cin>>x;
        arr.push_back(x);
    }

    std::cout<<"Output: "<<"\nOriginal: ";

    for(int i = 0;i<n;i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<"\nAfter pop_back:  ";
    arr.pop_back();  //it remove last element from the vector
    for(int i=0;i<arr.size();i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<"\nSize: "<<arr.size();
    return 0;
}