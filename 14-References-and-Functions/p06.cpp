// Q6. Find and Modify the Larger Number

// Write:

// void makeLarger(int &a, int &b)

// Increase whichever number is larger by 10.

// Example:

// a = 20
// b = 35

// After:
// a = 20
// b = 45



#include <iostream>


void makeLarge(int &a,int &b){
    if(a>b){
        a=a+10;
    }else{
        b = b+10;
    }
    std::cout<<"in make function: a="<<a<<" b="<<b<<"\n";
}
int main(){

    int a= 20;int b= 35;

    makeLarge(a,b);

     std::cout<<"in main function: a="<<a<<" b="<<b<<"\n";

    return 0;
}