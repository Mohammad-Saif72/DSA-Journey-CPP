// Q23. Mini Record Processing Problem ⭐

// Create:

// struct Product {
//     std::string name;
//     int id;
//     double price;
//     int quantity;
// };

// Write these functions:

// int findProductIndex(
//     const std::vector<Product>& products,
//     int targetId
// );

// bool updateQuantity(
//     std::vector<Product>& products,
//     int targetId,
//     int newQuantity
// );

// double calculateInventoryValue(
//     const std::vector<Product>& products
// );

// The inventory value is:

// price × quantity

// for every product, summed together.

// This question combines:

// structs
// vectors
// searching
// references
// const references
// return values
// DSA traversal
// clean function design

#include<iostream>
#include<string>
#include<vector>


struct Product {
    std::string name;
    int id;
    double price;
    int quantity;
};


int findProductIndex(
    const std::vector<Product>& products,
    int targetId
){
    if(products.empty()){
        return -1;
    }

    for(int i=0;i<products.size();i++){
        if(products[i].id==targetId){
            return i;
        }
    }
    return -1;
};

bool updateQuantity(
    std::vector<Product>& products,
    int targetId,
    int newQuantity
){
    int index =findProductIndex(products,targetId);
    if(index<0){
        return false;
    }
    products[index].quantity = newQuantity;
    return true;
};

double calculateInventoryValue(
    const std::vector<Product>& products
){
    if(products.empty()){
        return 0;
    }
    double sum = 0;
    for(int i=0;i<products.size();i++){
        sum+= products[i].price*products[i].quantity;
    }

    return sum;
};

int main(){

    std::vector<Product> products = {
    {"Laptop", 101, 55000.00, 5},
    {"Mouse", 102, 800.00, 20},
    {"Keyboard", 103, 1500.00, 10},
    {"Monitor", 104, 12000.00, 8},
    {"Headphones", 105, 2500.00, 15}
};

int index = findProductIndex(products,103);
std::cout<<"FIndByproductIndex: "<<index<<"\n";
bool status =updateQuantity(products,104,2);
std::cout<<"updateQuantity: "<<status;
double inventryValue = calculateInventoryValue(products);

std::cout<<"\nInventry Value: "<<inventryValue;


    return 0;
}

