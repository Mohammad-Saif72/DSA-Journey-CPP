// 🔵 Level 3 — Functions + Arrays

// Now the important part.

// Q11. Array Sum
// int findSum(int arr[], int size)


#include <iostream>

int findSum(int arr[],int size){
    int sum = 0;
    for(int i=0;i<size;i++){
        sum = sum+arr[i];
    }

    return sum;
}

int main(){

    int arr[]={5,10,15,20,30,45,65};
    int size = sizeof(arr)/sizeof(arr[0]);

    int sum =findSum(arr,size);


    std::cout<<"Sum: "<<sum;

    return 0;
}