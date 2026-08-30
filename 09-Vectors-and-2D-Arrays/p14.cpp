// 🔥 Problem 14 — Missing Number

// Now let's move into a new DSA pattern.

// You are given n distinct numbers from the range:

// 0 to n

// Exactly one number is missing.

// Example 1
// n = 5
// arr = [0, 1, 2, 4, 5]

// Output:

// Missing: 3
// Example 2
// n = 4
// arr = [3, 0, 1, 4]

// Output:

// Missing: 2
// Constraints

// Try to solve it:

// Without sorting
// Without another vector
// O(n) time
// O(1) extra space
// 🧠 Hint

// Think about the complete range:

// 0 + 1 + 2 + ... + n

// There is a mathematical formula for this sum.

// Then compare it with the sum of the elements actually present.


#include <iostream>
#include <vector>

int main(){
    int n;
    std::cout<<"Enter Number: ";
    std::cin>>n;

    std::vector<int> arr(n);

    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }

    int sum = (n*(n+1))/2;

    int arrSum = 0;
    for(int i=0;i<n;i++){
        arrSum +=arr[i];
    }

    int missing = sum-arrSum;

    std::cout<<"Missing: "<<missing;
    return 0;
}