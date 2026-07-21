#include <iostream>
using namespace std;

// Recursive Binary Search Function
int recursiveBinarySearch(int arr[], int left, int right, int key)
{
    if (left > right)
        return -1;

    int mid = left + (right - left) / 2;

    if (arr[mid] == key)
        return mid;

    if (arr[mid] > key)
        return recursiveBinarySearch(arr, left, mid - 1, key);

    return recursiveBinarySearch(arr, mid + 1, right, key);
}

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

    int result = recursiveBinarySearch(arr, 0, size - 1, key);

    if (result != -1)
        cout << "\nElement found at index " << result;
    else
        cout << "\nElement not found.";

    return 0;
}