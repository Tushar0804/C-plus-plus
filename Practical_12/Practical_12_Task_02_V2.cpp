#include <iostream>
using namespace std;

class A
{
	private:
		int x;
	public:
		A(int x)
		{
			cout << "Class A Constructor Called" << endl;
			this->x = x;
			cout << "x is : " << x << endl;
		}
		~A()
		{
			cout << "Class A Destructor Called" << endl;
		}
};

class B:public A					// Inheriting class A.
{
	private:
		int y;
	public:
		B(int x, int y):A(x)		// Pass parameters to the class A through class B constructor.
		{
			cout << "Class B Constructor Called" << endl;
			this->y = y;
			cout << "y is : " << y << endl;
		}
		~B()
		{
			cout << "Class B Destructor Called" << endl;
		}
};

int main()
{
	B obj(10, 20);			// Creating Class B object
	
	return 0;
}
			
