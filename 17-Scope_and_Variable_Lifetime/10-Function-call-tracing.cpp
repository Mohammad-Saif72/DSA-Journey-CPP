// Q10. Function call tracing

// Trace this program manually:

// void third() {
//     int z = 30;
//     std::cout << z << " ";
// }

// void second() {
//     int y = 20;

//     third();

//     std::cout << y << " ";
// }

// void first() {
//     int x = 10;

//     second();

//     std::cout << x << " ";
// }

// int main() {
//     first();
// }

// Draw the function-call order:

// main()
// ↓
// ?
// ↓
// ?

// Then predict the output.  30 20 10;


// function call order will like 

//   main()
//    |
//    first()
//     |
//     second()
//        |
//        third()


// Yes, correct! ✅

// Your function call order is:

// main()
//  |
//  first()
//    |
//    second()
//       |
//       third()

// Now let's trace what happens after third() finishes:

// main()
//  |
//  first()        → x = 10
//    |
//    second()     → y = 20
//       |
//       third()   → z = 30
//       |             prints 30
//       |
//       returns to second()
//                   prints 20
//    |
//    returns to first()
//                   prints 10
//  |
// program ends

// So the output is:

// 30 20 10

// 🎯 Your answer is completely correct.

// The important concept here is LIFO (Last In, First Out):

// Called last → third()
// Returns first

// Called first → first()
// Returns last

// This exact understanding will be very useful when we start recursion, because recursive function calls behave in the same stack-like way.