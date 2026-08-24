#include <iostream>
#include <string>
using namespace std;

string removeSpaces(string str)
{
    string result;

    for (char ch : str)
    {
        if (ch != ' ')
        {
            result += ch;
        }
    }

    return result;
}

int main()
{
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    cout << "String without spaces: "
         << removeSpaces(str);

    return 0;
}