#include <iostream>
using namespace std;

// Function to swap values using pointers
void swapValues(int *a, int *b) {
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    // Step 1: Declare and initialize variables
    int num1 = 10;
    int num2 = 20;

    // Step 2: Declare pointers
    int *ptr1 = &num1;
    int *ptr2 = &num2;

    // Display values before swapping
    cout << "Before Swapping:" << endl;
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;

    // Step 3 & 4: Call swap function
    swapValues(ptr1, ptr2);

    // Display values after swapping
    cout << "\nAfter Swapping:" << endl;
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;

    return 0;
}