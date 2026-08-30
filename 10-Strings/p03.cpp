// Problem 3 — Count Vowels and Consonants

// Given a string containing alphabetic characters, count:

// Vowels
// Consonants

// Example:

// Input: programming

// Vowels: 3
// Consonants: 9


#include<iostream>
#include<string>

int main(){
    std::string s;
    std::cout<<"Enter String: ";
    std::cin>>s;

    int vowels = 0;
    int consonants = 0;
    std::cout<<"string length: "<<s.length()<<"\n";

    for(int i=0;i<s.length();i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'|| s[i]=='o'|| s[i]=='u'){
            vowels++;
        }else{
            consonants++;
        }
    }

    std::cout<<vowels<< "   "<<consonants;
    return 0;
}