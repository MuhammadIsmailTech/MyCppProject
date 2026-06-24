#include <iostream>
using namespace std;

int main() {
    int Post_Inc_Counter = 7;
    int Pre_Inc_Counter = 10;

    Post_Inc_Counter++;   // Post-increment
    ++Pre_Inc_Counter;    // Pre-increment

    cout << "Post_Inc_Counter = " << Post_Inc_Counter << endl;
    cout << "Pre_Inc_Counter = " << Pre_Inc_Counter << endl;

    return 0;
}