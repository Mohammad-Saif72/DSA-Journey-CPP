// Q16. Check if an Array is Sorted
// bool isSorted(int arr[], int size)

// Example:

// 1 2 3 4 5 → true

// 1 5 3 4 → false


#include <iostream>

bool isSorted(int arr[],int size){
    int status = true;
    for(int i=0;i<size-1;i++){
        if(arr[i]>arr[i+1]){
            status = false;
        }
    }
    return status;
}

int main(){

    // int arr[]={1,2,3,4,5,6};
    int arr []={1 ,5,3,4,8,9};

    int size = sizeof(arr)/sizeof(arr[0]);

    bool status = isSorted(arr,size);

    if(status){
        std::cout<<"True";
    }else{
        std::cout<<"False";
    }
    return 0;
}