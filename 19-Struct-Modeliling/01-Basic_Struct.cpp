// 🟢 Level 1 — Understanding & Output Prediction
// Q1. Basic Struct

// Consider:

// struct Book {
//     std::string title;
//     int pages;
// };

// Create a Book object named b1.

// Store:

// title = "DSA"
// pages = 500

// Print both members.



#include <iostream>
#include <string>


struct Book{
    std::string title;
    int pages;
};

int main(){

    Book b1;

    // b1.title = "DSA";
    // b1.pages = 500;

    //or
    b1 = {"DSA",500};

    std::cout<<"Title: "<<b1.title <<"\nPages: "<<b1.pages;


    return 0;
}