#include <iostream>
using namespace std;

// Function to count even and odd numbers
void countEvenOdd(int arr[], int size)
{
    int even = 0;
    int odd = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    cout << "Even Numbers = " << even << endl;
    cout << "Odd Numbers = " << odd << endl;
}

int main()
{
    int arr[] = {10, 15, 22, 37, 40, 55, 60};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Array Elements: ";

    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    cout << "\n\n";

    countEvenOdd(arr, size);

    return 0;
}