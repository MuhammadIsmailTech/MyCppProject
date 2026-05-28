#include <iostream>
using namespace std;
// sum with 2 int parameters
int sum(int num1, int num2) {
 return (num1 + num2); 
}
// sum with 2 float parameters
float sum(float num1, float num2) {
 return (num1 + num2);
}
// sum with 3 int parameters
int sum(int num1, int num2, int num3) {
 return (num1 + num2 + num3);
}

int main() {
 cout << "Calling Sum with 2 int = " << sum(6, 27) << endl;
 cout << "Calling Sum with 2 float = " << sum(6.25f, 27.0f) << endl;
 cout << "Calling Sum with 3 int " << sum(6, 25, 27) << endl;
 
return 0; 
}