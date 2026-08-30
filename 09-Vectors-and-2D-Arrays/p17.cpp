// 🔥 Problem 17 — Final Day 9 Challenge

// Let's finish Day 9 with a stronger vector/two-pointer problem.

// Rearrange Positive and Negative Numbers

// Given a vector containing positive and negative numbers, rearrange it so that positive and negative numbers appear alternately.

// Example

// Input:

// [1, 2, -3, -4, 5, -6]

// Possible output:

// [1, -3, 2, -4, 5, -6]

// Another valid arrangement:

// [-3, 1, -4, 2, -6, 5]

// For this problem, any valid alternating arrangement is acceptable.

// Rules
// Use std::vector
// Don't use sort()
// Don't use another vector
// Try to solve it in-place
// Aim for O(n) time
// If there are more positives or negatives, the remaining elements can stay at the end.
// Example with unequal counts
// [1, 2, 3, -4, -5]

// A valid result could be:

// [1, -4, 2, -5, 3]
// 🧠 Hint

// Think about maintaining two positions:

// positive position
// negative position

// But be careful: unlike the previous problems, you're now rearranging two categories simultaneously.


// #include<iostream>
// #include<vector>

// int main(){
//     std::vector <int> arr  = {1, 2, -3, -4, 5, -6};
//     //  std::vector <int> arr  = {1, 2, 3, -4, -5};

//     for(int i=0;i<arr.size();i++){
//         if(i%2==0){
//             if(arr[i]>=0){
//                 continue;
//             }else{
//                 int temp = arr[i];
//                 arr[i] = arr[i+1];
//                 arr[i+1] = temp;
//             }
//         }else{
//             if(arr[i]<0){
//                 continue;
//             }else{
//                 int temp = arr[i];
//                 arr[i]= arr[i+1];
//                 arr[i+1]=temp;
//             }
//         }
//     }

//     for(int i =0;i<arr.size();i++){
//         std::cout<<arr[i]<<" ";
//     }
//     return 0;
// }


#include<iostream>
#include<vector>

int main(){
    std::vector <int> arr  = {1, 2, -3, -4, 5, -6};
    //  std::vector <int> arr  = {1, 2, 3, -4, -5};

    for(int i=0;i<arr.size();i++){
        if(i%2==0){
            if(arr[i]>=0){
                continue;
            }else{
                int k = i+1;
                while(k<arr.size()){
                    if(arr[k]>=0){
                        int temp = arr[i];
                        arr[i]=arr[k];
                        arr[k] = temp;
                        break;
                    }
                    k++;
                }

            }
        }else{
            if(arr[i]<0){
                continue;
            }else{
                int k = i+1;
                while(k<arr.size()){
                    if(arr[k]<0){
                        int temp = arr[i];
                        arr[i]=arr[k];
                        arr[k] =temp;
                        break;
                        
                    }
                    k++;
                }

            }
        }
    }

    for(int i =0;i<arr.size();i++){
        std::cout<<arr[i]<<" ";
    }
    return 0;
}