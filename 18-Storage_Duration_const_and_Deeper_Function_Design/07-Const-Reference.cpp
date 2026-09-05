// Q7. Const Reference

// Does this compile?

// void change(const int& x) {
//     x = 50;
// }

// If not, explain exactly why.


// we cannot modify a const


#include<iostream>

void change(const int& x) {
    // x = 50;
}


int main(){

    int x= 40;
    change(x);
    std::cout<<x;
    return 0;
}