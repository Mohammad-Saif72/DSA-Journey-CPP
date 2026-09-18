// Q5. Employee Salary

// Create:

// class Employee

// Private:

// name
// salary

// Public:

// void setSalary(double salary);
// double getSalary();
// void display();

// Rules:

// salary < 0 → reject
// salary >= 0 → accept

// Then demonstrate that this is not allowed:

// e1.salary = 50000;

// and that the proper way is through the member function.




#include<iostream>
#include<string>


class Employee
{
    private:
    std::string name;
    double salary;

    public:
    void setSalary(double salary1){
        if(salary1>0){
            salary = salary1;
        }
    };

    void getSalary(){
        std::cout<<"Salary: "<<salary;
    }

    void display(){
        std::cout<<"\nName: "<<name<<"    Salary: "<<salary;
    }
};

int main(){

    Employee e1;
    Employee e2;

    // e1.salary = 50000; it is inaccesible

    e1.setSalary(50000);
    e2.setSalary(70000);

    e1.getSalary();
    e1.display();

    e2.display();


    return 0;
}