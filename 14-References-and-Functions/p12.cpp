// Q12. Find Maximum Using a Function

// Write:

// int findMax(int arr[], int size)

// Return the maximum element.

// Example:

// {4, 9, 2, 15, 7}

// Output:
// 15

#include <iostream>

int findMax(int arr[], int size)
{
    int max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}

int main() 
{

    int arr[] = {4, 9, 2, 15, 7};

    int size = sizeof(arr) / sizeof(arr[0]);

    int result = findMax(arr, size);

    std::cout << "Max " << result;

    return 0;
}