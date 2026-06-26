//A class myQueue that represents a queue using a dynamic array

#include <iostream>
using namespace std;

class myQueue {
int* arr; 	// Array to store queue elements.
int capacity; 	//Maximum number of elements the queue can hold.
int size; 	// Current number of elements in the queue.
    
public:
    myQueue(int c) // Constructor
{
        capacity = c;
        arr = new int[capacity]; // Dynamically create an array of size 'capacity' to represent the queue.
        size = 0;	//meaning the queue is empty
    }
}