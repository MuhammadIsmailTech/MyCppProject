#include <iostream>
using namespace std;

// Binary Search Function
int binarySearch(int arr[], int size, int key)
{
    int left = 0;
    int right = size - 1;

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

// Main Function
int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;

    cout << "Sorted Array: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    cout << "\n\nEnter element to search: ";
    cin >> key;

    int result = binarySearch(arr, size, key);

    if (result != -1)
        cout << "\nElement found at index " << result << endl;
    else
        cout << "\nElement not found." << endl;

    return 0;
}