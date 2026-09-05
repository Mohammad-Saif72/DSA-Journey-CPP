// Q26. Debug the Design

// What is wrong with this code?

// int& findMaximum(const std::vector<int>& arr) {
//     int maximum = arr[0];

//     for (int i = 1; i < arr.size(); i++) {
//         if (arr[i] > maximum) {
//             maximum = arr[i];
//         }
//     }

//     return maximum;
// }

// Do not just say "error."

// Explain:

// What is the lifetime of maximum?   till the function local variable
// What happens when the function returns?  it return reference of maximum
// Why is returning int better here?  because return type will be intiger