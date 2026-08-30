// Problem 5 — Reverse a String ⭐

// Input:

// hello

// Output:

// olleh

// Do not use a built-in reverse function.

// Use indexing/loops.

// #include <iostream>
// #include <string>

// int main(){
//     std::string s;
//     std::cout<<"Enter the string: ";
//     std::cin>>s;

//     char temp;
//     for(int i =0; i<(s.length()+1)/2;i++){
//         temp = s[i];
//         s[i] = s[s.length()-i-1];
//         s[s.length()-i-1]  = temp;
//         }

//     for(int  i =0;i<s.length();i++){
//         std::cout<<s[i];
//     }
//     return 0;
// }
// i can solve it using while loop;


#include <iostream>
#include <string>

int main(){
    std::string s;
    std::cout<<"Enter the string: ";
    std::cin>>s;

    char temp;

    int start = 0;
    int end = s.length()-1;

    while(start<end){
        temp = s[start];
        s[start] = s[end];
        s[end]= temp;
        start++;
        end--;
    }

    for(int  i =0;i<s.length();i++){
        std::cout<<s[i];
    }
    return 0;
}