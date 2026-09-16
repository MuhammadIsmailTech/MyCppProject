#include <iostream>
#include <string>
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

    void displayWords(
        TrieNode* node,
        string current)
    {
        if (node->isEnd)
            cout << current << endl;

        for (int i = 0; i < 26; i++)
        {
            if (node->children[i] != nullptr)
            {
                displayWords(
                    node->children[i],
                    current + char('a' + i)
                );
            }
        }
    }

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

    void display()
    {
        displayWords(root, "");
    }
};

int main()
{
    Trie trie;

    int n;
    cout << "Enter number of words: ";
    cin >> n;

    string word;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter word " << i + 1 << ": ";
        cin >> word;

        trie.insert(word);
    }

    cout << "\nStored Words:\n";
    trie.display();

    cout << "\nEnter word to search: ";
    cin >> word;

    if (trie.search(word))
        cout << "Word found.";
    else
        cout << "Word not found.";

    return 0;
}