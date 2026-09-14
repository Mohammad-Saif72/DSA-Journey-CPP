// Q5. Pass by Reference

// Now predict:

// void increase(Counter& c) {
//     c.value++;
// }



//Q4
#include <iostream>

struct Counter {
    int value;
};

void increase(Counter& c) {
    c.value++;
}

int main() {

    Counter c1 = {10};

    increase(c1);

    std::cout << c1.value;
}
//Output: 11 becuse reference passes
// What changes compared to Q4?