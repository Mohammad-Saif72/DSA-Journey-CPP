// Problem 2 — Count a Specific Character

// Input a string and a character.

// Count how many times that character appears.

// Example:

// String: banana
// Character: a

// Output: 3


#include<iostream>
#include<string>

int main(){
    std::string s;
    std::cout<<"Enter string: ";
    std::cin>>s;

    char b ;
    std::cout<<"\nEnter Character: ";
    std::cin>>b;

    int count = 0;
    for(int i= 0;i<s.length();i++){
        if(s[i]==b){
            count++;
        }
    }

    std::cout<<"Output: "<<count;

    return 0;
}