// palindromeCheck



#include <iostream>

void reverse(int& x,int& y){
    x =x+y;
    y = x-y;
    x= x-y;
}


int main(){


    int x= 50;
    int y = 60;

    reverse(x,y);

    std::cout<<"X: "<<x<<" y: "<<y;
    return 0;
}