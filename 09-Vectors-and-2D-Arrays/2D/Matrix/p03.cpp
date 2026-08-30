// 🔥 Problem 3 — Column Sum

// Now do the same thing, but column-wise.

// Given:

// 1  2  3
// 4  5  6
// 7  8  9

// Expected:

// Column 0 = 12
// Column 1 = 15
// Column 2 = 18

// Because:

// Column 0 → 1 + 4 + 7 = 12
// Column 1 → 2 + 5 + 8 = 15
// Column 2 → 3 + 6 + 9 = 18
// 🧠 Key difference

// For row sum you had:

// sum += arr[i][j];

// where i represented the current row.

// Now your outer loop should represent the column.

// Think carefully about which index stays fixed and which one changes.

// Don't hard-code the values. Write it so it works for the whole 3 × 3 matrix.


#include <iostream>

int main(){
    int arr[3][3]=
    {{1,2,3},
    {4,5,6},
    {7,8,9}};

    for(int i=0;i<3;i++){
        int sum=0;
        for(int j = 0;j<3;j++){
            sum += arr[j][i];
        }
    std::cout<<"Columns "<<i<<" = "<<sum<<"\n";
    }
    return 0;
}