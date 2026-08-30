// Problem 1 — Character Count

// Take a string and count the total number of characters.

// Example:

// Input:  hello
// Output: 5


#include <iostream>
#include <string>

int main(){
    std::string s;

    // std::cin>>s;//it will not take string after space

    std::cout<<"Enter String: ";
    std::getline(std::cin,s);

    int length = s.length();
    std::cout<<"Output: "<<length;
    return 0;

}