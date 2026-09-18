// Q11. ATM Account

// Design:

// class ATMAccount

// Private:

// accountNumber
// balance
// pin

// Public behaviors:

// deposit()
// withdraw()
// checkBalance()
// changePIN()

// Requirements:

// Balance cannot be directly modified.
// Withdrawal requires sufficient balance.
// PIN must satisfy a basic validity rule of your choice.
// checkBalance() should expose the balance without making the variable itself public.

// Design question: Decide which members should be private and which operations should be public.



#include<iostream>
#include<string>

class ATMAccount
{
    private:
    double balance = 0;

    public:
    int accountNumber ;
    int pin;

    void deposit(double amt);
    void withdeaw(double amt);
    void checkBalance();
    void changePin(int p);
};

void ATMAccount::deposit(double amt){
    if(amt>0){
        balance += amt;
    }
}


void ATMAccount::checkBalance(){
    std::cout<<"Balance: "<<balance;
}

void ATMAccount::changePin(int p){
    if(p>99999 &&p<1000000){
        pin = p;
    }
}


void ATMAccount::withdeaw(double amt){
    if(amt>0 && amt<=balance){
        balance-= amt;
    }
}

int main(){

    ATMAccount p1 ;

    p1.accountNumber = 123456789;
    p1.pin = 123456;
    p1.deposit(500);

    p1.checkBalance();

    p1.withdeaw(100);
    p1.changePin(222202);
    p1.checkBalance();




    return 0;
}
