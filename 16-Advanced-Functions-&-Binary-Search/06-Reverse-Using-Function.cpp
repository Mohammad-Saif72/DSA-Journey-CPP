// Q6. Reverse Using Function

// Write:

// void reverseArray(int arr[], int n)

// You have solved reversal before, so focus on making it a clean reusable function.



#include <iostream>

void reverseArray(int arr[],int n){

    int left = 0;
    int right = n-1;

    while(left<right){
        int temp =arr[left];
        arr[left] = arr[right];
        arr[right]= temp;
        left++;
        right--;
    }
}

int main(){

    int arr[] ={5,8,3,14,52,4,6};
    int n = sizeof(arr)/sizeof(arr[0]);

     reverseArray(arr,n);


    for(int i=0;i<n;i++){
        std::cout<<arr[i]<<",";
    }


    return 0;
}