// 🔥 Problem 10 — Day 11 Final Challenge

// This one combines several concepts you've learned.

// Most Frequent Character

// Given a string containing lowercase letters, find the character with the highest frequency.

// Example
// Input:
// programming

// Output:
// Character: r
// Frequency: 2

// But notice something important:

// programming

// actually has multiple characters with frequency 2.

// So establish this rule:

// If multiple characters have the same highest frequency, return the character that appears first in the original string.

// Therefore, for:

// programming

// you need to determine the correct first-occurring character among the tied characters.

// Another example
// Input:
// aabbcc

// Output:
// Character: a
// Frequency: 2

// because a, b, and c all occur twice, but a appears first.

// Target

// Try for:

// O(n)

// time and:

// O(26)

// extra space.


#include<iostream>
#include<string>

int main(){
    std::string s;
    std::cout<<"Enter String: ";
    std::cin>>s;

    int arr[26]={0};

    for(int i=0;i<s.length();i++){
        arr[s[i]-'a']++;
    }

    int max = 0;
    char letter=' ';
    for(int i=0;i<s.length();i++){
        if(arr[s[i]-'a']>max){
            max = arr[s[i]-'a'];
            letter = s[i];
        }
    }

    std::cout<<"Output:\nCharacter: "<<letter<<"\nfrequency: "<<max;


    return 0;
}