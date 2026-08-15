#include <iostream>
using namespace std;

int findEquilibriumIndex(int arr[], int size)
{
    int totalSum = 0;

    for (int i = 0; i < size; i++)
    {
        totalSum += arr[i];
    }

    int leftSum = 0;

    for (int i = 0; i < size; i++)
    {
        int rightSum = totalSum - leftSum - arr[i];

        if (leftSum == rightSum)
            return i;

        leftSum += arr[i];
    }

    return -1;
}

int main()
{
    int arr[] = {-7, 1, 5, 2, -4, 3, 0};

    int size = sizeof(arr) / sizeof(arr[0]);

    int index = findEquilibriumIndex(arr, size);

    if (index != -1)
        cout << "Equilibrium Index = " << index;
    else
        cout << "No Equilibrium Index Found";

    return 0;
}