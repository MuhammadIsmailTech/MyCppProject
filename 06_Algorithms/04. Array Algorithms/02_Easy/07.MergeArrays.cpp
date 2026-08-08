#include <iostream>
using namespace std;

int main()
{
    int arr1[] = {10, 20, 30};
    int arr2[] = {40, 50, 60};

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    int merged[10];

    for (int i = 0; i < size1; i++)
        merged[i] = arr1[i];

    for (int i = 0; i < size2; i++)
        merged[size1 + i] = arr2[i];

    cout << "Merged Array: ";

    for (int i = 0; i < size1 + size2; i++)
        cout << merged[i] << " ";

    return 0;
}