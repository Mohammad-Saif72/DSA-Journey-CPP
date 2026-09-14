// Q21. Interval Modeling

// An interval has:

// start
// end

// For example:

// [1, 5]
// [3, 7]
// [10, 15]

// Create:

// struct Interval

// Write a function:

// bool overlaps(
//     const Interval& a,
//     const Interval& b
// );

// Determine whether two intervals overlap.

// Examples:

// [1, 5] and [3, 7] → true

// [1, 5] and [6, 10] → false

// Think carefully about boundary cases such as:

// [1, 5]
// [5, 10]

// Decide whether they overlap based on an inclusive interval interpretation, and document your decision.


#include<iostream>

struct  Interval{
    int start;
    int end;
};


bool overlaps(
    const Interval& a,
    const Interval& b
){
    if(a.start<=b.end && b.start<=a.end ){
        return true;
    }else{
        return false;
    }
};

int main(){
    Interval a = {1,5};
    Interval b = {3,7};
    Interval c = {10,15};


 bool status = overlaps(a,b);


 std::cout<<"Status: "<<status;

 return 0;
}