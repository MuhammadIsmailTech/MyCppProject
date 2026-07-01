#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};
// Pop function
int pop(Node* &Head) {
    if (Head == nullptr) {
        cout << "Stack Underflow!" << endl;
        return -1;
    }
    int Value = Head->data;
    Node* temp = Head;
    Head = Head->next;
    delete temp;
    cout << "Popped: " << Value << endl;
    return Value;
}
// Display stack
void display(Node* Head) {
    Node* temp = Head;
    cout << "Stack (Top to Bottom): ";
    while(temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }}
int main() {
    Node* Head = nullptr;
    // Adding items manually
    Head = new Node{10, nullptr};
    Head = new Node{20, Head};
    Head = new Node{30, Head};
    display(Head);
    pop(Head);
    display(Head);
    return 0;
}