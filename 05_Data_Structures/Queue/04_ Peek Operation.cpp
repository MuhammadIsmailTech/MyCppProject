#include <iostream>
using namespace std;

#define MAX 5

int queue[MAX] = {10, 20, 30};
int front = 0, rear = 2;

int peek()
{
    if (front == -1 || front > rear)
    {
        cout << "Queue is Empty" << endl;
        return -1;
    }

    return queue[front];
}

int main()
{
    cout << "Front Element: " << peek() << endl;

    return 0;
}