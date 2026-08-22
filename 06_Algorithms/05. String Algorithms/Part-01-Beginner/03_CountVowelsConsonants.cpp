#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isVowel(char ch)
{
    ch = tolower(ch);

    return ch == 'a' ||
           ch == 'e' ||
           ch == 'i' ||
           ch == 'o' ||
           ch == 'u';
}

int main()
{
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    int vowels = 0;
    int consonants = 0;

    for (char ch : str)
    {
        if (isalpha(ch))
        {
            if (isVowel(ch))
                vowels++;
            else
                consonants++;
        }
    }

    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;

    return 0;
}