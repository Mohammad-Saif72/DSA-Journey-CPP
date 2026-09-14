// Q8. Update Salary

// Using the same Employee struct, write:

// void increaseSalary(Employee& e, double amount);

// The original employee's salary must change.

// Explain in one sentence why Employee& is appropriate.


#include <iostream>
#include <string>

struct Employee{
    std::string name;
    int id;
    double salary;
};


void increaseSalary(Employee& e,double amt){
    e.salary+= amt;
}


int main(){

    Employee e1={"Saif",19,25000};
    Employee e2 = {"abc",20,20000};


    increaseSalary(e1,5000);
    increaseSalary(e2,4000);

    std::cout<<"E1 Salary: "<<e1.salary<<"\n";
    std::cout<<"E2 Salary: "<<e2.salary<<"\n";


    return 0;
}
