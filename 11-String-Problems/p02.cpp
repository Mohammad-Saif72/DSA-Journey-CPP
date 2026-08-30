// 🟢 Problem 2 — First Repeating Character

// Given a string, find the first character that occurs more than once.

// Example
// Input:
// abcdbea

// Output:
// b

// Why?

// a → appears later
// b → first repeated character

// Another:

// Input:
// abcdef

// Output:
// No repeating character


// #include <iostream>
// #include<string>

// int main(){

//     std::string s;
//     std::cout<<"Enter String: ";
//     std::cin>>s;

//     int arr[26] ={0};

//     for(int i=0;i<s.length();i++){
//         arr[s[i]-'a']++;
//     }


//     bool status = false;
//     char result ;
//     for(int i=0;i<s.length();i++){
//         if(arr[s[i]-'a']>1){
//             status = true;
//             result = s[i];
//             break;

//         }
//     }

//     if(status){
//         std::cout<<"Output: "<<result;
//     }else{
//         std::cout<<"Output: \nNo repeating character";
//     }

//     return 0;
// }


#include <iostream>
#include<string>

int main(){

    std::string s;
    std::cout<<"Enter String: ";
    std::cin>>s;

    int arr[26] ={0};

    for(int i=0;i<s.length();i++){
        arr[s[i]-'a']++;
    }


    bool status = false;
    char result ;
    int min = INT16_MAX;
    for(int i=0;i<s.length();i++){
        if(arr[s[i]-'a']>1){
            status = true;
            min = std::min(min,i);

        }
    }

    result = s[min];
    if(status){
        std::cout<<"Output: "<<result;
    }else{
        std::cout<<"Output: \nNo repeating character";
    }

    return 0;
}