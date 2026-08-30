// Q13. Find Minimum
// int findMinimum(int arr[], int size)


#include <iostream>

int findMinimum (int arr[],int size){
    int min = arr[0];

    for(int i =0;i<size;i++){
        if(min>arr[i]){
            min = arr[i];
        }
    }

    return min;
}


int main (){
 
    int arr[]={5,8,3,4,9,6,2};
    int size = sizeof(arr)/sizeof(arr[0]);

    int min = findMinimum(arr,size);

    std::cout<<"Minimun Element: "<<min;
    
    return 0;
}