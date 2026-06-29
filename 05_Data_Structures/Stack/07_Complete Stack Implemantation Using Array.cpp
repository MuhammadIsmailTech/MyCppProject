#include <iostream>
using namespace std;

const int Max_Size = 5;  // Maximum size of the stack

// Check if stack is empty
bool isEmpty(int TOP) {
    return (TOP == -1);
}

// Check if stack is full
bool isFull(int TOP) {
    return (TOP == Max_Size - 1);
}
// Push operation
void push(int STACK[], int &TOP, int Value) {
    if (isFull(TOP)) {
        cout << "Stack Overflow!" << endl;
        return;
    }
    TOP = TOP + 1;
    STACK[TOP] = Value;
    cout << "Pushed: " << Value << endl;
}
// Pop operation
int pop(int STACK[], int &TOP) {
    if (isEmpty(TOP)) {
        cout << "Stack Underflow!" << endl;
        return -1;
    }
    int Value = STACK[TOP];
    TOP = TOP - 1;
    cout << "Popped: " << Value << endl;
    return Value;
}
/ Display stack elements
void display(int STACK[], int TOP) {
    if (isEmpty(TOP)) {
        cout << "Stack is empty!" << endl;
        return;
    }
    cout << "Stack elements (Top to Bottom): ";
    for (int i = TOP; i >= 0; i--) {
        cout << STACK[i] << " ";
    }
    cout << endl;
}
int main() {
    int STACK[Max_Size];
    int TOP = -1;  // Stack initially empty

    // Demonstration of operations
    push(STACK, TOP, 10);
    push(STACK, TOP, 20);
    push(STACK, TOP, 30);
    display(STACK, TOP);
    pop(STACK, TOP);
    display(STACK, TOP);

    push(STACK, TOP, 40);
    push(STACK, TOP, 50);
    push(STACK, TOP, 60); // Will cause overflow
    display(STACK, TOP);

    // Check if stack is empty or full
    if (isEmpty(TOP)) cout << "Stack is empty." << endl;
    else cout << "Stack is not empty." << endl;

    if (isFull(TOP)) cout << "Stack is full." << endl;
    else cout << "Stack is not full." << endl;

    return 0;
}