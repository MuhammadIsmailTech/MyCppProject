#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main()
{
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    unordered_map<char, int> frequency;

    for (char ch : str)
    {
        frequency[ch]++;
    }

    cout << "\nCharacter Frequency:\n";

    for (auto item : frequency)
    {
        cout << item.first
             << " = "
             << item.second
             << endl;
    }

    return 0;
}