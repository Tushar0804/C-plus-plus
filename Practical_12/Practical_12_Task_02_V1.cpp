#include <iostream>
using namespace std;

class A
{
	public:
		A()
		{
			cout << "Class A Constructor Called" << endl;
		}
		~A()
		{
			cout << "Class A Destructor Called" << endl;
		}
};

class B:public A					// Inheriting class A.
{
	public:
		B()
		{
			cout << "Class B Constructor Called" << endl;
		}
		~B()
		{
			cout << "Class B Destructor Called" << endl;
		}
};
class C:public B					// Inheriting class B.
{
	public:
		C()
		{
			cout << "Class C Constructor Called" << endl;
		}
		~C()
		{
			cout << "Class C Destructor Called" << endl;
		}
};			

int main()
{
	C obj2;			// Creating Class C object
	
	return 0;
}
			
