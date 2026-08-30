// 🟡 Problem 5 — Longest Word in a Sentence

// Given a sentence, find the longest word.

// Example
// Input:
// I am learning programming

// Output:
// programming

// If two or more words have the same maximum length, return the first one.

// Example:

// Input:
// I love code and java

// Output:
// love

// because love and java both have length 4, but love appears first.

// Constraint

// Don't use stringstream yet.

// Use character traversal and detect spaces yourself.

// This will strengthen your string traversal logic.


#include<iostream>
#include<string>

int main(){

    std::string s;
    std::cout<<"Enter the string: ";
    std::getline(std::cin,s);

    s=s+' ';

    std::string currentWord = "";
    std::string longgestWord= "";

    for(int i=0;i<s.length();i++){
        if(s[i]!=' '){
            currentWord = currentWord+s[i];
        }else{
            if(longgestWord.length()<currentWord.length()){
                longgestWord = currentWord;
                currentWord = "";
            }else{
                currentWord = "";
            }
        }
    }


    std::cout<<"Output: \n"<<longgestWord;


    return 0;
}