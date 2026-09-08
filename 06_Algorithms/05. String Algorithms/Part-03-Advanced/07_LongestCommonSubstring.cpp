#include <iostream>
#include <string>
#include <vector>
using namespace std;

string longestCommonSubstring(string a, string b)
{
    int n = a.length();
    int m = b.length();

    vector<vector<int>> dp(
        n + 1,
        vector<int>(m + 1, 0)
    );

    int maxLength = 0;
    int endIndex = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (a[i - 1] == b[j - 1])
            {
                dp[i][j] =
                    dp[i - 1][j - 1] + 1;

                if (dp[i][j] > maxLength)
                {
                    maxLength = dp[i][j];
                    endIndex = i;
                }
            }
        }
    }

    return a.substr(
        endIndex - maxLength,
        maxLength
    );
}

int main()
{
    string a, b;

    cout << "Enter first string: ";
    cin >> a;

    cout << "Enter second string: ";
    cin >> b;

    cout << "Longest Common Substring: "
         << longestCommonSubstring(a, b);

    return 0;
}