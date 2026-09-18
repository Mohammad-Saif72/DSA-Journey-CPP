// Q3. Multiple Objects — Independent Data

// Create:

// class Car

// with:

// brand
// speed

// and:

// void display();

// Create:

// Car c1;
// Car c2;

// Give them different values.

// Then modify only c1.speed.

// Demonstrate that c2.speed remains unchanged.

// Goal: Prove that objects have independent instance data.



#include<iostream>
#include<string>



class  Car
{
    public:
    std::string brand;
    int speed;

    void display(){
        std::cout<<"Brand: "<<brand<<"   Speed: "<<speed<<"\n";
    }
};

int main(){

    Car c1;
    Car c2;

    c1.brand = "BMW";
    c1.speed = 200;

    c2.brand= "TATA";
    c2.speed =150;

    c1.display();
    c2.display();

    // on changing c1 speed
    c1.speed = 300;

    c1.display();
    c2.display();



    return 0;
}