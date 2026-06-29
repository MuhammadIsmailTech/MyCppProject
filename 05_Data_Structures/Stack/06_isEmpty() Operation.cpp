#include <iostream>
using namespace std;

const int Max_Size = 5;  // Maximum size of stack

// Function to check if stack is empty
bool isEmpty(int TOP) {
    return (TOP == -1);
}

int main() {
    int STACK[Max_Size];
    int TOP = -1;  // Stack initially empty
    // Check if stack is empty
    if (isEmpty(TOP)) {
        cout << "Stack is empty!" << endl;
    } else {
        cout << "Stack is not empty." << endl;
    }

    // Simulate pushing an item
    STACK[++TOP] = 10;

    // Check again
    if (isEmpty(TOP)) {
        cout << "Stack is empty!" << endl;
    } else {
        cout << "Stack is not empty." << endl;
    }

    return 0;
}