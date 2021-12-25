#include <iostream>
using namespace std;

class A						// Parent Class
{
	public:
		int x;
		int y;
};

class B:public A			// Child Class
{
	public:
		void display()
		{
			cout << "x : " << x << endl;
			cout << "y : " << y << endl;
		}
};

int main()
{
	B obj;
	
	obj.x = 30;			// Calling Parent class data members using Child Object.
	obj.y = 40;

	obj.display();
	
	return 0;
}
			
