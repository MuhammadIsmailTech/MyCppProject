#include <iostream>
using namespace std;

// Function to find minimum element
int findMinimum(int arr[], int size)
{
    int minimum = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] < minimum)
        {
            minimum = arr[i];
        }
    }

    return minimum;
}

int main()
{
    int arr[] = {25, 10, 45, 78, 12, 90, 34};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Array Elements: ";

    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    cout << "\n\nMinimum Element = "
         << findMinimum(arr, size);

    return 0;
}