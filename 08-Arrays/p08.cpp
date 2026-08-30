// Problem 8 — Linear Search

// Take an array and a target number.

// Determine whether the target exists.

// Example:

// Input:
// 6
// 10 20 30 40 50 60


// Target:
// 40


// Output:
// Found

// If:

// Target:
// 99

// Output:

// Not Found
// 🔥 Important

// This is your first actual searching algorithm.

// The basic idea is:

// Check arr[0]
// Check arr[1]
// Check arr[2]
// ...

// This is called Linear Search.


#include <iostream>

int main(){
    int n;
    std::cout<<"input: \n";
    std::cin>>n;

    int arr[20];
    for(int i = 0;i<n;i++){
        std::cin>>arr[i];
    }

    int target;
    std::cout<<"Target: \n";
    std::cin>>target;

    bool status = 0;
    for(int i =0;i<n;i++){
        if(target==arr[i]){
        status = 1;
        break;
        }
    }
    if(status){
        std::cout<<"Output:\n"<<"Found";
    }else{
         std::cout<<"Output:\n"<<"Not Found";
    }
    
   
    return 0;
}