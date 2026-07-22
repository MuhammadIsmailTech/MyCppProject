#include <iostream>
using namespace std;

// Binary Search Function
int binarySearch(int arr[], int left, int right, int key)
{
    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == key)
            return mid;

        if (arr[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1;
}

// Exponential Search Function
int exponentialSearch(int arr[], int size, int key)
{
    if (arr[0] == key)
        return 0;

    int i = 1;

    while (i < size && arr[i] <= key)
        i *= 2;

    return binarySearch(arr, i / 2, min(i, size - 1), key);
}

int main()
{
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;

    cout << "Sorted Array: ";

    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    cout << "\n\nEnter element to search: ";
    cin >> key;

    int result = exponentialSearch(arr, size, key);

    if (result != -1)
        cout << "\nElement found at index " << result;
    else
        cout << "\nElement not found.";

    return 0;
}