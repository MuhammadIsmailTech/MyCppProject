#include <iostream>
using namespace std;

class MyDeque {
private:
    int arr[100];      // fixed-size array
    int front;
    int rear;
    int size;
public:
    MyDeque() 	// Constructor  
{
        front = 50;    // start from middle 		to allow push_front
        rear = 49;
        size = 0;
    }

    void push_back(int x) {
        if (rear == 99) {
            cout << "Deque overflow at rear!" << endl;
            return;
        }
        rear++;
        arr[rear] = x;
        size++;
    }

    void push_front(int x) {
        if (front == 0) {
            cout << "Deque overflow at front!" << endl;
            return;
        }
        front--;
        arr[front] = x;
        size++;
    }
 void pop_front() {
        if (size == 0) {
            cout << "Deque underflow!" << endl;
            return;
        }
        front++;
        size--;
    }

      void pop_back() {
        if (size == 0) {
            cout << "Deque underflow!" << endl;
            return;
        }
        rear--;
        size--;
    }
 void print() {
        if (size == 0) {
            cout << "Deque is empty!" << endl;
            return;
        }
        for (int i = front; i <= rear; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    MyDeque dq;
    
    dq.push_back(10);
    dq.push_back(20);
    dq.push_front(30);
 
    // Print deque elements
    dq.print();
    
    // Pop from front and back
    dq.pop_front();
    dq.pop_back();
    
    // Print deque elements after pop
    dq.print();

    return 0;
}