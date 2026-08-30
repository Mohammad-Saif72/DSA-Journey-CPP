// Problem 8 — Count Words ⭐⭐⭐

// Input:

// I am learning DSA

// Output:

// Words: 4

// This will force you to think about spaces and transitions between characters.


#include <iostream>
#include <string>

int main(){

    std::string s;
    std::cout<<"Enter the String: ";
    std::getline(std::cin, s);

    int count = 1;
    for(int i=0; i<s.length(); i++){
        if(s[i]==' '){
            count++;
        }
    }

    std::cout<<"Output: \n Words: "<<count;

    return 0;
}