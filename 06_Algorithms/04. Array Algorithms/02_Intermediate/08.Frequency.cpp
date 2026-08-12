#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 20, 10, 30, 20, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    bool visited[6] = {false};

    cout << "Element Frequencies:\n\n";

    for (int i = 0; i < size; i++)
    {
        if (visited[i])
            continue;

        int count = 1;

        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                visited[j] = true;
            }
        }

        cout << arr[i] << " occurs "
             << count << " time(s)." << endl;
    }

    return 0;
}