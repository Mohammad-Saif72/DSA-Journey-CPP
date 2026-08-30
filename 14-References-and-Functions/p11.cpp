// Q11. Add Index to Every Element

// Write:

// void addIndex(int arr[], int size)

// Each element should become:

// arr[i] = arr[i] + i;

// Example:

// Before:
// 10 10 10 10

// After:
// 10 11 12 13


#include <iostream>

void addIndex(int arr[],int size){
    for(int i=0;i<size;i++){
        arr[i]=arr[i]+i;
    }
}

int main(){

    int arr[4] = {10,10,10,10};

    int size =sizeof(arr)/sizeof(arr[0]);

    addIndex(arr,size);

    for(int i=0;i<size;i++){
        std::cout<<arr[i]<<",";
    }
    return 0;
}