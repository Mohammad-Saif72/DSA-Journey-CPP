// Q11.

// A function receives a large std::string and checks whether it is a palindrome without changing it.


#include <iostream>
#include <string>


bool palindromeCheck(const std::string s){
    int n = s.length();
    for(int i = 0;i<n;i++){
        if(s[i]!=s[n-1-i]){
            return false;
        }
    }
    return true;
}


int main(){
    std::string s = "level";

    bool Status = palindromeCheck(s); 

    std::cout<<Status;
    return 0;
}
