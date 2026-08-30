// Problem 6 — Palindrome String ⭐⭐

// Check whether a string reads the same forward and backward.

// Examples:

// radar → Palindrome
// level → Palindrome
// hello → Not Palindrome

// Try to solve it using the two-pointer idea you learned from arrays:

// left →                 ← right
//  r a d a r

// Compare:

// s[left]
// s[right]

// Then move:

// left++
// right--

// This is a very important connection between your Day 9 array work and strings.

#include<iostream>
#include <string>

int main(){
    std::string s;
    std::cout<<"Enter Stirng: ";
    std::cin>>s;

    int start = 0;
    int end = s.length()-1;
    int mid = (s.length()+1)/2;

    bool status = true;
    for(int i=0;i<mid;i++){
        if(s[i] != s[end-i]){
            status = false;
            break;
        }
    }

    if(status){
        std::cout<<"Palindromme ";
    }else{
        std::cout<<"Not Palindrome";
    }
    return 0;
}