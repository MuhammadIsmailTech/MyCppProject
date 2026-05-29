#include <iostream>
using namespace std;

class Box {
private:
    int length;

public:
    // Constructor
    Box(int l = 0) {
        length = l;
    }

    // Operator Overloading
    Box operator + (Box b) {
        Box temp;
        temp.length = length + b.length;
        return temp;
    }

    // Display Function
    void display() {
        cout << "Length = " << length << endl;
    }
};

int main() {

    Box box1(10);
    Box box2(20);

    // Using overloaded + operator
    Box box3 = box1 + box2;

    box3.display();

    return 0;
}