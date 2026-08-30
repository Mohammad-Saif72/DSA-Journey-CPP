// Problem 6 — Find Minimum

// Find the smallest element.

// Example:

// Input:
// 6
// 12 45 7 89 23 34


// Output:
// 7

// Again, consider negative numbers


#include <iostream>

int main(){
    int n;
    std::cout<<"Input: \n";
    std::cin>>n;

    int arr[50];
    for(int i = 0;i<n;i++){
        std::cin>>arr[i];
    }

    int minElement = arr[0];
    for(int i =1;i<n;i++){
        if(minElement>arr[i]){
            minElement = arr[i];
        }
    }

    std::cout<<"Output: \n"<<minElement;
    
    return 0;
}
