#include <iostream>
using namespace std;

#define MAX 5

int queue[MAX] = {10, 20, 30};
int front = 0, rear = 2;

int dequeue()
{
    if (front == -1 || front > rear)
    {
        cout << "Queue Underflow" << endl;
        return -1;
    }

    int item = queue[front];
    front++;

    cout << item << " removed from queue." << endl;

    return item;
}

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

    dequeue();

    display();

    return 0;
}