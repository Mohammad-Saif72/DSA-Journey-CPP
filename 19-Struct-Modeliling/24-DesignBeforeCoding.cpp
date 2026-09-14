// Q24. Design Before Coding

// You are building a simple Library Management System.

// Each book has:

// title
// bookId
// author
// available

// Before writing the full program, answer:

// 1.

// What should the struct look like?

// 2.

// For these functions, choose the correct parameter style:

// printBook(...)
// borrowBook(...)
// findBook(...)
// countAvailableBooks(...)

// Choose between:

// Book
// Book&
// const Book&
// vector<Book>
// vector<Book>&
// const vector<Book>&
// 3.

// For each function, decide whether it should:

// return bool
// return an index
// return a Book
// return void
// modify the original object

// Explain your design decisions.


#include<iostream>
#include<string>
#include<vector>

struct Book {
    int id;
    std::string title;
    std::string author;
    bool isIssued;
};

//Function 1 — Find Book
int findBookById(
    const std::vector<Book>& books,
    int id
){
    if(books.empty())return -1;

    for(int i=0;i<books.size();i++){
        if(books[i].id== id){
            return i;
        }
    }

    //not found
    return -1;
};

//Function 2 — Issue Book
bool issueBook(
    std::vector<Book>& books,
    int id
){
    int index = findBookById(books,id);
    if(index<0){
        return false;
    }
    if(books[index].isIssued){
        return false;
    }

        books[index].isIssued = true;
        return true;
    
};


// Function 3 — Return Book
bool returnBook(
    std::vector<Book>& books,
    int id
){
    int index = findBookById(books,id);

    if(index<0)return false;

    if(!books[index].isIssued){
        return false;
    }else{
        books[index].isIssued = false;
        return true;
    }
};

//Function 4 — Print Book
void printBook(const std::vector<Book>& books){
    if(books.empty()){
        std::cout<<"No books Availabe ...\n";
        return ;
    }

    for(int i=0;i<books.size();i++){
        std::cout<<"Book ID:  "<<books[i].id<<"\n";
        std::cout<<"Book Title:  "<<books[i].title<<"\n";
        std::cout<<"Book Author:  "<<books[i].author<<"\n";
        std::cout<<"Book Issue:   "<<books[i].isIssued<<"\n";
        std::cout<<"----------------------------------------\n";
    }
}



int main(){

std::vector<Book> books = {
    {101, "C++ Basics", "Bjarne", false},
    {102, "DSA", "Striver", true},
    {103, "Operating Systems", "Galvin", false},
    {104, "Computer Networks", "Tanenbaum", false}
};

int index = findBookById(books,103);
std::cout<<"Book Found at: "<<index;


bool status = issueBook(books,104);
std::cout<<"\nIssue book: "<<status<<"\n"<<books[3].isIssued;

bool st2 =returnBook(books,104);
std::cout<<"\nReturn book: "<<st2<<"\n"<<books[3].isIssued;

printBook(books);

std::cout << "\nIssue already issued book: "
          << issueBook(books, 102);

std::cout << "\nReturn already available book: "
          << returnBook(books, 103);

std::cout << "\nIssue non-existing book: "
          << issueBook(books, 999);

std::cout << "\nFind non-existing book: "
          << findBookById(books, 999);

    return 0;
}
