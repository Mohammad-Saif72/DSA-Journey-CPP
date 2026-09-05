// Q14.

// A function receives a small char and checks whether it is a vowel.



#include<iostream>

bool vowelCheck(char s){
    if(s=='a'||s=='i'||s=='o'||s=='e'||s=='u'){
        return true;
    }
    return false;
}

int main(){

    char s = 'i';
    std::cout<<vowelCheck(s);
    return 0;
}