#include <iostream>
#include <string>
#include <vector>
using namespace std;

string manacher(string s)
{
    if (s.empty())
        return "";

    string t = "^";

    for (char ch : s)
    {
        t += "#";
        t += ch;
    }

    t += "#$";

    int n = t.length();

    vector<int> p(n, 0);

    int center = 0;
    int right = 0;

    int maxLength = 0;
    int maxCenter = 0;

    for (int i = 1; i < n - 1; i++)
    {
        int mirror = 2 * center - i;

        if (i < right)
            p[i] = min(right - i, p[mirror]);

        while (t[i + (1 + p[i])] ==
               t[i - (1 + p[i])])
        {
            p[i]++;
        }

        if (i + p[i] > right)
        {
            center = i;
            right = i + p[i];
        }

        if (p[i] > maxLength)
        {
            maxLength = p[i];
            maxCenter = i;
        }
    }

    int start =
        (maxCenter - maxLength) / 2;

    return s.substr(start, maxLength);
}

int main()
{
    string s;

    cout << "Enter string: ";
    cin >> s;

    cout << "Longest Palindromic Substring: "
         << manacher(s);

    return 0;
}