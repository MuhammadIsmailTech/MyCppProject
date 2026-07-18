#include <iostream>
using namespace std;

// Function to get the next gap
int getNextGap(int gap)
{
    gap = (gap * 10) / 13;

    if (gap < 1)
        return 1;

    return gap;
}

// Comb Sort
void combSort(int arr[], int size)
{
    int gap = size;
    bool swapped = true;

    while (gap != 1 || swapped)
    {
        gap = getNextGap(gap);
        swapped = false;

        for (int i = 0; i < size - gap; i++)
        {
            if (arr[i] > arr[i + gap])
            {
                swap(arr[i], arr[i + gap]);
                swapped = true;
            }
        }
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
    int arr[] = {8, 4, 1, 56, 3, -44, 23, -6, 28, 0};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array: ";
    printArray(arr, size);

    combSort(arr, size);

    cout << "Sorted Array: ";
    printArray(arr, size);

    return 0;
}