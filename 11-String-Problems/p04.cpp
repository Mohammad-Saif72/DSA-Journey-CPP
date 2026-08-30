// 🟡 Problem 4 — Remove Duplicate Characters

// Given a string, remove duplicate characters while preserving the first occurrence order.

// Example
// Input:
// programming

// Output:
// progamin

// Let's verify:

// p → keep
// r → keep
// o → keep
// g → keep
// r → duplicate
// a → keep
// m → keep
// m → duplicate
// i → keep
// n → keep
// g → duplicate

// Another:

// Input:
// aabbccabc

// Output:
// abc
// Important

// Do not sort the string.

// The original order must be maintained.


#include<iostream>
#include <string>

int main(){
    std::string s;
    std::cout<<"Enter the String: ";
    std::cin>>s;

    int arr[26]={0};
    std:: string newString = "";
    for(int i=0;i<s.length();i++){
        if(arr[s[i]-'a']==0){
            arr[s[i]-'a']++;
            newString = newString+s[i];
        }
    }

    std::cout<<"Output: \n"<<newString;

    return 0;
}