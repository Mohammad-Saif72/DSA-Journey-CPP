// Q14. Count Even Numbers

// Write:

// int countEven(int arr[], int size)

// Return the number of even elements.

// Example:

// {1, 4, 7, 8, 10}

// Output:
// 3


#include <iostream>

int  counteven (int arr[],int size){
    int count=0;
    for(int i=0;i<size;i++){
    if(arr[i]%2==0){
        count++;
    }
    }

    return count;
}

int main(){

    int arr[]= {1,2,7,8,10};
    int size = sizeof(arr)/sizeof(arr[0]);

    int result = counteven(arr,size);

    std::cout<<"CountEven: "<<result;



    return 0;
}