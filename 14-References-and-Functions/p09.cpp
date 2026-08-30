// Q9. Find Larger Number Using Pointers

// Write:

// void increaseLarger(int* a, int* b)

// Increase the larger number by 20.

// Example:

// a = 30
// b = 50

// After:
// a = 30
// b = 70


#include <iostream>



void findLarge(int* a, int* b){

    if(*a>*b){
        *a = *a+20;
    }else{
        *b =*b+20;
    }

    std::cout<<"in  find function: a= "<<*a<<" b= "<<*b<<"\n";

}

int main(){

    int a = 30;
    int  b = 50;

    findLarge(&a,&b);


 std::cout<<"in main function: a= "<<a<<" b= "<<b<<"\n";



    return 0;
}