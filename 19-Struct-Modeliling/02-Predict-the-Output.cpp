// Q2. Predict the Output

#include <iostream>


struct Point {
    int x;
    int y;
};

int main() {

    Point p1 = {10, 20};
    Point p2 = p1;

    p2.x = 50;

    std::cout << p1.x << " " << p1.y << "\n";
    std::cout << p2.x << " " << p2.y << "\n";
}

// Answer: 10 20
//         50 20

// What is the output?
// Why does changing p2.x not change p1.x? p2 is a copy of p1 not reference,




