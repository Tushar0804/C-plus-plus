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

class B:private A				// Inheriting class A in private mode.
{
	public:
		void display()
		{
			x = 10;
			y = 20;
//			z = 30;	 			// z is private hence it is not available in this class. 
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
			
