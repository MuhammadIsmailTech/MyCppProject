#include <iostream>
using namespace std;

const int Max_Size = 5;  // Maximum size of stack

// Function to check if stack is full
bool isFull(int TOP) {
    return (TOP == Max_Size - 1);
}

int main() {
    int STACK[Max_Size];
    int TOP = -1;  		// Stack initially empty
// Push items until stack is full
    STACK[++TOP] = 10;
    STACK[++TOP] = 20;
    STACK[++TOP] = 30;
    STACK[++TOP] = 40;
    STACK[++TOP] = 50;

    // Check if stack is full
    if (isFull(TOP)) {
        cout << "Stack is full!" << endl;
    } else {
        cout << "Stack is not full." << endl;
    }

    return 0;
}