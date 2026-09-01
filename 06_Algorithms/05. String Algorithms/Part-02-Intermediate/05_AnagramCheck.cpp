#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

bool areAnagrams(string str1, string str2)
{
    if (str1.length() != str2.length())
        return false;

    unordered_map<char, int> frequency;

    for (char ch : str1)
        frequency[ch]++;

    for (char ch : str2)
    {
        frequency[ch]--;

        if (frequency[ch] < 0)
            return false;
    }

    return true;
}

int main()
{
    string str1, str2;

    cout << "Enter first string: ";
    getline(cin, str1);

    cout << "Enter second string: ";
    getline(cin, str2);

    if (areAnagrams(str1, str2))
        cout << "Strings are Anagrams";
    else
        cout << "Strings are not Anagrams";

    return 0;
}