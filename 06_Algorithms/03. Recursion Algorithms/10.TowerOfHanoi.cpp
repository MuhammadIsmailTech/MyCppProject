#include <iostream>
using namespace std;

// Recursive function for Tower of Hanoi
void towerOfHanoi(int n, char source, char auxiliary, char destination)
{
    // Base Case
    if (n == 1)
    {
        cout << "Move Disk 1 from "
             << source << " to "
             << destination << endl;
        return;
    }

    // Move n-1 disks from source to auxiliary
    towerOfHanoi(n - 1, source, destination, auxiliary);

    // Move largest disk
    cout << "Move Disk " << n
         << " from " << source
         << " to " << destination << endl;

    // Move n-1 disks from auxiliary to destination
    towerOfHanoi(n - 1, auxiliary, source, destination);
}

int main()
{
    int disks;

    cout << "Enter number of disks: ";
    cin >> disks;

    cout << "\nSteps to solve Tower of Hanoi:\n\n";

    towerOfHanoi(disks, 'A', 'B', 'C');

    return 0;
}