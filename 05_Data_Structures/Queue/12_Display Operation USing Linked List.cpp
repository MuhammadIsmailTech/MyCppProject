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

    void display() {

        if (isEmpty()) {
            cout << "Queue is Empty";
            return;
        }

        Node* temp = front;

        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
};

int main() {

    Queue q;

    q.enqueue(5);
    q.enqueue(15);
    q.enqueue(25);
    q.enqueue(35);

    cout << "Queue Elements: ";
    q.display();

    return 0;
}