#include <iostream>
using namespace std;

int main() {
try {    // Code that may throw an exception
int numerator = 10;
int denominator = 0;

if (denominator == 0) 
{
throw 0;
}
int result = numerator/denominator; //if denominator not zero
cout << "Result: " << result << endl;}

catch (int exception) 
{  	 // Handling the exception
cout << "Exception caught: Division by zero!";
}
return 0;
 }