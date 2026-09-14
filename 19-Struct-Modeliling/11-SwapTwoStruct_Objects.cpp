// Q11. Swap Two Struct Objects

// Create:

// struct Point {
//     int x;
//     int y;
// };

// Write:

// void swapPoints(Point& a, Point& b);

// Swap the complete points.

// Example:

// a = (1, 2)
// b = (10, 20)

// After:

// a = (10, 20)
// b = (1, 2)

// Do not use separate global variables.


#include <iostream>


struct Point{
    int x;
    int y;
};


void swapPoints(Point& a,Point& b){
    int temp = a.x;
    a.x = b.x;
    b.x = temp;
    temp = a.y;
    a.y = b.y;
    b.y = temp;
}

int main(){

    Point a = {1,2};
    Point b = {10,20};


    swapPoints(a,b);


    std::cout<<"a: x ="<<a.x<<"     y ="<<a.y<<"\n";
    std::cout<<"b: x ="<<b.x<<"      y ="<<b.y<<"\n";


    return 0;
}

