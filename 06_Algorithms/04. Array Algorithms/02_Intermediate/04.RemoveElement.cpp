#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {10, 20, 30, 40, 50};
    int size = 5;
    int value;

    cout << "Original Array: ";

    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    cout << "\n\nEnter element to remove: ";
    cin >> value;

    int position = -1;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == value)
        {
            position = i;
            break;
        }
    }

    if (position == -1)
    {
        cout << "Element not found.";
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