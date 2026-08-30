// 🔥 Day 10 Challenge

// Given a sentence:

// I love programming

// find the frequency of every character.

// Expected conceptually:

// I : 1
// l : 1
// o : 2
// v : 1
// e : 1
// p : 1
// r : 2
// ...

// You don't need to make the output pretty yet. The important part is designing the counting logic

#include <iostream>
#include <string>

int main(){

    std::string s;
    std::cout<<"Enter string: ";
    std::getline(std::cin,s);

    int arr[26] = {0};

    // std::cout<<arr[6];
    
    for(int i = 0;i<s.length();i++){
        arr[s[i]-'a']++;
    }

    for(int  i = 0;i<26;i++){
        if(arr[i]!=0){
            // char c = 'a'+i;
            std::cout<<char('a'+i)<<" : "<<arr[i]<<"\n";
        }
    }



    return 0;
}