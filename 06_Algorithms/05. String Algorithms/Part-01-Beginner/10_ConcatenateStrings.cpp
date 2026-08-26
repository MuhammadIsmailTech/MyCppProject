#include <iostream>
#include <string>
using namespace std;

string concatenate(string str1, string str2)
{
    return str1 + str2;
}

int main()
{
    string str1, str2;

    cout << "Enter first string: ";
    getline(cin, str1);

    cout << "Enter second string: ";
    getline(cin, str2);

    cout << "Concatenated String: "
         << concatenate(str1, str2);

    return 0;
}