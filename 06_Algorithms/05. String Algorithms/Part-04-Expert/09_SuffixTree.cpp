#include <iostream>
#include <string>
using namespace std;

class Node
{
public:
    Node* children[26];
    bool isEnd;

    Node()
    {
        isEnd = false;

        for (int i = 0; i < 26; i++)
            children[i] = nullptr;
    }
};

class SuffixTree
{
private:
    Node* root;

public:
    SuffixTree()
    {
        root = new Node();
    }

    void insertSuffix(string suffix)
    {
        Node* current = root;

        for (char ch : suffix)
        {
            int index = ch - 'a';

            if (current->children[index] == nullptr)
                current->children[index] = new Node();

            current = current->children[index];
        }

        current->isEnd = true;
    }

    void build(string text)
    {
        for (int i = 0; i < text.length(); i++)
        {
            insertSuffix(text.substr(i));
        }
    }

    bool search(string pattern)
    {
        Node* current = root;

        for (char ch : pattern)
        {
            int index = ch - 'a';

            if (current->children[index] == nullptr)
                return false;

            current = current->children[index];
        }

        return true;
    }
};

int main()
{
    string text;

    cout << "Enter text: ";
    cin >> text;

    SuffixTree tree;

    tree.build(text);

    string pattern;

    cout << "Enter pattern: ";
    cin >> pattern;

    if (tree.search(pattern))
        cout << "Pattern found.";
    else
        cout << "Pattern not found.";

    return 0;
}