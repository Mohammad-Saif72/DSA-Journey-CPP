// 🔴 Problem 7 — String Compression ⭐⭐

// Compress consecutive repeated characters.

// Example
// Input:
// aaabbccccd

// Output:
// a3b2c4d1

// Another:

// Input:
// aabcccccaaa

// Output:
// a2b1c5a3
// Important

// Only consecutive characters count.

// For:

// ababa

// the answer is:

// a1b1a1b1a1

// because the repeated characters are not consecutive.

// Think

// This is basically:

// current character
// +
// count consecutive occurrences

#include<iostream>
#include<string>

int main(){
    std::string s;
    std::cout<<"Enter the String: ";
    std::cin>>s;

    int count = 1;
    std::string newString = "";
    for(int  i =1;i<s.length();i++){
        if(s[i] ==s[i-1]){
            count++;
        }else{
            newString = newString+s[i-1]+std::to_string(count);
            count = 1;
        }
    }
    //edge case for last group
    newString = newString+s[s.length()-1]+std::to_string(count);

    std::cout<<"Output:\n"<<newString;

    return 0;
}


