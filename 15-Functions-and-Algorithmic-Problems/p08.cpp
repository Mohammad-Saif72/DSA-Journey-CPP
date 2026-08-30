// Q8. Check positive, negative, or zero
// void checkNumber(int n)


#include <iostream>
 void checkNumber(int n){
    if(n>0){
        std::cout<<n<<" is a positive number."<<"\n";
    }else if(n<0){
        std::cout<<n<<" is a negative number."<<"\n";

    }else{
        std::cout<<n<<" is a Zero."<<"\n";
    }
 };

int main(){


    checkNumber(8);
    checkNumber(-5);
    checkNumber(-5*-76);
    checkNumber(0);

    
    return 0;
}