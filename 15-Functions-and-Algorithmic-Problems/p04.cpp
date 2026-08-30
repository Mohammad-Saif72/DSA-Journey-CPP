// Q4. Find square
// int square(int n)

// Return the square.



#include <iostream>

int square(int n){
    int squre = n*n;
    return squre;
}

int main(){

    int res = square(5);

    std::cout<<"Squre: "<<res;

    return 0;
}