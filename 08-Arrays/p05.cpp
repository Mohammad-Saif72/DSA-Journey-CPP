// Problem 5 — Find Maximum

// Find the largest element in the array.

// Example:

// Input:
// 6
// 12 45 7 89 23 34


// Output:
// 89
// Important

// Don't do:

// int maximum = 0;

// Think about what happens if the array contains:

// -10 -5 -20

// This is an important DSA habit.

#include <iostream>

int main(){
    int n;
    std::cout<<"Input: \n";
    std::cin>>n;

    int arr[50];
    for(int i = 0;i<n;i++){
        std::cin>>arr[i];
    }

    int largElement = arr[0];
    for(int i =1;i<n;i++){
        if(largElement<arr[i]){
            largElement = arr[i];
        }
    }

    std::cout<<"Output: \n"<<largElement;
    
    return 0;
}