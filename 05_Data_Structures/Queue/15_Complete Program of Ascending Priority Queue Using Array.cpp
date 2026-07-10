#include <iostream>
using namespace std;

#define MAX 5

int pq[MAX];
int rear = -1;

// Insert Element
void insert(int value)
{
    if (rear == MAX - 1)
    {
        cout << "Priority Queue Overflow!" << endl;
        return;
    }

    int i;

    // Shift larger elements to the right
    for (i = rear; i >= 0 && pq[i] > value; i--)
    {
        pq[i + 1] = pq[i];
    }

    pq[i + 1] = value;
    rear++;

    cout << value << " inserted successfully." << endl;
}

// Delete Highest Priority Element (Smallest Number)
void deleteElement()
{
    if (rear == -1)
    {
        cout << "Priority Queue Underflow!" << endl;
        return;
    }

    cout << "Deleted Element: " << pq[0] << endl;

    // Shift elements left
    for (int i = 0; i < rear; i++)
    {
        pq[i] = pq[i + 1];
    }

    rear--;
}

// Display Queue
void display()
{
    if (rear == -1)
    {
        cout << "Priority Queue is Empty!" << endl;
        return;
    }

    cout << "Priority Queue: ";

    for (int i = 0; i <= rear; i++)
    {
        cout << pq[i] << " ";
    }

    cout << endl;
}

// Main Function
int main()
{
    int choice, value;

    do
    {
        cout << "\n===== Ascending Priority Queue =====";
        cout << "\n1. Insert";
        cout << "\n2. Delete";
        cout << "\n3. Display";
        cout << "\n4. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                insert(value);
                break;

            case 2:
                deleteElement();
                break;

            case 3:
                display();
                break;

            case 4:
                cout << "Program Ended." << endl;
                break;

            default:
                cout << "Invalid Choice!" << endl;
        }

    } while (choice != 4);

    return 0;
}