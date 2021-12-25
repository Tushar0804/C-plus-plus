#include <iostream>
using namespace std;

class A
{
	public:
		int x;
	protected:
		int y;
	private:
		int z;
};

class B:public A				// Inheriting class A in public mode.
{
	public:
		void display()
		{
			cout << "x : " << x << endl;
//			cout << "y : " << y << endl;
		}
};

int main()
{
	B obj;

	obj.x = 30;
//	obj.y = 40;		 // since y is protected so this also cannot be accessed using objects
//	obj.z = 50;		 // since z is private so this also cannot be accessed using objects

	obj.display();
	
	return 0;
}
			
