// Q22. First Repeating Element
// int firstRepeating(int arr[], int size)

// You already solved similar logic, but now write it as a clean reusable function.



#include <iostream>

int firstRepeating(int arr[],int n){


    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                return arr[i];
            }
        }
    }

    return -1;

}

int main(){

    int arr[]= {5,2,4,3,4,2,8,1,3};
    int size = sizeof(arr)/sizeof(arr[0]);

    int elem = firstRepeating(arr,size);

    std::cout<<"Element: "<<elem;
    return 0;
}