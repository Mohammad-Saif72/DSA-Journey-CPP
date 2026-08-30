// Problem 7 — Remove Spaces ⭐⭐

// Input:

// I love DSA

// Output:

// IloveDSA

// Don't use a built-in string replacement function.

#include <iostream>
#include<string>

int main(){
    std::string s;

    std::cout<<"Enter String: ";
    std::getline(std::cin,s);
    int ptr1=0;
    int ptr2=0;
    int SpaceCount = 0;
    while(ptr2<s.length()){
        if(s[ptr2]!=' '){
            s[ptr1]=s[ptr2];
            if(ptr1!=ptr2){
                s[ptr2]=' ';
            }
            ptr1++;
        }else{
            SpaceCount++;
        }
        
        ptr2++;
    }

    //output
    // int i=0;
    std::cout<<"Output: ";
    // while(s[i]!=' ' && i<s.length()){ 
    //     std::cout<<s[i];
    //     i++;
    // }

    for(int i=0;i<s.length()-SpaceCount;i++){
        std::cout<<s[i];
    }
   
    return 0;
}