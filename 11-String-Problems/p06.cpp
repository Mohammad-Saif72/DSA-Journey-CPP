// 🟡 Problem 6 — Reverse Words in a Sentence ⭐⭐

// Reverse the order of words, not the characters inside each word.

// Example
// Input:
// I love DSA

// Output:
// DSA love I

// Not:

// ASD evol I

// Another:

// Input:
// I am learning C++

// Output:
// C++ learning am I
// Challenge

// Try to do this without using a built-in word-reversal/splitting solution.

// Think about how you can identify:

// word → space → word → space → word

#include <iostream>
#include<string>

int main(){
    std::string s;
    std::cout<<"Enter the string: ";
    std::getline(std::cin,s);

    s=' '+s;

    std:: string word = "";
    std::string sentanceReverse ="";
    for(int i=s.length()-1;i>=0;i--){
        if(s[i]!=' '){
            word = s[i]+word;
        }else{
            sentanceReverse = sentanceReverse+word+" ";
            word = "";
        }
    }

    std::cout<<"Output: \n"<<sentanceReverse;


    return 0;
}
