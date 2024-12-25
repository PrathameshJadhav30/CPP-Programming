// A C++ program to demonstrate use of class
// in a namespace
#include <iostream>
using namespace std;

namespace ns
{
	// A Class in a namespace
	class prepster
	{
	public:
		void display()
		{
			cout<<"ns::prepster::display()"<<endl;;
		}
	};
}

int main()
{
	// Creating Object of prepster Class
	ns::prepster obj;

	obj.display();

	return 0;
}