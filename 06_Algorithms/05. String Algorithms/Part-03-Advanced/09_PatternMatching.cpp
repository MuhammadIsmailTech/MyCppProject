#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> patternMatching(
    string text,
    string pattern)
{
    vector<int> positions;

    int n = text.length();
    int m = pattern.length();

    if (m == 0 || m > n)
        return positions;

    for (int i = 0; i <= n - m; i++)
    {
        int j = 0;

        while (j < m &&
               text[i + j] == pattern[j])
        {
            j++;
        }

        if (j == m)
            positions.push_back(i);
    }

    return positions;
}

int main()
{
    string text, pattern;

    cout << "Enter text: ";
    getline(cin, text);

    cout << "Enter pattern: ";
    getline(cin, pattern);

    vector<int> positions =
        patternMatching(text, pattern);

    if (positions.empty())
    {
        cout << "Pattern not found.";
    }
    else
    {
        cout << "Pattern found at indexes:\n";

        for (int index : positions)
            cout << index << endl;
    }

    return 0;
}