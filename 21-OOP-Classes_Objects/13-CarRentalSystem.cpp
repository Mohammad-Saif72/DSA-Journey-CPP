// 🧠 Final Design Challenge

// Don't code this immediately.

// Q13. Design Before Code

// You are asked to model a Car Rental System.

// A rental car has information such as:

// registration number
// brand
// daily rental price
// number of rental days
// availability

// It can:

// rent
// return
// calculate rental cost
// display information
// First answer these questions:

// A. Which are data members?

// B. Which should be private?

// C. Which behaviors should be public member functions?

// D. What invalid situations should be prevented?

// E. Why is a class better suited here than simply using a struct?

// F. Draw the class design in this form:

// CarRental
// │
// ├── HAS
// │   ├── ...
// │   ├── ...
// │
// ├── DOES
// │   ├── ...
// │   ├── ...
// │
// └── PROTECTS
//     └── ...

// Then implement it.
 




#include<iostream>
#include<string>

class Car
{
    private:
    double rentPrice;
    int numberofRentDays=0;

    public:
    int registrationNumber;
    std::string brand;
    bool isIssue;

    void setrentPrice(double amt);
    void rent(int rentdays);
    void returnCar();
    void calsulateRentalCost();
    void displayInformtation();

};


void Car::setrentPrice(double amt){
    if(amt>0){
        rentPrice = amt;
    }
}


void Car::displayInformtation(){
    std::cout<<" Brand: "<<brand
    <<"\n Registration Numver:  "<<registrationNumber
    <<"\n RentPrice per day: "<<rentPrice
    <<"\n Is Available: "<<(!isIssue?"Car is Available .":"Not Available ");
}

void Car::rent(int rentdays){
    if(!isIssue){

        if(rentdays>0) {
        numberofRentDays = rentdays;
        std::cout<<"\n*-------------------car Assign-------------------*";
        std::cout<<"\nCar assigned successfully collect your key.";
        isIssue = true;
        }
        
        
    }else{
        std::cout<<"Already occupied. Try another car.";
    }
}


void Car::calsulateRentalCost(){
    std::cout<<"\nTotal rent for your car is: "<<numberofRentDays*rentPrice;
}

void Car::returnCar(){
    if(isIssue){
        isIssue = false;
        numberofRentDays = 0;
        std::cout<<"\nCar returned Successfully.Thank you!";
    }
};


int main(){


    Car c1 ;

    c1.brand = "BMW";
    c1.registrationNumber = 1234;
    c1.isIssue = false;
    c1.setrentPrice(2500);


    c1.displayInformtation();

    c1.rent(5);

    c1.calsulateRentalCost();
    c1.returnCar();

    return 0;
}
