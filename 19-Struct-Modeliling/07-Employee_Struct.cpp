// Q7. Employee Struct

// Create:

// struct Employee

// with:

// name
// id
// salary

// Write:

// void printEmployee(const Employee& e);

// Print all employee information.


#include <iostream>
#include <string>


struct Employee{
    std::string name;
    int id;
    int salary;
};



void printEmployee(const Employee& e){
    std::cout<<"Name: "<<e.name<<"   Id: "<<e.id<<"   Salary: "<<e.salary<<"\n";
}

int main(){
    
    Employee e1={"Saif",19,25000};
    Employee e2= {"xyz",20,24000};
    Employee e3 = {"asd",21,20000};

    printEmployee(e1);
    printEmployee(e2);
    printEmployee(e3);

    return 0;
}

