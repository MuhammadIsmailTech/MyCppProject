#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int countWords(string str)
{
    stringstream ss(str);

    string word;

    int count = 0;

    while (ss >> word)
    {
        count++;
    }

    return count;
}

int main()
{
    string str;

    cout << "Enter a sentence: ";
    getline(cin, str);

    cout << "Number of Words: "
         << countWords(str);

    return 0;
}