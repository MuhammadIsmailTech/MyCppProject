#include <iostream>
using namespace std;

#define MAX 5

int stack[MAX] = {10, 20, 30, 40};
int top = 3;

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

    return 0;
}