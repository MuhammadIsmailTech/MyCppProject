#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

// isEmpty function
bool isEmpty(Node* Head) {
    return (Head == nullptr);
}

int main() {
    Node* Head = nullptr;
    if (isEmpty(Head))
        cout << "Stack is empty." << endl;
    else
        cout << "Stack is not empty." << endl;

    // Add one element
    Head = new Node{10, nullptr};

    if (isEmpty(Head))
        cout << "Stack is empty." << endl;
    else
        cout << "Stack is not empty." << endl;

    return 0;
}