// Q9. Shopping Cart Item

// Create:

// class CartItem

// Data:

// productName
// price
// quantity

// Behavior:

// double calculateTotal();
// void display();
// void updateQuantity(int newQuantity);

// Rules:

// price >= 0
// quantity >= 0

// Example:

// Product: Mouse
// Price: 800
// Quantity: 3

// Total: 2400

// Then update quantity to 5 and display the new total.



#include <iostream>
#include<string>

class CartItem
{


    private:
    int quantity;

    public:
    std::string name;
    double price;
    

    double calculateTotal();
    void display();
    void updateQuantity(int newQuantity);
    
};

void CartItem::updateQuantity(int newQuantity){
    if(newQuantity>=0){
        quantity = newQuantity;
    }
}

void CartItem::display(){
    std::cout<<"Product: "<<name<<"\n"
    <<"Price:  "<<price<<"\n"
    <<"Quantity:  "<<quantity<<"\n";
}

double CartItem::calculateTotal(){
    return price*quantity;
};



int main(){

    CartItem p1;
    p1.name = "Mouse";
    p1.price = 800;
    p1.updateQuantity (3);


    p1.display();
    std::cout<<"Quantity: "<<p1.calculateTotal()<<"\n";


    p1.updateQuantity(5);

    p1.display();\
    std::cout<<"Quantity: "<<p1.calculateTotal()<<"\n";




    return 0;
}



