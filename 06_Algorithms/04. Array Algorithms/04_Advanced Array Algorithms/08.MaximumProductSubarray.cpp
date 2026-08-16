#include <iostream>
#include <algorithm>
using namespace std;

int maxProductSubarray(int arr[], int size)
{
    int currentMax = arr[0];
    int currentMin = arr[0];
    int result = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] < 0)
        {
            swap(currentMax, currentMin);
        }

        currentMax = max(arr[i], currentMax * arr[i]);

        currentMin = min(arr[i], currentMin * arr[i]);

        result = max(result, currentMax);
    }

    return result;
}

int main()
{
    int arr[] = {2, 3, -2, 4};

    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Maximum Product = "
         << maxProductSubarray(arr, size);

    return 0;
}