// Q15. Linear Search
// int linearSearch(int arr[], int size, int target)

// Return the index or -1.


#include <iostream>

int linearSearch(int arr[], int size,int traget){

    for(int i=0;i<size;i++){
        if(arr[i]==traget){
            return i;
        }else{
            continue;
        }

    }

    return -1;
}


int main(){


    int arr[]={4,2,8,6,4,5,25,12};

    int size = sizeof(arr)/sizeof(arr[0]);

    int target;
    std::cout<<"Enter the Target: ";
    std::cin>>target;

    int index = linearSearch(arr,size,target);

    std::cout<<"Index of target: "<<index;

    return 0;
}