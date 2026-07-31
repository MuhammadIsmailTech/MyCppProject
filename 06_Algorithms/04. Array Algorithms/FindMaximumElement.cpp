#include <iostream>
using namespace std;

// Function to find maximum element
int findMaximum(int arr[], int size)
{
    int maximum = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > maximum)
        {
            maximum = arr[i];
        }
    }

    return maximum;
}

int main()
{
    int arr[] = {25, 10, 45, 78, 12, 90, 34};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Array Elements: ";

    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    cout << "\n\nMaximum Element = "
         << findMaximum(arr, size);

    return 0;
}