#include <iostream>
using namespace std;
template <class T>
void custom_add (T value1, T value2)
{
 cout << "Addition = " << (value1 + value2) << endl;
}
int main () 
{
 custom_add<int>(3, 5); // type specifier <int> present
 custom_add<float>(3.2, 4.5); // type specifier <float> present
 custom_add<double>(3.2123, 4.5456); // type specifier <double> present
 return 0;
}