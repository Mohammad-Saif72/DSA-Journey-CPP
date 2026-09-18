// Q12. Placement-Level Class Design

// Design:

// class Employee

// An employee has:

// id
// name
// basicSalary
// bonus

// It can:

// calculateTotalSalary()
// increaseSalary()
// display()

// Requirements:

// totalSalary = basicSalary + bonus

// increaseSalary() should increase basicSalary.

// Consider:

// Which data should be private?
// Which functions should be public?
// What happens with negative salary?
// What happens with negative bonus?
// Can an employee object modify another employee's private data?
// What is the time complexity of your member functions?


#include<iostream>
#include<string>


class Employee
{
    private:
    double basicSalary;
    double bonus;


    public:
    std::string name;
    int id;

    void setBasicSalary(double amt);
    void setBonus(double amt);
    void calculateTotalSalary();
    void increaseSalary(double amt);
    void  display();

};


void Employee::setBasicSalary(double amt){
    if(amt>0){
        basicSalary = amt;
    }
}

void Employee::setBonus(double amt){
    if(amt>0 ){
          bonus = amt;
    }
  
}


void Employee:: calculateTotalSalary(){
    std::cout<<"\nTotal Salary of "<<name<<":  "<<basicSalary+bonus;
}


void Employee::increaseSalary(double amt){
    if(amt>0 ){
        basicSalary += amt;
    }
}

void Employee::display(){
    std::cout<<"\nName: "<<name
    <<"   ID: "<<id;
}

int main(){

    Employee e1;
    e1.name = "Saif";
    e1.id = 19;

    e1.setBasicSalary(50000);
    e1.setBonus(20000);


    e1.display();

    e1.calculateTotalSalary();
    e1.increaseSalary(5000);
    e1.calculateTotalSalary();
    e1.display();




    return 0;
}

