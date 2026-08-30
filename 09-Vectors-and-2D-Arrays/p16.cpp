// 🔥 Problem 16 — Pair With Given Sum

// Given a vector and a target value, determine whether any two different elements add up to the target.

// Example 1
// arr = [2, 7, 11, 15]
// target = 9

// Output:

// Yes

// because:

// 2 + 7 = 9
// Example 2
// arr = [2, 7, 11, 15]
// target = 20

// Output:

// No

// because no two elements sum to 20.

// Example 3
// arr = [3, 8, 4, 6, 2]
// target = 10

// Output:

// Yes

// because:

// 4 + 6 = 10
// Constraints for this version

// Don't use:

// set
// unordered_set
// unordered_map
// sorting

// Use only the concepts you've learned so far.

// 🎯 Your task

// Write the program and also tell me:

// Time complexity
// Space complexity

// Start with the straightforward approach. Don't worry about optimizing it yet — after you solve it, we'll discuss how this same problem can be improved.

#include<iostream>
#include<vector>

int main(){
    std::vector <int> arr = {2, 7, 11, 15};

    int n;
    std::cout<<"Enter Target: ";
    std::cin>>n;
    bool status = false;
    for(int  i =0;i<arr.size();i++){
        for(int j =0;j<arr.size();j++){
            if(n-arr[i]==arr[j] && i!=j){
                status = true;
                break;
            }
        }
    }

    if(status){
        std::cout<<"Yes";
    }else{
        std::cout<<"No";
    }

    return 0;
}