#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

char firstRepeating(string str)
{
    unordered_set<char> seen;

    for (char ch : str)
    {
        if (seen.find(ch) != seen.end())
            return ch;

        seen.insert(ch);
    }

    return '\0';
}

int main()
{
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    char result = firstRepeating(str);

    if (result != '\0')
        cout << "First Repeating Character: " << result;
    else
        cout << "No repeating character found.";

    return 0;
}