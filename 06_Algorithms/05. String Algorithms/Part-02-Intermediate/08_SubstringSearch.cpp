#include <iostream>
#include <string>
using namespace std;

int findSubstring(string text, string pattern)
{
    int n = text.length();
    int m = pattern.length();

    for (int i = 0; i <= n - m; i++)
    {
        int j;

        for (j = 0; j < m; j++)
        {
            if (text[i + j] != pattern[j])
                break;
        }

        if (j == m)
            return i;
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

    int index = findSubstring(text, pattern);

    if (index != -1)
        cout << "Pattern found at index: " << index;
    else
        cout << "Pattern not found.";

    return 0;
}