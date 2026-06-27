void push(int element) {
    if (top == MAX - 1) {
        cout << "Stack Overflow" << endl;
        return;
    }
    stack[++top] = element;
}