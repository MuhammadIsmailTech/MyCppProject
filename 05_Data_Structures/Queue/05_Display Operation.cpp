#include <iostream>
using namespace std;

#define MAX 5

int queue[MAX] = {10, 20, 30, 40};
int front = 0, rear = 3;

void display()
{
    if (front == -1 || front > rear)
    {
        cout << "Queue is Empty" << endl;
        return;
    }

    cout << "Queue Elements: ";

    for (int i = front; i <= rear; i++)
        cout << queue[i] << " ";

    cout << endl;
}

int main()
{
    display();

    return 0;
}