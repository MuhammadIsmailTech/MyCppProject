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

public:
    Queue() {
        front = rear = NULL;
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
    }

    void dequeue() {

        if (isEmpty()) {
            cout << "Queue Underflow";
            return;
        }

        Node* temp = front;
        front = front->next;

        if (front == NULL)
            rear = NULL;

        delete temp;
    }

    void display() {
        Node* temp = front;

        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
};

int main() {

    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.dequeue();

    cout << "Queue after Dequeue: ";
    q.display();

    return 0;
}