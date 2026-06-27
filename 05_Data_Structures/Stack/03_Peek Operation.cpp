#include <iostream>
using namespace std;

#define MAX 5

int stack[MAX] = {10, 20, 30};
int top = 2;

void peek()
{
    if (top == -1)
    {
        cout << "Stack is Empty" << endl;
        return;
    }

    cout << "Top Element: " << stack[top] << endl;
}

int main()
{
    peek();

    return 0;
}