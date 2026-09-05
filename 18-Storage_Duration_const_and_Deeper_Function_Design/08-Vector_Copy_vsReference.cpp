// Q8. Vector Copy vs Reference

// Consider:

// void fun1(std::vector<int> arr) {
//     arr[0] = 100;
// }

// void fun2(std::vector<int>& arr) {
//     arr[0] = 200;
// }

// int main() {
//     std::vector<int> nums = {1, 2, 3};

//     fun1(nums);
//     fun2(nums);

//     for (int x : nums) {
//         std::cout << x << " ";
//     }
// }

// Predict the output and explain what happens in memory conceptually.



#include <iostream>
#include <vector>

void fun1(std::vector<int> arr) {
    arr[0] = 100;
}

void fun2(std::vector<int>& arr) {
    arr[0] = 200;
}

int main() {
    std::vector<int> nums = {1, 2, 3};

    fun1(nums);
        for (int x : nums) {
        std::cout << x << " ";
    }
    fun2(nums);

    for (int x : nums) {
        std::cout << x << " ";
    }

    return 0;
}