#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> buildLPS(string pattern)
{
    int n = pattern.length();

    vector<int> lps(n, 0);

    int length = 0;
    int i = 1;

    while (i < n)
    {
        if (pattern[i] == pattern[length])
        {
            length++;

            lps[i] = length;

            i++;
        }
        else
        {
            if (length != 0)
            {
                length =
                    lps[length - 1];
            }
            else
            {
                lps[i] = 0;
                i++;
            }
        }
    }

    return lps;
}

vector<int> searchPattern(
    string text,
    string pattern)
{
    vector<int> positions;

    if (pattern.empty())
        return positions;

    vector<int> lps =
        buildLPS(pattern);

    int i = 0;
    int j = 0;

    while (i < text.length())
    {
        if (text[i] == pattern[j])
        {
            i++;
            j++;
        }

        if (j == pattern.length())
        {
            positions.push_back(i - j);

            j = lps[j - 1];
        }
        else if (
            i < text.length() &&
            text[i] != pattern[j])
        {
            if (j != 0)
                j = lps[j - 1];
            else
                i++;
        }
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
        searchPattern(text, pattern);

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