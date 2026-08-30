// Problem 5 — Grade Calculator

// Take marks and print:

// 90–100 → A
// 80–89  → B
// 70–79  → C
// 60–69  → D
// 40–59  → E
// Below 40 → Fail

// Also think about what should happen if the user enters:

// 105
// -10

// Don't blindly assume the input is valid.

#include <iostream>

int main(){
    int mark;
    std::cout<<"Enter Mark: ";
    std::cin>>mark;

    if(!(mark>100 || mark<0)){
        if(mark<=100 && mark>=90){
            std::cout<<"Grade :A"<<"\n";
        }else if (mark<=89 && mark>=80){
           std::cout<<"Grade :B"<<"\n";
        }else if (mark<=79 && mark>=70){
           std::cout<<"Grade :C"<<"\n";
        }else if (mark<=69 && mark>=60){
           std::cout<<"Grade :D"<<"\n";
        }else if (mark<=59 && mark>=40){
           std::cout<<"Grade :E"<<"\n";
        }else{
            std::cout<<"Grade :Fail"<<"\n";
        }
        
    }else{
        std::cout<<"Enter valid Marks";
    }
    return 0;
}