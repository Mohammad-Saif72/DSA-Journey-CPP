// Q6. Const Reference

// What happens here?

#include <iostream>


struct Student {
    int marks;
};

void update(const Student& s) {
    // s.marks = 100;
}

int main(){

    Student s1 = {80};
    update(s1);
    return 0;
}


//Answer: 
// Will it compile?   no due to const 

// Why is const Student& useful?  when we need to read only data 