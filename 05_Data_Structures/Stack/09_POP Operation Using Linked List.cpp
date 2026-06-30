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