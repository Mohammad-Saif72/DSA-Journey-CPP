// Q5. Find maximum of two numbers
// int maximum(int a, int b)

// Return the larger number.



#include <iostream>

int max (int a, int b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}


int main(){

    int maxNum = max(5,7);

    std::cout<<maxNum;



    return 0;
}