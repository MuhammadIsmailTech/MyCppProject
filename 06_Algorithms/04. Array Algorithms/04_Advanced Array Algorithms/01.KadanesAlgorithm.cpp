#include <iostream>
using namespace std;

int maxSubarraySum(int arr[], int size)
{
    int currentSum = arr[0];
    int maximumSum = arr[0];

    for (int i = 1; i < size; i++)
    {
        currentSum = max(arr[i], currentSum + arr[i]);

        maximumSum = max(maximumSum, currentSum);
    }

    return maximumSum;
}

int main()
{
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Maximum Subarray Sum = "
         << maxSubarraySum(arr, size);

    return 0;
}