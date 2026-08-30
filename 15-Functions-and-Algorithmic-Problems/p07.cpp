// Q7. Minimum of three numbers
// int minimum(int a, int b, int c)



#include <iostream>

int minimum(int a,int b,int c){
    if(a<b && a<c){
        return a;
    }else if(b<a && b<c){
        return b;
    }else{
        return c;
    }
}

int main(){

    int min = minimum(5,8,3);

    std::cout<<"Minimun Number: "<<min;

    return 0;
}