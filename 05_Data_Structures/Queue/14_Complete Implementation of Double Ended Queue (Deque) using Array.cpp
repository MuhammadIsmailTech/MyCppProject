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