// Q21. Missing Number
// int findMissing(int arr[], int size)

// Example:

// 1 2 3 5 6

// ↓

// 4



#include <iostream>

int findMissing(int arr[],int n){
    int lastNumber = arr[n-1];
    int total = (lastNumber*(lastNumber+1))/2;
    std::cout<<"Total: "<<total<<"\n";

    int sum = 0;
    for(int i = 0;i<n;i++){
        sum+=arr[i];
    }

    std::cout<<"Sum ofArray: "<<sum<<"\n";

    return total-sum;
}

int main(){

    int arr[]={1,2,3,5,6};

    int size =sizeof(arr)/sizeof(arr[0]);


    int num = findMissing(arr,size);

    std::cout<<"Miising Number : "<<num<<"\n";

    return 0;
}