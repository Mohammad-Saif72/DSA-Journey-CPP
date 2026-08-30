// 🟡 Practice 8 — Average

// Ask the user to enter three marks:

// Enter marks for Subject 1:
// Enter marks for Subject 2:
// Enter marks for Subject 3:

// Calculate the average.

// Example:

// Subject 1: 80
// Subject 2: 70
// Subject 3: 90


// Average: 80

// Think carefully about which data type you should use.

#include <iostream>

int main(){

    double sub1,sub2,sub3;

    std::cout<<"Enter marks for Subject 1:";
    std::cin>>sub1;

    std::cout<<"Enter marks for Subject 2:";
    std::cin>>sub2;

    std::cout<<"Enter marks for Subject 3:";
    std::cin>>sub3;

    //calulate aerage 
    double avg = (sub1+sub2+sub3)/3;

    std::cout<<std::endl<<"Average:"<<avg;
    return 0;
}