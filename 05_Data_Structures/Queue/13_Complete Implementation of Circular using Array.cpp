#include <iostream>
using namespace std;

class myQueue {
private:
    int* arr;        // fixed-size array
    int front;       // index of front element
    int size;        // current number of elements
    int capacity;    // maximum capacity
public:
    // Constructor
    myQueue(int c) {
        capacity = c;
        arr = new int[c];
        front = 0;
        size = 0;
    }