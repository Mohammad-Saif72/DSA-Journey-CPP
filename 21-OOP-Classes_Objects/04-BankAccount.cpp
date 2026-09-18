// 🟡 Level 2 — Member Functions & Access Control
// Q4. Bank Account

// Create:

// class BankAccount

// Private:

// accountNumber
// balance

// Public member functions:

// void deposit(double amount);
// void withdraw(double amount);
// void displayBalance();

// Rules:

// Deposit amount must be positive.
// Withdrawal must be positive.
// Withdrawal cannot exceed balance.
// Balance should not be directly accessible from outside.

// Test with at least two accounts.


#include<iostream>

class BankAccount
{
    private:
    int accountNumber;
    double balance;

    public:
    void setAccountnumber(int account){
        if(account>0 && account <999999999999999){
            accountNumber = account;
        }
    }
    void setBalance(double amt){
        if(amt>0){
            balance = amt;
        }
    }


    void deposit(double amount);
    void withdraw(double amount);
    void displayBalance();

};


void BankAccount::deposit(double amt){
    if(amt>0){
        balance += amt;
    }
}

void BankAccount::withdraw(double amt){
    if(amt>0 && amt<balance){
        balance = balance-amt;
    }
}

void BankAccount::displayBalance(){
    std::cout<<"Account Number: "<<accountNumber
             <<"    Balance: "<<balance<<"\n";
}


int main(){

    BankAccount p1;
    BankAccount p2;

    p1.setAccountnumber(123);
    p1.setBalance(1500);

    p2.setAccountnumber(456);
    p2.setBalance(2000);

    p1.displayBalance();
    p2.displayBalance();


    p1.deposit(500);
    p2.deposit(500);

    std::cout<<"\n--------------------------------------\n";
    p1.displayBalance();
    p2.displayBalance();

    p1.withdraw(1000);
    p2.withdraw(1000);

    p1.displayBalance();
    p2.displayBalance();

    return 0;
}




