#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> buildLPS(string pattern)
{
    int m = pattern.length();
    vector<int> lps(m, 0);

    int length = 0;
    int i = 1;

    while (i < m)
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
                length = lps[length - 1];
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

int KMPSearch(string text, string pattern)
{
    if (pattern.empty())
        return 0;

    vector<int> lps = buildLPS(pattern);

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
            return i - j;
        }
        else if (i < text.length() &&
                 text[i] != pattern[j])
        {
            if (j != 0)
                j = lps[j - 1];
            else
                i++;
        }
    }

    return -1;
}

int main()
{
    string text, pattern;

    cout << "Enter text: ";
    getline(cin, text);

    cout << "Enter pattern: ";
    getline(cin, pattern);

    int index = KMPSearch(text, pattern);

    if (index != -1)
        cout << "Pattern found at index: " << index;
    else
        cout << "Pattern not found.";

    return 0;
}