// 🟢 Problem 1 — Build a Vector

// Create an empty vector:

// std::vector<int> arr;

// Take n integers from the user.

// Instead of:

// arr[i] = ...

// build the vector using:

// push_back()

// Finally print the vector.

// Example

// Input:

// 5
// 10 20 30 40 50

// Output:

// 10 20 30 40 50
// Constraint

// Do not use a fixed array.

// Use:

// std::vector<int>

#include <iostream>
#include <vector>


int main(){
    int n;
    std::cout<<"Enter Number";
    std::cin>>n;

    std::vector<int> arr(n);  

    for(int i=0;i<n;i++){

        std::cin>>arr[i];
        }

    std::cout<<"Output: ";
    for(int i = 0;i<arr.size();i++){
        std::cout<<arr[i]<<" ";
    }

    return 0;
}





// #include <iostream>
// #include <vector>


// int main(){
//     int n;
//     std::cout<<"Enter Number";
//     std::cin>>n;

//     std::vector<int> arr;  // creates an empty vector whose size can dynamically grow or shrink.

//     for(int i=0;i<n;i++){
//         int x;
//         std::cin>>x;
//         arr.push_back(x);
//     }


//     std::cout<<"Output: ";
//     for(int i = 0;i<arr.size();i++){
//         std::cout<<arr[i]<<" ";
//     }

//     return 0;
// }