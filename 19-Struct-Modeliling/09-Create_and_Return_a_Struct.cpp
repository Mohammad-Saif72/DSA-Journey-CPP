// Q9. Create and Return a Struct

// Create:

// struct Rectangle {
//     int length;
//     int width;
// };

// Write:

// Rectangle createRectangle(int length, int width);

// The function should return a complete Rectangle.

// Then create one rectangle in main() and print its members.



#include <iostream>


struct Rectangle{
    int length;
    int width;
};

Rectangle createRectangle(int length,int width ){
    Rectangle rectangle;
    rectangle.length = length;
    rectangle.width = width;
    return rectangle;
}



int main(){


    Rectangle r1 = createRectangle(5,10);

    std::cout<<"Length: "<<r1.length<<"\n";
    std::cout<<"width: "<<r1.width;



    return 0;
}