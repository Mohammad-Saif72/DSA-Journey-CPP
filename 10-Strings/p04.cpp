// Problem 4 — Find the Largest Character

// Given a lowercase string, find the lexicographically largest character.

// Example:

// Input: coding

// Output: o

// Hint: Think exactly like finding maximum in an array.

#include <iostream>
#include<string>

int main(){

    std::string n;
    std::cout<<"Enter the String: ";
    std::cin>>n;

    char max ='a';
    for(int i = 0; i<n.length();i++){
        if(n[i]>max){
            max = n[i];
        }
    }

    std::cout<<"Output: "<<max<<" ";

    return 0;
}