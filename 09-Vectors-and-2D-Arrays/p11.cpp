// 🔥 Problem 11 — Rotate by K Positions

// Now we're going to make the problem significantly more interesting.

// Given:

// arr = [1, 2, 3, 4, 5, 6, 7]
// k = 3

// Perform a left rotation by k positions.

// Expected:

// [4, 5, 6, 7, 1, 2, 3]
// More examples
// [1, 2, 3, 4, 5], k = 2
// → [3, 4, 5, 1, 2]
// [10, 20, 30, 40], k = 1
// → [20, 30, 40, 10]
// [10, 20, 30, 40], k = 4
// → [10, 20, 30, 40]
// ⚠️ Important requirements

// Don't simply call your Problem 9 rotation k times.

// That would be:

// O(n × k)

// We want you to think about a better approach.

// Your target should eventually be:

// Time: O(n)
// Extra space: O(1)
// In-place
// No std::rotate()
// No second vector
// 🧠 Hint — Don't code yet

// Think about this:

// [1 2 3 4 5 6 7]

// For k = 3, we want:

// [4 5 6 7 | 1 2 3]

// There is a split point.

// Ask yourself:

// What is the relationship between k and the position where the array is split?

// ⚠️ One more case

// What if:

// n = 5
// k = 7

// Rotating 7 times is equivalent to rotating:

// 7 % 5

// positions.

// So you should think about:

// k = k % n;

// before designing the algorithm.


#include <iostream>
#include <vector>

int main(){
    int arr[]= {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k;
    std::cout<<"Enter K: ";
    std::cin>>k;

    k= k % n;
    //reverse A 
    int temp;
    for(int i = 0;i<(k+1)/2;i++){
        temp = arr[i];
        arr[i]=arr[k-1-i];
        arr[k-1-i] = temp;
    }

    //reverse B 
    for(int i=k; i<(n+1)/2;i++){
        temp = arr[i];
        arr[i]=arr[n-1-i+k];
        arr[n-1-i+k] = temp;
    }

    //reverse whole array
    for(int i=0;i<(n+1)/2;i++){
        temp = arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i] = temp;
        
    }


    //mow print Output
    std::cout<<"Output: ";
    for(int i =0;i<n;i++){
        std::cout<<arr[i]<<" ";
    }

    return 0;
}