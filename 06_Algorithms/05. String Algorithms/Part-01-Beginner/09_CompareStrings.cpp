#include <iostream>
#include <string>
using namespace std;

bool compareStrings(string str1, string str2)
{
    if (str1.length() != str2.length())
        return false;

    for (int i = 0; i < str1.length(); i++)
    {
        if (str1[i] != str2[i])
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

    if (compareStrings(str1, str2))
        cout << "Strings are equal";
    else
        cout << "Strings are not equal";

    return 0;
}