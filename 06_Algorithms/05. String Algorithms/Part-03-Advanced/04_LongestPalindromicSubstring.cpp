#include <iostream>
#include <string>
using namespace std;

string expand(string str, int left, int right)
{
    while (left >= 0 &&
           right < str.length() &&
           str[left] == str[right])
    {
        left--;
        right++;
    }

    return str.substr(left + 1, right - left - 1);
}

string longestPalindrome(string str)
{
    if (str.empty())
        return "";

    string longest = "";

    for (int i = 0; i < str.length(); i++)
    {
        string odd = expand(str, i, i);
        string even = expand(str, i, i + 1);

        if (odd.length() > longest.length())
            longest = odd;

        if (even.length() > longest.length())
            longest = even;
    }

    return longest;
}

int main()
{
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    cout << "Longest Palindromic Substring: "
         << longestPalindrome(str);

    return 0;
}