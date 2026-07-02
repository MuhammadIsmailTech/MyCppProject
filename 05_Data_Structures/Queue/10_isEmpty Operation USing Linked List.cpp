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
};

int main() {

    Queue q;

    if (q.isEmpty())
        cout << "Queue is Empty";
    else
        cout << "Queue is Not Empty";

    return 0;
}