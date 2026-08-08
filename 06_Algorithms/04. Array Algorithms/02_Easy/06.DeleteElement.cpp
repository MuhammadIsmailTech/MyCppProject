#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {10, 20, 30, 40, 50};
    int size = 5;
    int position;

    cout << "Original Array: ";

    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    cout << "\n\nEnter index to delete (0-" << size - 1 << "): ";
    cin >> position;

    if (position < 0 || position >= size)
    {
        cout << "Invalid Index!";
        return 0;
    }

    for (int i = position; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    size--;

    cout << "\nUpdated Array: ";

    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    return 0;
}