// Q19. Compare Two Function Designs

// Implement both:

// Version A
// void doubleValue(int& x)

// Modify the original value.

// Version B
// int doubledValue(int x)

// Return the doubled value without changing the original.

// Then test both with:

// int n = 10;

// Print n after each operation.

// Explain the behavioral difference.




#include <iostream>
void doubledValue(int & x){
    x= x*2;
   std::cout<<x;
};
// int doubledValue(int x){
//     return x*2;
// }

int main(){

 int x = 10;

 doubledValue(x);
//  int res =doubledValue(x);
//  std::cout<<res;
    return 0;
}
