#include <iostream>
using namespace std;
// Node structure for stack
struct Node {
    int data;
    Node* next;
};
// Check if stack is empty
bool isEmpty(Node* Head) {
    return (Head == nullptr);
}
// Check if stack is full (memory allocation fails)
bool isFull() {
    Node* temp = new(nothrow) Node;  // try to allocate memory
    if (temp == nullptr)
        return true;   // memory allocation failed → stack is full
    delete temp;
    return false;      // memory available → stack is not full
}
// Push operation
void push(Node* &Head, int Value) {
    if (isFull()) {
        cout << "Stack Overflow! Cannot push " << Value << endl;
        return;
    }
    Node* nNode = new Node;
    nNode->data = Value;
    nNode->next = Head;
    Head = nNode;
    cout << "Pushed: " << Value << endl;
}
// Pop operation
int pop(Node* &Head) {
    if (isEmpty(Head)) {
        cout << "Stack Underflow!" << endl;
        return -1;  // indicate error
    }
    int Value = Head->data;
    Node* temp = Head;
    Head = Head->next;
    delete temp;
    cout << "Popped: " << Value << endl;
    return Value;
}
// Display stack elements
void display(Node* Head) {
    if (isEmpty(Head)) {
        cout << "Stack is empty!" << endl;
        return;
    }
    cout << "Stack elements (Top to Bottom): ";
    Node* temp = Head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main() {
    Node* Head = nullptr;  // stack initially empty
    // Demonstration of operations
    push(Head, 10);
    push(Head, 20);
    push(Head, 30);
    display(Head);
    pop(Head);
    display(Head);
    push(Head, 40);
    push(Head, 50);
    display(Head);
    // Check if stack is empty or full
    if (isEmpty(Head)) 
	cout << "Stack is empty." << endl;
    else cout << "Stack is not empty." << endl;
    if (isFull()) 
	cout << "Stack is full." << endl;
    else cout << "Stack is not full." << endl;
    return 0;
}