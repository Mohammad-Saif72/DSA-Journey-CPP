// Q8. Student Result System

// Create:

// class Student

// Private:

// name
// rollNumber
// marks

// Public functions:

// setDetails()
// calculateGrade()
// displayResult()

// Grade logic:

// 90+     → A
// 80–89   → B
// 70–79   → C
// 60–69   → D
// <60     → F

// Handle invalid marks such as:

// -10
// 105



#include<iostream>
#include<string>


class Student
{
private:
    std::string name;
    int rollNumber;
    int marks ;
public:
 void setDetails(std::string name, int rollNo,int mark);
 void  calculateGrade();
 void displayResult();
};

void Student::setDetails(std::string name1, int rollNo,int mark){
    name = name1;
    rollNumber = rollNo;
    marks = mark;
};

void  Student::calculateGrade(){
    if(marks>0 && marks<101){
        if(marks>=90){
            std::cout<<"A";
            return;
        }else if(marks>=80){
            std::cout<<"B";
            return;
        }else if(marks>=70){
            std::cout<<"C";
            return;
        }else if(marks>=60){
            std::cout<<"D";
            return;
        }else{
            std::cout<<"F";
        }
    }
}


void Student::displayResult(){
    std::cout<<"\nName: "<<name
    <<"\nRoll number: "<<rollNumber;
    std::cout<<"\nMarks "<<marks <<"\n"
    <<"Grade: ";
     calculateGrade();
     std::cout<<"\n";
};


int main(){

    Student s1;
    Student s2;

    s1.setDetails("saif",19,92);
    s2.setDetails("asdx",20,65);

    s1.calculateGrade();
    s1.displayResult();
    s2.calculateGrade();



    return 0;
}


