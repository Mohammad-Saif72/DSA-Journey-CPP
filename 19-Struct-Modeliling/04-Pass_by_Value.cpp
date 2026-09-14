// Q4. Pass by Value

// Predict:

#include <iostream>

struct Counter {
    int value;
};

void increase(Counter c) {
    c.value++;
}

int main() {

    Counter c1 = {10};

    increase(c1);

    std::cout << c1.value;
}
// Output : 10 because increase only copy the c1 
// Explain why.