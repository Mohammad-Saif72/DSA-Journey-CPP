// Q12. Find Maximum
// int findMaximum(int arr[], int size)


#include <iostream>

int findMaximum (int arr[],int size){
    int max= arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}


int main(){

    int arr[]={1,5,9,7,6,3};
    int size = sizeof(arr)/sizeof(arr[0]);

    int max = findMaximum(arr,size);

    std::cout<<"MaxElement: "<<max;

    return 0;
}