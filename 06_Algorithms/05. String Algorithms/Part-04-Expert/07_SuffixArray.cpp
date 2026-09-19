#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

vector<int> buildSuffixArray(string s)
{
    int n = s.length();

    vector<int> suffixArray(n);

    for (int i = 0; i < n; i++)
        suffixArray[i] = i;

    sort(
        suffixArray.begin(),
        suffixArray.end(),
        [&](int a, int b)
        {
            return s.substr(a) < s.substr(b);
        }
    );

    return suffixArray;
}

int main()
{
    string s;

    cout << "Enter string: ";
    cin >> s;

    vector<int> suffixArray =
        buildSuffixArray(s);

    cout << "\nSuffix Array:\n";

    for (int index : suffixArray)
    {
        cout << index
             << " -> "
             << s.substr(index)
             << endl;
    }

    return 0;
}