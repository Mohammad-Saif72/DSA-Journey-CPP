// Q15. Find Highest CGPA

// Write:

// int highestCGPAIndex(
//     const std::vector<Student>& students
// );

// Return the index of the student with the highest CGPA.

// Think about:

// Empty vector
// Initialization
// Equal CGPAs

// Do not ignore edge cases.

#include <iostream>
#include <string>
#include <vector>

struct Student
{
    std::string name;
    int rollNumber;
    double cgpa;
};

int highestCGPAIndex(const std::vector<Student> &students)
{

    // Empty vector
    // Initialization
    // Equal CGPAs
    if (students.size() == 0)
    {
        return -1;
    }
    else
    {

        double maxCGPA = students[0].cgpa;
        int index = 0;
        for (int i = 0; i < students.size(); i++)
        {
            if (maxCGPA < students[i].cgpa)
            {
                maxCGPA = students[i].cgpa;
                index = i;
            }
        }

        return index;
    }
};

int main()
{

    std::vector<Student> S_Data = {
        {"Saif", 19, 7.3},
        {"abc", 20, 7.2},
        {"def", 21, 7.7},
        {"ghi", 22, 7.0},
        {"jkl", 23, 6.9},
        {"mohd", 30, 7.6},
    };

    int res = highestCGPAIndex(S_Data);

    std::cout<<"Index: "<<res;
    return 0;
}