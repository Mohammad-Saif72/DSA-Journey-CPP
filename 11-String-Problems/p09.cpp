// 🔴 Problem 9 — Longest Consecutive Character ⭐⭐⭐

// Given a string, find the character having the longest consecutive run.

// Example
// Input:
// aabbbccccdd

// Output:
// Character: c
// Count: 4

// Another:

// Input:
// aaabb

// Output:
// Character: a
// Count: 3

// If there is a tie, return the character whose run occurs first.

// Example:

// aabbcc

// Output:

// Character: a
// Count: 2

// This is different from frequency counting.

// For:

// aabca

// the frequency of a is 3, but its longest consecutive run is only 2.

#include <iostream>
#include <string>

int main()
{

    std::string s;
    std::cout << "Enter: ";
    std::cin >> s;

    int count = 1;
    int max = 0;
    char ch = ' ';

    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] == s[i - 1])
        {
            count++;
        }
        else
        {
            if (max < count)
            {
                max = count;
                ch = s[i - 1];
            }
            count = 1;
        }
    }

    // edge case
    if (max < count)
    {
        max = count;
        ch = s[s.length() - 1];
    }

    std::cout << "Output: \n"
              << "Chaaracter: " << ch
              << "\nCount: " << max;

    return 0;
}