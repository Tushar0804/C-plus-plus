#include <iostream>
using namespace std;

class A					// Parent Class
{
	public:
		int x;
		int y;
};

class B:public A		// Child Class
{
	public:
		void display()
		{
			x = 10;		// Parent class data members in child class
			y = 20;
			cout << "x : " << x << endl;
			cout << "y : " << y << endl;
		}
};

int main()
{
	B obj;
	obj.display();
	
	return 0;
}
