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

class B:protected A					// Inheriting class A in protected mode.
{
	public:
		void display()
		{
			cout << "x : " << x << endl;
			cout << "y : " << y << endl;
		}
};
class C:public B					// Inheriting class B in public mode.
{
	public:
		void display()
		{
			x = 10;
			y = 20;
			cout << "x : " << x << endl;
			cout << "y : " << y << endl;
		}
};			

int main()
{
	B obj;

//	obj.x = 30;		 // since class B is accessing class A through protected mode so it cannot be accessed through objects.  
//	obj.y = 40;

	C obj2;			// since class B is accessing class A through protected mode so it can be accessed through inheritance.
	
	obj2.display();
	
	return 0;
}
			
