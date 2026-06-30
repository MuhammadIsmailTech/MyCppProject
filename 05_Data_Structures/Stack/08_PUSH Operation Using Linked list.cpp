#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

// Push function
void push(Node* &Head, int Value) {
    Node* nNode = new Node;
    nNode->data = Value;
    nNode->next = Head;
    Head = nNode;
    cout << "Pushed: " << Value << endl;
}
// Display stack
void display(Node* Head) 
{
    Node* temp = Head;
    cout << "Stack (Top to Bottom): ";
while(temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main() {
    Node* Head = nullptr;
    push(Head, 10);
    push(Head, 20);
    push(Head, 30);
    display(Head);
    return 0;
}