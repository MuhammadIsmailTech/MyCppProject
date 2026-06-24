#include <iostream>
using namespace std;

int main() {
    int Post_Dec_Counter = 17;
    int Pre_Dec_Counter = 100;

    Post_Dec_Counter--;   // Post-decrement
    --Pre_Dec_Counter;    // Pre-decrement

    cout << "Post_Dec_Counter = " << Post_Dec_Counter << endl;
    cout << "Pre_Dec_Counter = " << Pre_Dec_Counter << endl;

    return 0;
}