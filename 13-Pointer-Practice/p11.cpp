// 🏆 Day 13 Challenge — Reverse an Array Using Pointers

// Given:

// int arr[6] = {10, 20, 30, 40, 50, 60};

// Reverse the array in-place using two pointers.

// Expected:

// 60 50 40 30 20 10
// Hint

// Think of:

// int* left = arr;
// int* right = arr + 5;

// Then:

// left → first element
// right → last element

// Swap the values:

// int temp = *left;
// *left = *right;
// *right = temp;

// Then move:

// left++;
// right--;

// Continue until the pointers meet or cross.

// #include <iostream>

// int main(){

//     int arr[6]= {10,20,30,40,50,60};

//     int* ptr = arr;

//     for(int i = 0;i<3;i++){
//         int temp =*(ptr+i);
//         *(ptr+i) = *(ptr+5-i);
//         *(ptr+5-i) = temp;

//     }

//     std::cout<<"Output: ";
//     for(int i=0;i<6;i++){
//         std::cout<<*(ptr+i)<<",";
//     }



//     return 0; 
// }



#include <iostream>

int main(){

    int arr[6]= {10,20,30,40,50,60};

    int* left = arr;
    int* right = arr+5;

    while(left<right){
        int temp = *left;
        *left = *right;
        *right = temp;
        left++;
        right--;
    }

    std::cout<<"Output: ";
    for(int i=0;i<6;i++){
        std::cout<<arr[i]<<",";
    }



    return 0; 
}