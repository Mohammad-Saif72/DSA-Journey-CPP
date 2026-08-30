// Problem 4 — Voting Eligibility

// Take age as input.

// Rules:

// age >= 18 → Eligible
// age < 18  → Not eligible

#include <iostream>

int main(){
    int age;
    std::cout<<"Enter age: ";
    std::cin>>age;

    if(age>=18){
        std::cout<<"Eligible For Vote"<<"\n";
    }
    else{
        std::cout<<"Not Eligible For Vote"<<"\n";
    }
    return 0;
}