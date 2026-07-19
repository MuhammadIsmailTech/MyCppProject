#include <iostream>
using namespace std;

// Function for Linear Search
int linearSearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
            return i;
    }

    return -1;
}

// Main Function
int main()
{
    int arr[] = {12, 45, 23, 67, 34, 89, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;

    cout << "Array Elements: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    cout << "\n\nEnter the element to search: ";
    cin >> key;

    int result = linearSearch(arr, size, key);

    if (result != -1)
        cout << "\nElement found at index " << result << endl;
    else
        cout << "\nElement not found." << endl;

    return 0;
}