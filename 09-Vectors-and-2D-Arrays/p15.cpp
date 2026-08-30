// 🔥 Problem 15 — First Repeating Element

// Now let's increase the difficulty.

// Given a vector, find the first element that repeats, based on the order in which elements first appear.

// Example:

// [5, 3, 4, 3, 2, 5]

// Output:

// 3

// Why?

// 5 appears first, but its repeat occurs later.
// 3 appears next and is the first value encountered whose second occurrence is found.
// Another example
// [1, 2, 3, 4, 2, 5, 3]

// Output:

// 2
// If nothing repeats

// For:

// [1, 2, 3, 4, 5]

// output:

// No repeating element
// Constraints

// For now:

// Use std::vector
// Don't use set
// Don't use unordered_set
// Don't use unordered_map
// Don't sort the vector
// Try to solve using the concepts you currently know
// 🧠 Important hint

// You need to compare elements with other elements.

// Ask yourself:

// If I am currently looking at arr[i], how can I determine whether this value appears again later?

// Think about the nested-loop approach first.

// Don't worry about getting O(n²) here. We're going to discuss how to optimize this problem later.


#include <iostream>
#include<vector>
int main(){
    // std::vector<int> arr = {5, 3, 4, 3, 2, 5};
    std::vector<int> arr = {1, 2, 3, 4, 2, 5, 3};

  int valueIndex=0;
  int recurrentIndex = INT32_MAX;
for(int valueIndex = 0;valueIndex<arr.size();valueIndex++){
     for(int i=valueIndex;i<arr.size();i++){
     if(valueIndex!=i){
        if(arr[valueIndex] == arr[i]){
            recurrentIndex = std::min(recurrentIndex,i);
        }
    }
  }
}


  if(recurrentIndex == INT32_MAX){
    std::cout<<"No repeating element.";
  }else{
     std::cout<<"Output: "<<arr[recurrentIndex];
  }
 

    return 0;
}