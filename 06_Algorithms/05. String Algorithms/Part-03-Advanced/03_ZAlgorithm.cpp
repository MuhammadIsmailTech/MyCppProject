#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> calculateZ(string str)
{
    int n = str.length();

    vector<int> z(n, 0);

    int left = 0;
    int right = 0;

    for (int i = 1; i < n; i++)
    {
        if (i < right)
            z[i] = min(right - i, z[i - left]);

        while (i + z[i] < n &&
               str[z[i]] == str[i + z[i]])
        {
            z[i]++;
        }

        if (i + z[i] > right)
        {
            left = i;
            right = i + z[i];
        }
    }

    return z;
}

int main()
{
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    vector<int> z = calculateZ(str);

    cout << "Z Array: ";

    for (int value : z)
        cout << value << " ";

    return 0;
}