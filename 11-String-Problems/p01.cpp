// 🟢 Problem 1 — First Non-Repeating Character

// Given a string containing lowercase English letters, find the first character that appears exactly once.

// Example
// Input:
// swiss

// Output:
// w

// Because:

// s → 3
// w → 1
// i → 1

// w is the first character whose frequency is 1.

// Another example
// Input:
// aabbcdde

// Output:
// c

// If no non-repeating character exists:

// Output:
// No non-repeating character

// Requirement: Try to solve it in O(n).



// #include<iostream>
// #include<string>
// #include <vector>

// int main(){

//     std::string s;
//     std::cout<<"Enter String: ";
//     std::cin>>s;

//     int arr[26]={0};

//     for(int i =0;i<s.length();i++){
//         arr[s[i]-'a']++;
//     }

//     std::vector<char> arr1Char;
//     for(int i=0;i<26;i++){
//         if(arr[i]==1){
//             arr1Char.push_back(char('a'+i));
//         }
//     }

//     // std::cout<<"arr1char: ";
//     // for(int i=0;i<arr1Char.size();i++){
//     //     std::cout<<arr1Char[i]<<" ";
//     // }

//     bool gotStatus=false;
//     int ptrString = 0;
//     int n;
//     if(s.length()>arr1Char.size()){
//         n= s.length();
//     }else{
//         n = arr1Char.size();
//     }
//     for(int i=0;i<n;i++){
//         if(s[ptrString]==arr1Char[i%arr1Char.size()]){
//             gotStatus = true;
//             break;
//         }else{
//             ptrString++;
//         }
//     }



//     if(gotStatus){
//         std::cout<<"Output: \n"<<s[ptrString];
//     }else{
//         std::cout<<"Output:\nNo non-repeating character";
//     }
    

//     return 0;
// }




// best solution

#include<iostream>
#include<string>
#include <vector>

int main(){

    std::string s;
    std::cout<<"Enter String: ";
    std::cin>>s;

    int arr[26]={0};

    for(int i =0;i<s.length();i++){
        arr[s[i]-'a']++;
    }
 
    bool gotStatus=false;
    char result;
    for(int i=0;i<s.length();i++){
        if(arr[s[i]-'a']==1){
            gotStatus = true;
            result = s[i];
            break;
        }
    }

    if(gotStatus){
        std::cout<<"Output: \n"<<result;
    }else{
        std::cout<<"Output:\nNo non-repeating character";
    }
    

    return 0;
}