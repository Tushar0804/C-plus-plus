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

class B:private A					// Inheriting class A in private mode.
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

//	obj.x = 30;		 // since class B is accessing class A through private mode so it cannot be accessed through objects.  
//	obj.y = 40;


	obj.display();	// Garbage value will be printed
	
	return 0;
}
			
