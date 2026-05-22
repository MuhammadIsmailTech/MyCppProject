#include <iostream>
using namespace std;
class temp   {	//class begin
	int a;
	int b;
public:
int solve(int input)   {	//member function
	a = input;
	b = a/2;
	return b;
} };
int main() {
   int n;
   cout << "Enter a number: "; // Prompt user for input
   cin >> n;
temp half; //object created
   int ans = half.solve(n); // Call the solve function and store the result in ans
   cout << "Half of the input is: "<<ans<<endl;
return 0;
}