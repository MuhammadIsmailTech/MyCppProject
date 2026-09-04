#include <iostream>
#include <string>
#include <sstream>
using namespace std;

string longestWord(string sentence)
{
    stringstream ss(sentence);

    string word;
    string longest = "";

    while (ss >> word)
    {
        if (word.length() > longest.length())
        {
            longest = word;
        }
    }

    return longest;
}

int main()
{
    string sentence;

    cout << "Enter a sentence: ";
    getline(cin, sentence);

    cout << "Longest Word: "
         << longestWord(sentence);

    return 0;
}