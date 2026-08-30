// 🔴 Problem 8 — Two-Pointer String Problem

// Given a string, determine whether it is a palindrome ignoring spaces.

// For example:

// Input:
// n u r s e s r u n

// should be treated as:

// nursesrun

// Output:

// Palindrome

// Another:

// Input:
// hello world

// Output:
// Not Palindrome
// Requirement

// Use two pointers.

// Don't create another cleaned string if you can avoid it.

// Think:

// left →              ← right

// and skip spaces when necessary.

#include<iostream>
#include<string>

int main(){
    std::string s;
    std::cout<<"Input: ";
    std::getline(std::cin,s);

    int left = 0;
    int right= s.length()-1;

    bool status = true;
    while(left<right){
        if(s[left]==' '){
            left++;
        }else if(s[right]==' '){
          right--;
        }else{
            if(s[left]!=s[right]){
                status = false;
                break;
            }else{
                left++;
                right--;
            }
        }
        
    }

    if(status){
        std::cout<<"Output: \n"<<"Palindrome";
    }else{
        std::cout<<"Output: \n"<<" Not Palindrome";
    }

    


    return 0;
}
