#include <iostream>
#include <string>
using namespace std;

int findLength(string str)
{
    int count = 0;

    for (char ch : str)
    {
        count++;
    }

    return count;
}

int main()
{
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    cout << "String Length: "
         << findLength(str);

    return 0;
}