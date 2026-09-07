#include <iostream>
#include <vector>
#include <string>
using namespace std;

string longestCommonPrefix(vector<string> words)
{
    if (words.empty())
        return "";

    string prefix = words[0];

    for (int i = 1; i < words.size(); i++)
    {
        int j = 0;

        while (j < prefix.length() &&
               j < words[i].length() &&
               prefix[j] == words[i][j])
        {
            j++;
        }

        prefix = prefix.substr(0, j);

        if (prefix.empty())
            return "";
    }

    return prefix;
}

int main()
{
    int n;

    cout << "Enter number of strings: ";
    cin >> n;

    vector<string> words(n);

    cout << "Enter strings:\n";

    for (int i = 0; i < n; i++)
        cin >> words[i];

    cout << "Longest Common Prefix: "
         << longestCommonPrefix(words);

    return 0;
}