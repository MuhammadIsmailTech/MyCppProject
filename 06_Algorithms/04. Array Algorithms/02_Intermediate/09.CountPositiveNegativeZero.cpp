#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, -5, 0, 25, -8, 0, 15, -2};
    int size = sizeof(arr) / sizeof(arr[0]);

    int positive = 0;
    int negative = 0;
    int zero = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > 0)
            positive++;
        else if (arr[i] < 0)
            negative++;
        else
            zero++;
    }

    cout << "Positive Numbers = " << positive << endl;
    cout << "Negative Numbers = " << negative << endl;
    cout << "Zeroes = " << zero << endl;

    return 0;
}