#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

class Queue {
private:
    Node* front;
    Node* rear;
    int size;

public:
    Queue() {
        front = rear = NULL;
        size = 0;
    }

    bool isEmpty() {
        return front == NULL;
    }

    void enqueue(int value) {

        Node* newNode = new Node(value);

        if (isEmpty())
            front = rear = newNode;
        else {
            rear->next = newNode;
            rear = newNode;
        }

        size++;
    }

    int getSize() {
        return size;
    }
};

int main() {

    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "Queue Size: " << q.getSize();

    return 0;
}