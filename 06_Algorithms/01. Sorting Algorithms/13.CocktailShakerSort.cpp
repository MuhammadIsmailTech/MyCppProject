#include <iostream>
using namespace std;

// Cocktail Shaker Sort
void cocktailShakerSort(int arr[], int size)
{
    bool swapped = true;
    int start = 0;
    int end = size - 1;

    while (swapped)
    {
        swapped = false;

        // Left to Right
        for (int i = start; i < end; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                swap(arr[i], arr[i + 1]);
                swapped = true;
            }
        }

        if (!swapped)
            break;

        swapped = false;
        end--;

        // Right to Left
        for (int i = end - 1; i >= start; i--)
        {
            if (arr[i] > arr[i + 1])
            {
                swap(arr[i], arr[i + 1]);
                swapped = true;
            }
        }

        start++;
    }
}

// Print Array
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    cout << endl;
}

int main()
{
    int arr[] = {5, 1, 4, 2, 8, 0, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array: ";
    printArray(arr, size);

    cocktailShakerSort(arr, size);

    cout << "Sorted Array: ";
    printArray(arr, size);

    return 0;
}