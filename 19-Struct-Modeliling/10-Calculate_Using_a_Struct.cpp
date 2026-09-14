// Q10. Calculate Using a Struct

// Using Rectangle, write:

// int calculateArea(const Rectangle& r);

// Return:

// length × width

// Question:

// Why should this function use:

// const Rectangle&

// instead of:

// Rectangle&




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


int area(const Rectangle& r){
      int area = r.length*r.width;
      return area;
}



int main(){


    Rectangle r1 = createRectangle(5,10);

    std::cout<<"Length: "<<r1.length<<"\n";
    std::cout<<"width: "<<r1.width<<"\n";

    int res = area(r1);

    std::cout<<"Area: "<<res;


    return 0;
}
