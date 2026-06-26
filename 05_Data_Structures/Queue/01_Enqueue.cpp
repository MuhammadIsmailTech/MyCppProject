#include <iostream>
using namespace std;

#define MAX 5

int queue[MAX];
int front = -1, rear = -1;

// Function to insert an element into the queue
void enqueue(int item)
{
    // Check for Overflow
    if (rear == MAX - 1)
    {
        cout << "Queue Overflow!" << endl;
        return;
    }

    // Insert first element
    if (front == -1)
        front = 0;

    rear++;
    queue[rear] = item;

    cout << item << " inserted into the queue." << endl;
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);

    return 0;
}