#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    string upper = str;
    string lower = str;

    for (char &ch : upper)
    {
        ch = toupper(ch);
    }

    for (char &ch : lower)
    {
        ch = tolower(ch);
    }

    cout << "Uppercase: " << upper << endl;
    cout << "Lowercase: " << lower << endl;

    return 0;
}