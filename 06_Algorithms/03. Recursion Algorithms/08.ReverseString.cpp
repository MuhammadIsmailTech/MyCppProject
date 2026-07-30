#include <iostream>
#include <string>
using namespace std;

// Recursive function to reverse a string
void reverseString(string str, int index)
{
    // Base Case
    if (index < 0)
        return;

    // Print current character
    cout << str[index];

    // Recursive Call
    reverseString(str, index - 1);
}

int main()
{
    string text;

    cout << "Enter a string: ";
    getline(cin, text);

    cout << "Reversed String: ";
    reverseString(text, text.length() - 1);

    return 0;
}