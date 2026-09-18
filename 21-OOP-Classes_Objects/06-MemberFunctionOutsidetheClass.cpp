// Q6. Member Function Outside the Class

// Create:

// class Product

// with:

// name
// price
// quantity

// Declare these inside the class:

// void display();
// double totalPrice();

// But define both functions outside the class using:

// Product::display()
// Product::totalPrice()

// Example:

// Product: Keyboard
// Price: 1200
// Quantity: 2
// Total: 2400

// Focus: :: and separation of class declaration/function implementation


#include<iostream>
#include<string>


class Product
{
    public:
    std::string name;
    double price;
    int quantity;

    void display();
    double totalPrice();
};

void Product::display(){
    std::cout<<"Name: "<<name
             <<"   Price: "<<price
             <<"   Quantity: "<<quantity<<"\n";
}

double Product::totalPrice(){
    return price*quantity;
}

int main(){


    Product p1;
    Product p2;

    p1.name = "Laptop";
    p1.price = 25000;
    p1.quantity = 3;

    p2.name = "Phone";
    p2.price = 10000;
    p2.quantity = 5;

    p1.display();
    int totalprice = p2.totalPrice();

    std::cout<<"Total Price: "<<totalprice;




    return 0;
}

