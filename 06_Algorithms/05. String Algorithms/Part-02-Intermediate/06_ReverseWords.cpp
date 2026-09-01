#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

string reverseWords(string sentence)
{
    stringstream ss(sentence);
    vector<string> words;

    string word;

    while (ss >> word)
    {
        words.push_back(word);
    }

    string result;

    for (int i = words.size() - 1; i >= 0; i--)
    {
        result += words[i];

        if (i != 0)
            result += " ";
    }

    return result;
}

int main()
{
    string sentence;

    cout << "Enter a sentence: ";
    getline(cin, sentence);

    cout << "Reversed Words: "
         << reverseWords(sentence);

    return 0;
}