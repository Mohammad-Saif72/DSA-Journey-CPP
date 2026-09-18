// Q2. Rectangle

// Create:

// class Rectangle

// with:

// length
// width

// and a member function:

// double area();

// Create two rectangles with different dimensions and print their areas.

// Edge cases:

// length = 0
// width = 0
// Don't accept negative dimensions if you choose to add validation.



// #include<iostream>

// class Rectangle {
//     public:
//     int length;
//     int width;

//     double area(){
//         if(length==0|| width ==0){
//             return -1;
//         }
//         return length*width;
//     }
// };

// int main(){

//     Rectangle r1;
//     Rectangle r2;

//     r1.length = 5;
//     r1.width = 10;
//     r2.length = 1;
//     r2.width=2;

//     std::cout<<"area of r1: "<<r1.area()<<"\n";
//     std::cout<<"area of r2: "<<r2.area();


//     return 0;
// }




#include<iostream>

class Rectangle {
    public:
    int length;
    int width;

    double area();
};

double Rectangle::area(){
    return length*width;
}

int main(){

    Rectangle r1;
    Rectangle r2;

    r1.length = 5;
    r1.width = 10;
    r2.length = 1;
    r2.width=2;

    std::cout<<"area of r1: "<<r1.area()<<"\n";
    std::cout<<"area of r2: "<<r2.area();


    return 0;
}