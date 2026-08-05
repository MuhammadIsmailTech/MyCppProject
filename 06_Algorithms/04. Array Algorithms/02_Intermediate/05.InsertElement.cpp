#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {10, 20, 30, 40, 50};
    int size = 5;

    int value, position;

    cout << "Original Array: ";

    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    cout << "\n\nEnter position (0-" << size << "): ";
    cin >> position;

    cout << "Enter value to insert: ";
    cin >> value;

    if (position < 0 || position > size)
    {
        cout << "Invalid Position!";
        return 0;
    }

    for (int i = size; i > position; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[position] = value;
    size++;

    cout << "\nUpdated Array: ";

    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    return 0;
}