#include<iostream>
#include<cstring>
using namespace std;
class twoD_Shape //Base Class:
{ 
public: //Public Members:
 double width;
 double height;
 //this function will Show dimensions:
 void showDim() {
 cout<<" Width and height are " <<width<< " and " <<height<<endl;
}};
//Base Class(i.e. twoD_Shape) is Inherited by derived class(i.e. Triangle)
class Triangle: public twoD_Shape 
{
public:
 double area() { //using Public Members of Base Class
 return (width * height)/2;
}};
int main() {
//Two objects Created having type Triangle.
 Triangle t1, t2; 
 t1.width = 4.0;
 t1.height = 4.0;
 t2.width = 8.0;
 t2.height = 12.0;
 cout<<" Info for t1: "<<endl; //1st object Information
 t1.showDim();
 cout<< " Area is “ <<t1.area()<<endl;
 cout<< " Info for t2: “ <<endl; //2nd object Information.
 t2.showDim();
 cout<<" Area is "<<t2.area()<<endl;
 return 0; 
}