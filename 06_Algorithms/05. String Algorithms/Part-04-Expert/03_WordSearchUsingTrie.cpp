#include <iostream>
#include <string>
#include <vector>
using namespace std;

class TrieNode
{
public:
    TrieNode* children[26];
    bool isEnd;

    TrieNode()
    {
        isEnd = false;

        for (int i = 0; i < 26; i++)
            children[i] = nullptr;
    }
};

class Trie
{
private:
    TrieNode* root;

public:
    Trie()
    {
        root = new TrieNode();
    }

    void insert(string word)
    {
        TrieNode* current = root;

        for (char ch : word)
        {
            int index = ch - 'a';

            if (current->children[index] == nullptr)
                current->children[index] = new TrieNode();

            current = current->children[index];
        }

        current->isEnd = true;
    }

    bool search(string word)
    {
        TrieNode* current = root;

        for (char ch : word)
        {
            int index = ch - 'a';

            if (current->children[index] == nullptr)
                return false;

            current = current->children[index];
        }

        return current->isEnd;
    }
};

int main()
{
    Trie trie;

    vector<string> dictionary =
    {
        "apple",
        "application",
        "banana",
        "computer",
        "programming"
    };

    for (string word : dictionary)
        trie.insert(word);

    string word;

    cout << "Enter word to search: ";
    cin >> word;

    if (trie.search(word))
        cout << "Word exists in dictionary.";
    else
        cout << "Word does not exist.";

    return 0;
}