#include <iostream>
#include <string>
using namespace std;

class RollingHash
{
private:
    const long long base = 31;
    const long long mod = 1000000007;

public:
    long long calculateHash(string str)
    {
        long long hash = 0;

        for (char ch : str)
        {
            hash = (hash * base + ch) % mod;
        }

        return hash;
    }

    long long updateHash(
        long long oldHash,
        char oldChar,
        char newChar,
        long long power)
    {
        oldHash =
            (oldHash - oldChar * power) % mod;

        if (oldHash < 0)
            oldHash += mod;

        oldHash =
            (oldHash * base + newChar) % mod;

        return oldHash;
    }
};

int main()
{
    RollingHash rh;

    string text;

    cout << "Enter string: ";
    cin >> text;

    cout << "Hash: "
         << rh.calculateHash(text);

    return 0;
}