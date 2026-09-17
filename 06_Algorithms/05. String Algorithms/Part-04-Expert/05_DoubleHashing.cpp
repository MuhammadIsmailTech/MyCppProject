#include <iostream>
#include <string>
using namespace std;

class DoubleHash
{
private:
    const long long base1 = 31;
    const long long base2 = 37;

    const long long mod1 = 1000000007;
    const long long mod2 = 1000000009;

public:
    pair<long long, long long>
    calculateHash(string str)
    {
        long long hash1 = 0;
        long long hash2 = 0;

        for (char ch : str)
        {
            hash1 =
                (hash1 * base1 + ch) % mod1;

            hash2 =
                (hash2 * base2 + ch) % mod2;
        }

        return {hash1, hash2};
    }
};

int main()
{
    DoubleHash dh;

    string str;

    cout << "Enter string: ";
    cin >> str;

    auto result = dh.calculateHash(str);

    cout << "Hash 1: " << result.first << endl;
    cout << "Hash 2: " << result.second << endl;

    return 0;
}