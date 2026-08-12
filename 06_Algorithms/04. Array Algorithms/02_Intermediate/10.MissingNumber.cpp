#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    int n = size + 1;

    int expectedSum = n * (n + 1) / 2;
    int actualSum = 0;

    for (int i = 0; i < size; i++)
        actualSum += arr[i];

    int missingNumber = expectedSum - actualSum;

    cout << "Missing Number = "
         << missingNumber << endl;

    return 0;
}