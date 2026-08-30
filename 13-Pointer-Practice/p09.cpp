// Q9 — Modify Every Element

// Given:

// int arr[5] = {1, 2, 3, 4, 5};

// Using only a pointer traversal, multiply every element by 10.

// Expected:

// 10 20 30 40 50

#include <iostream>

int main(){
    int arr[5] = {1,2,3,4,5};
    int* ptr = arr;

    std::cout<<"Output: ";
    for(int i=0;i<5;i++){
        *(ptr +i) = (*(ptr + i)*10);

        std::cout<<*(ptr+i)<<",";
    }




    return 0;

}