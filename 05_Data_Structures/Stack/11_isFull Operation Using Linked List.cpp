#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

// isFull function
bool isFull() {
    Node* temp = new(nothrow) Node;
    if (temp == nullptr)
        return true;  // memory allocation failed
    delete temp;
    return false;
}
int main() {
    if (isFull())
        cout << "Stack is full!" << endl;
    else
        cout << "Stack is not full." << endl;

    return 0;
}