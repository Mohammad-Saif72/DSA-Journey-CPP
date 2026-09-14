// Q18. Find the Lowest Salary

// Create:

// struct Employee {
//     std::string name;
//     int id;
//     double salary;
// };

// Write a function that returns the index of the employee with the lowest salary.

// Handle an empty vector properly.

#include<iostream>
#include<string>
#include<vector>



struct Employee {
    std::string name;
    int id;
    double salary;
};

int indexOfLowestSalaryEmployee(const std::vector<Employee>& emp){

    if(emp.size()==0){
        return -1;
    }else{
        double min = emp[0].salary;
        int index = 0;
        for(int i=1; i<emp.size(); i++){
            if(min>emp[i].salary){
                index = i;
                min = emp[i].salary;
            }
        }

        return index;
    }
}

int main(){

    std::vector<Employee> employeeData = {
        {"saif",19,25000},
        {"ansari",20,30000},
        {"ahamad",21,24000},
        {"mohd",34,87000},
        {"Saif Ansari",36,90000}
    };


    int res_Index = indexOfLowestSalaryEmployee(employeeData);


    std::cout<<"Min Salary index: "<<res_Index;

    return 0;
}