// Q10. Library Book

// Design:

// class Book

// Requirements:

// A book has:

// title
// author
// ISBN
// isIssued

// It can:

// issueBook()
// returnBook()
// displayBook()

// Rules:

// An already-issued book cannot be issued again.
// A book that isn't issued cannot be returned.
// isIssued should not be directly modified from outside.

// Example behavior:

// Book issued successfully.

// Book is already issued.

// Book returned successfully.


#include<iostream>
#include<string>

class Book
{
    private:
    bool isIssued;
    public:
    std::string  title;
    std::string author;
    long long int ISBN;
    


    void setIsIssue(bool status){
        isIssued = status;
    }
   void issueBook();
   void returnBook();
   void displayBook();
};


void Book::displayBook(){
    std::cout<<"Title: "<<title
    <<"\nAuthor: "<<author
    <<"\nISBN: "<<ISBN;
    std::cout<<"\n----------------------------------\n";
}

 void Book::issueBook(){
   std::cout <<"\nIs Issued: "<<(isIssued ? "Book is already issued.":"Book issued successfully.");
    if(!isIssued){
        isIssued =true;
    }
};

void Book::returnBook(){
    if(isIssued){
        std::cout<<"\nBook returned successfully.\n";
        isIssued = false;
    }
}


int main(){

    Book b1;
    Book b2;

    b1.title = "The Hobbit";
    b1.author = "J.R.R. Tolkien";
    b1.ISBN = 9780261102217;
    // b1.isIssued=false;
    b1.setIsIssue(false);

    b2.title = "To Kill";
    b2.author= "xyz";
    b2.ISBN = 123456789123;
    // b2.isIssued = "True";
    b2.setIsIssue(true);


    b1.displayBook();
    b2.displayBook();

    b1.issueBook();
    b1.issueBook();
    b2.issueBook();
    b2.returnBook();
    b2.displayBook();
    b2.issueBook();

    return 0;
}
