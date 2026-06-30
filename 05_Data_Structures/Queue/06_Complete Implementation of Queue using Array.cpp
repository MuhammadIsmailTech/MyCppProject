#include <iostream>
using namespace std;

class myQueue {
private:
    int* arr;        // Array to store queue elements
    int capacity;    // Maximum number of elements
    int size;        // Current number of elements

public:
    // Constructor
    myQueue(int capacity) {
        this->capacity = capacity;
        arr = new int[capacity];
        size = 0;
    }
     // Check if queue is empty
    bool isEmpty() {
        return size == 0;
    }

    // Check if queue is full
    bool isFull() {
        return size == capacity;
    }

    // Enqueue operation
    void enqueue(int x) {
        if (isFull()) {
            cout << "Queue is full!" << endl;
            return;
        }
        arr[size] = x;
        size++;
    }
     // Dequeue operation
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
            return;
        }
        for (int i = 1; i < size; i++) {
            arr[i - 1] = arr[i];
        }
        size--;
    }
    // Get front element
    int getFront() {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
            return -1;
        }
        return arr[0];
    }
     // Get rear element
    int getRear() {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
            return -1;
        }
        return arr[size - 1];
    } 	};
int main() {
    myQueue q(3);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    cout << "Front: " << q.getFront() << endl;
	    q.dequeue();
    cout << "Front: " << q.getFront() << endl;
    cout << "Rear: " << q.getRear() << endl;
	    q.enqueue(40);
    return 0;
}