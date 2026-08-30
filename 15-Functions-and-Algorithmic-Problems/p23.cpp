// ⚔️ Day 15 Final Challenge — Function-Based Array Toolkit

// Create multiple functions:

// int findSum(int arr[], int size);

// int findMaximum(int arr[], int size);

// int findMinimum(int arr[], int size);

// int linearSearch(int arr[], int size, int target);

// bool isSorted(int arr[], int size);

// void reverseArray(int arr[], int size);

// Then your main() should look clean:

// int main(){

//     int arr[] = {10, 5, 20, 8, 15};

//     int size = 5;

//     std::cout << findSum(arr, size) << "\n";
//     std::cout << findMaximum(arr, size) << "\n";
//     std::cout << findMinimum(arr, size) << "\n";

//     reverseArray(arr, size);

// }

// This is the real purpose of Day 15: learning to take the logic you already know and organize it into reusable functions. The roadmap specifically introduces functions, return types, parameters, and breaking programs into smaller reusable blocks at Day 15–16.

#include <iostream>
int findSum(int arr[],int n){
    int sum = 0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }

    return sum;
}

int findMaximum(int arr[],int n){
    int max = arr[0];

    for(int i=1;i<n;i++){
        if(max<arr[i]){
            max = arr[i];
        }
        
    }
    return max;
}

int findMinimum(int arr[],int n){
    int min = arr[0];

    for(int i=1;i<n;i++){
        if(min>arr[i]){
            min = arr[i];
        }
    }

    return min;
}


void reverseArray(int arr[],int n){

    int left = 0;
    int right = n-1;
    while(left<right){
        int temp = arr[left];
        arr[left]=arr[right];
        arr[right]= temp;
        left++;
        right--;
    }

    for(int i=0;i<n;i++){
        std::cout<<arr[i]<<",";
    }
}

int main(){

    int arr[] = {10, 5, 20, 8, 15};

    int size = 5;

    std::cout << "Sum: "<<findSum(arr, size) << "\n";
    std::cout <<"Max Element: "<< findMaximum(arr, size) << "\n";
    std::cout << "Min lelement: "<<findMinimum(arr, size) << "\n";

    reverseArray(arr, size);


    return 0;
}