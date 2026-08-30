// 🧠 Challenge — Electricity Bill

// Take electricity units consumed.

// Use these rules:

// 0–100 units     → ₹5 per unit
// 101–200 units   → ₹7 per unit
// 201–300 units   → ₹10 per unit
// Above 300       → ₹12 per unit

// Example:

// Enter units: 250


// Bill = ₹2500

// Important: For now, use the simple slab approach above:

// 250 × ₹10

// Don't worry about progressive/slab billing yet.



#include <iostream>

int main(){
    int unit;
    int bill;
    std::cout<<"Enter Unit: ";
    std::cin>>unit;

if(unit>=0){
 if(unit>300){
        bill = unit*12;
        std::cout<<"Bill = "<<bill;
    }else if(unit<=300 && unit>200){
         bill = unit*10;
        std::cout<<"Bill = "<<bill;
    }else if(unit<=200 && unit>100){
         bill = unit*7;
        std::cout<<"Bill = "<<bill;
    }else{
        bill = unit*5;
        std::cout<<"Bill = "<<bill;  
    }
}else{
std::cout<<"Enter valid unit Number";
}
   
}