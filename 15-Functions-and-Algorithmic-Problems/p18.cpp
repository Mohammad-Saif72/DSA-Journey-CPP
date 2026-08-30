// 🔴 Level 4 — Real DSA + Functions

// Now we start mixing your existing knowledge with more algorithmic thinking.

// Q18. Reverse an Array
// void reverseArray(int arr[], int size)

// Important: modify the original array.



#include <iostream>

void reverseArray(int arr[],int n){
    int left = 0;
    int right = n-1;

    while(left<right){
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right]= temp;
        left++;
        right--;
    }
}

int main(){

    int arr[]={5,7,9,3,1,2,4,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    reverseArray(arr,n);

    for(int i=0;i<n;i++){
        std::cout<<arr[i]<<",";
    }

    return 0;
}