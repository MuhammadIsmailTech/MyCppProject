#include <iostream>
#include <string>
using namespace std;

bool isRotation(string str1, string str2)
{
    if (str1.length() != str2.length())
        return false;

    string combined = str1 + str1;

    return combined.find(str2) != string::npos;
}

int main()
{
    string str1, str2;

    cout << "Enter first string: ";
    getline(cin, str1);

    cout << "Enter second string: ";
    getline(cin, str2);

    if (isRotation(str1, str2))
        cout << "Strings are rotations";
    else
        cout << "Strings are not rotations";

    return 0;
}