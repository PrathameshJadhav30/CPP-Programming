#include<iostream> 
using namespace std;
int main()
{
	// Initializing variables
	int x = 19, y = 2;
	char c = 'x';
	// Type conversion
	double div;
	div = (double)x / y;
	c = c + 2;
	cout << "The output of Implicit conversion : " << c << endl;
	cout << "The output of Explicit conversion : " << div ;
	return 0;
}