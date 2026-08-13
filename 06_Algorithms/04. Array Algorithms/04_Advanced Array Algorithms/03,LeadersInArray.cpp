#include <iostream>
using namespace std;

void findLeaders(int arr[], int size)
{
    int maximum = arr[size - 1];

    cout << "Leaders: ";

    cout << maximum << " ";

    for (int i = size - 2; i >= 0; i--)
    {
        if (arr[i] >= maximum)
        {
            maximum = arr[i];

            cout << maximum << " ";
        }
    }
}

int main()
{
    int arr[] = {16, 17, 4, 3, 5, 2};

    int size = sizeof(arr) / sizeof(arr[0]);

    findLeaders(arr, size);

    return 0;
}