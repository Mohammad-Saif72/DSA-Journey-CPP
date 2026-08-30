// Problem 8 — Reverse a Vector

// Given:

// [10, 20, 30, 40, 50]

// reverse it in-place.

// Expected:

// [50, 40, 30, 20, 10]
// Constraint

// Do not create another vector.

// Think about:

// first ↔ last
// second ↔ second-last
// ...

// This is your first proper vector two-pointer problem.


// #include <iostream>
// #include <vector>

// int main(){
//     std::vector<int> arr = {10,20,30,40,50,60};

//     int temp;

//     int n = arr.size();

//     for(int i = 0;i<(n+1)/2;i++){
//         temp = arr[i];
//         arr[i]=arr[n-i-1];
//         arr[n-i-1]= temp;
//     }

//     std::cout<<"Output: \n";
//     for(int i = 0;i<n;i++){
//         std::cout<<arr[i]<<" ";
//     }
//     return 0;
// }



//using while loop 
#include <iostream>
#include <vector>

int main(){
    int n;
    std::cout<<"Input: ";
    std::cin>>n;

    std::vector<int> arr(n);

    for(int i = 0;i<n;i++){
        std::cin>>arr[i];
    }

    //reverse  using while loop; this will be best for reverse of an array
    int left = 0;
    int right = n-1;
    int temp;
    while(left<=right){
        temp = arr[left];
        arr[left]= arr[right];
        arr[right] = temp;
        left++;
        right--;
    }
    

    std::cout<<"Output: ";
    for(int i = 0;i<n;i++){
        std::cout<<arr[i]<<" ";
    }
    return 0;
}