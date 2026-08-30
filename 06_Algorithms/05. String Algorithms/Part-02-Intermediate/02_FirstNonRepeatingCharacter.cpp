#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

char firstNonRepeating(string str)
{
    unordered_map<char, int> frequency;

    for (char ch : str)
    {
        frequency[ch]++;
    }

    for (char ch : str)
    {
        if (frequency[ch] == 1)
            return ch;
    }

    return '\0';
}

int main()
{
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    char result = firstNonRepeating(str);

    if (result != '\0')
        cout << "First Non-Repeating Character: " << result;
    else
        cout << "No non-repeating character found.";

    return 0;
}