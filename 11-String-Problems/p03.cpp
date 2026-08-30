// 🟡 Problem 3 — Anagram Check ⭐

// Given two strings, determine whether they are anagrams.

// Two strings are anagrams if they contain the same characters with the same frequencies.

// Example
// String 1:
// listen

// String 2:
// silent

// Output:
// Anagram

// Another:

// String 1:
// hello

// String 2:
// world

// Output:
// Not Anagram
// Think

// You already know how to create:

// int arr[26] = {0};

// Can you use that knowledge for two strings?

// Target complexity
// O(n)

#include <iostream>
#include <string>

int main()
{

    std::string s1, s2;
    std::cout << "Enter Both String ";
    std::cin >> s1 >> s2;

    // find frequency array

    int arr1[26] = {0};
    int arr2[26] = {0};

    if (s1.length() == s2.length())
    {

        bool status = true;
        for (int i = 0; i < s1.length(); i++)
        {
            arr1[s1[i] - 'a']++;
        }

        for (int i = 0; i < s2.length(); i++)
        {
            arr2[s2[i] - 'a']++;
        }

        for(int i=0;i<s1.length();i++){
            if(arr1[s1[i]-'a']!=arr2[s1[i]-'a']){
                status = false;
            }
        }

        if(status){
            std::cout<<"Output: \n"<<"Anagram";
        }else{
            std::cout << "Output: \nNot Anagram";
        }
    }
    else
    {
        std::cout << "Output: \nNot Anagram";
    }

    return 0;
}