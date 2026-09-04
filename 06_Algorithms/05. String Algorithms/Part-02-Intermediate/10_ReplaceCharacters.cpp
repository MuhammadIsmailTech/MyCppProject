#include <iostream>
#include <string>
using namespace std;

string replaceCharacter(
    string str,
    char oldChar,
    char newChar)
{
    for (char &ch : str)
    {
        if (ch == oldChar)
        {
            ch = newChar;
        }
    }

    return str;
}

int main()
{
    string str;
    char oldChar, newChar;

    cout << "Enter a string: ";
    getline(cin, str);

    cout << "Character to replace: ";
    cin >> oldChar;

    cout << "New character: ";
    cin >> newChar;

    cout << "Result: "
         << replaceCharacter(str, oldChar, newChar);

    return 0;
}