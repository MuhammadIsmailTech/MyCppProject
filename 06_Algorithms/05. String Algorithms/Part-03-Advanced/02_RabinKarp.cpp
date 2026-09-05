#include <iostream>
#include <string>
using namespace std;

int rabinKarp(string text, string pattern)
{
    int n = text.length();
    int m = pattern.length();

    if (m > n)
        return -1;

    const int base = 256;
    const int prime = 101;

    int patternHash = 0;
    int textHash = 0;
    int h = 1;

    for (int i = 0; i < m - 1; i++)
        h = (h * base) % prime;

    for (int i = 0; i < m; i++)
    {
        patternHash =
            (base * patternHash + pattern[i]) % prime;

        textHash =
            (base * textHash + text[i]) % prime;
    }

    for (int i = 0; i <= n - m; i++)
    {
        if (patternHash == textHash)
        {
            bool match = true;

            for (int j = 0; j < m; j++)
            {
                if (text[i + j] != pattern[j])
                {
                    match = false;
                    break;
                }
            }

            if (match)
                return i;
        }

        if (i < n - m)
        {
            textHash =
                (base * (textHash - text[i] * h)
                 + text[i + m]) % prime;

            if (textHash < 0)
                textHash += prime;
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

    int index = rabinKarp(text, pattern);

    if (index != -1)
        cout << "Pattern found at index: " << index;
    else
        cout << "Pattern not found.";

    return 0;
}