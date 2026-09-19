#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

vector<int> buildSuffixArray(string s)
{
    int n = s.length();

    vector<int> sa(n);

    for (int i = 0; i < n; i++)
        sa[i] = i;

    sort(
        sa.begin(),
        sa.end(),
        [&](int a, int b)
        {
            return s.substr(a) < s.substr(b);
        }
    );

    return sa;
}

int calculateLCP(
    string s,
    int i,
    int j)
{
    int length = 0;

    while (
        i < s.length() &&
        j < s.length() &&
        s[i] == s[j])
    {
        length++;
        i++;
        j++;
    }

    return length;
}

int main()
{
    string s;

    cout << "Enter string: ";
    cin >> s;

    vector<int> sa =
        buildSuffixArray(s);

    cout << "\nSuffix Array + LCP:\n";

    for (int i = 0; i < sa.size(); i++)
    {
        cout << "Suffix: "
             << s.substr(sa[i]);

        if (i > 0)
        {
            int lcp =
                calculateLCP(
                    s,
                    sa[i - 1],
                    sa[i]
                );

            cout << " | LCP: "
                 << lcp;
        }

        cout << endl;
    }

    return 0;
}