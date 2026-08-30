// Problem 5 — Insert Multiple Values Dynamically

// Start with an empty vector.

// Take n integers.

// Then repeatedly ask the user for additional values until they enter -1.

// Store every value except -1.

// Example:

// Input:
// 3
// 10 20 30
// 40
// 50
// 60
// -1

// Output:

// 10 20 30 40 50 60

// This tests whether you understand that vector size doesn't need to be known in advance.


#include <iostream>
#include <vector>

int main(){
    int n;
    std::cout<<"Input: ";
    std::cin>>n;

    std::vector<int> arr;

    for(int i=0;i<n;i++){
        int element;
        std::cin>>element;
        arr.push_back(element);
    }

    int newValue;
    std::cin>>newValue;
    while(newValue!=-1){
        arr.push_back(newValue);
        std::cin>>newValue;
    
    }

  
    std::cout<<"Output: ";
    for(int i=0;i<arr.size();i++){
        std::cout<<arr[i]<<" ";
    }

    return 0;
}