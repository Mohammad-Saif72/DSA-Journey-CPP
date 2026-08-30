// 🟡 Level 2 — Parameters and Return Values
// Q6. Sum of two numbers
// int add(int a, int b)



#include <iostream>

int add(int a,int b){
    return a+b;
}


int main(){

    int sum = add(5,55);

    std::cout<<"Sum: "<<sum;


    return 0;
}