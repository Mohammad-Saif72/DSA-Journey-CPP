// Q20. String Design

// Write:

// int countVowels(const std::string& text)

// Requirements:

// Do not modify the string.
// Avoid creating an unnecessary copy.
// Count both uppercase and lowercase vowels.

// Test with:

// "Hello World"


#include <iostream>
#include <string>

int countVowels(const std::string& s){
    int count=0;
    for(int x: s){
        if(x=='a'||x=='e'|| x=='i'|| x=='o'||x=='u'||
        x=='A'||x=='E'|| x=='I'|| x=='O'||x=='U'){
            count++;
        }
    }

    return count;
}

int main(){

    std::string s = "Hello World";

    int res = countVowels(s);
    std::cout<<res;
    
    return 0;
}

