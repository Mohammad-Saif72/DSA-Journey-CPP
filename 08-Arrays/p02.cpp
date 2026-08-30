// Problem 2 — Print Array in Reverse

// Take n integers and print them in reverse order.

// Example:

// Input:
// 5
// 10 20 30 40 50


// Output:
// 50 40 30 20 10

// Hint: You don't need another array.

// Think about the indexes carefully.

#include <iostream>

int main(){
    int n;
    std::cout<<"Input: ";
    std::cin>>n;

    int arr[n];

    for(int i = 0;i<n;i++){
        std::cin>>arr[i];
    }
    std::cout<<"Output: \n";
    for(int i=n-1;i>=0;i--){
        std::cout<<arr[i]<<" ";
    }

    return 0;
}