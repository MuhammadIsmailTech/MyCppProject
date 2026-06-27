#include <iostream>
using namespace std;

#define MAX 5

int stack[MAX] = {10, 20, 30};
int top = 2;

void pop()
{
    if (top == -1)
    {
        cout << "Stack Underflow" << endl;
        return;
    }

    cout << "Popped Element: " << stack[top--] << endl;
}

void display()
{
    if (top == -1)
    {
        cout << "Stack is Empty" << endl;
        return;
    }

    cout << "Stack Elements: ";
    for (int i = top; i >= 0; i--)
        cout << stack[i] << " ";

    cout << endl;
}

int main()
{
    display();

    pop();

    display();

    return 0;
}