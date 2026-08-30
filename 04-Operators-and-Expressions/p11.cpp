// Problem 11 — Convert Seconds

// Take a number of seconds and convert it into:

// Hours
// Minutes
// Seconds

// Example:

// Enter seconds: 3665


// Hours: 1
// Minutes: 1
// Seconds: 5
// Hint

// You'll need:

// /
// %

// This is a very good problem for understanding integer division and remainder.


#include <iostream>

int main(){
    int total_seconds;
    int seconds;
    int mins;
    int hours;

    std::cout<<"enter seconds: ";
    std::cin>>total_seconds;

   hours = (total_seconds/60)/60;
   mins = total_seconds/60-hours*60;
   seconds = total_seconds%60;

   std::cout<<"\nHours: "<<hours
   <<"\nMinutes: "<<mins
   <<"\nSeconds: "<<seconds;

    return 0;
}