// Q14. Count Even Numbers
// int countEven(int arr[], int size)

#include <iostream>

int countEven(int arr[], int n){
    int coun = 0;

    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            coun++;
        }
    }

    return coun;

}

int main(){

    int arr[]={4,2,1,7,9,3,5,1,2,12,10};
    int size = sizeof(arr)/sizeof(arr[0]);


    int evenCount = countEven(arr,size);

    std::cout<<"Event count:: "<<evenCount;
    
    return 0;
}