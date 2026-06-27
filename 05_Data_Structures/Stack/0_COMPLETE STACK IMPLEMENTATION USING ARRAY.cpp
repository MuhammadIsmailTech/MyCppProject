#include <iostream>
using namespace std;
#define MAX 5
int stack[MAX];
int top = -1;

void push(int element) {
    if (top == MAX - 1) {
        cout << "Stack Overflow" << endl;
        return;
    }
    stack[++top] = element;
}

void pop() {
    if (top == -1) {
        cout << "Stack Underflow" << endl;
        return;
    }
    cout << "Popped: " << stack[top--] << endl;
}
void peek() {
    if (top == -1) {
        cout << "Stack is Empty" << endl;
        return;
    }
    cout << "Top Element: " << stack[top] << endl;
}

void display() {
    if (top == -1) {
        cout << "Stack is Empty" << endl;
        return;
    }
    for (int i = top; i >= 0; i--) {
        cout << stack[i] << " ";
    }
    cout << endl;
}

int main() {
    push(10);
    push(20);
    push(30);
    display();
    peek();
    pop();
    display();
    return 0;
}