#include <iostream>
#include <climits>
using namespace std;

// Function to find second smallest element
int secondSmallest(int arr[], int size)
{
    int smallest = INT_MAX;
    int secondSmallest = INT_MAX;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < smallest)
        {
            secondSmallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] < secondSmallest && arr[i] != smallest)
        {
            secondSmallest = arr[i];
        }
    }

    return secondSmallest;
}

int main()
{
    int arr[] = {25, 10, 45, 78, 12, 90, 34};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Array Elements: ";

    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    cout << "\n\nSecond Smallest Element = "
         << secondSmallest(arr, size);

    return 0;
}