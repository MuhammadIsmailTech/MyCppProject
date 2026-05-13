#include<iostream>
using namespace std;
class hide { //simple class.
 private: //private member. (abstraction)
 int x, y;
 public: //public member.
 hide() //constructor.
 {
 x=10;
 y=20;
 }
//controlled access = simple function to display values
 void show() {
 cout<<" The value of x is: "<<x<<endl;
 cout<<" The value of y is: "<<y;
 }};
int main() {
 hide obj; //object creation of type hide.
 obj.show(); //public member called using object.
 return 0;
}