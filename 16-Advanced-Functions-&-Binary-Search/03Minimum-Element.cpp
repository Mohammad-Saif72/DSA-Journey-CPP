
// Q3. Minimum Element

// Write:

// int findMinimum(int arr[], int n)

// Return the minimum element.


#include <iostream>

int findMinimum(int arr[],int n){
    int min = arr[0];
    for(int i=0;i<n;i++){
        if(min>arr[i]){
            min = arr[i];
        }
    }

    return min;
}

int main(){

    int arr[] ={5,8,3,14,52,4,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    int min = findMinimum(arr,n);


    std::cout<<"min: "<<min;
    return 0;
}