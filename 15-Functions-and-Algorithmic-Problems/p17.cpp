// Q17. Find Second Largest
// int secondLargest(int arr[], int size)


#include<iostream>

int secondLargest(int arr[],int n){
    int larggest = arr[0];
    int secondLargest = arr[0];

    for(int i=1;i<n;i++){
        if(arr[i]>larggest){
            secondLargest = larggest;
             larggest = arr[i];
        }
    }

    return secondLargest;

}

int main(){

    int arr[] ={15,5,7,9,3,1,50};

    int size= sizeof(arr)/sizeof(arr[0]);

    int secondLaarge = secondLargest(arr,size);


    std::cout<<"SecondLargest: "<<secondLaarge;
     return 0;
}