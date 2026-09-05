// Q10.

// A function receives a std::vector<int> and reverses the original vector.



#include <iostream>
#include <vector>

void reverse(std::vector<int>& arr){
    int n = arr.size();

    int left = 0;
    int right = n-1;
    while (left<right){
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right]  = temp;
        left++;
        right--;
    }
    
}

int main(){

    std::vector<int> arr = {1,2,3};

    reverse(arr);

    for(int i=0;i<arr.size();i++){
        std::cout<<arr[i]<<" ";
    }
    return 0;
}