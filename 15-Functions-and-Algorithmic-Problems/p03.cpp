// Q3. Check even or odd
// void checkEvenOdd(int n)

// Print whether the number is even or odd.

#include<iostream>

void checkEvenOdd(int n){
    if(n%2==0){
        std::cout<<"Even"<<"\n";
    }else{
        std::cout<<"Odd"<<"\n";
    }
}

int main(){

    checkEvenOdd(3);
    checkEvenOdd(8);
    checkEvenOdd(90);
    checkEvenOdd(3535);
    return 0;
}